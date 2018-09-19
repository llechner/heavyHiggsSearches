import os, subprocess, pyslha
import parameter as para
from fileIO import check_dir_exists
from fileIO import check_file_exists
from fileIO import append_mass_block
import numpy as np

def copy_inputfiles():
    check_file_exists(para.path_temp + para.file_input)
    check_dir_exists(para.path_output_SuperISO)
    check_dir_exists(para.pathprog_SuperISO)
    try:
        subprocess.check_call('cp ' + para.path_temp + para.file_input + ' ' + para.path_output_SuperISO + para.file_input_SuperISO, shell=True)
        subprocess.check_call('cp ' + para.path_temp + para.file_input + ' ' + para.pathprog_SuperISO + para.file_input_SuperISO, shell=True)
    except:
        raise Exception('Error: SuperISO.copy_inputfiles: Could not copy SuperISO inputfile')


def run_SuperISO():
    check_dir_exists(para.pathprog_SuperISO)
    check_file_exists(para.pathprog_SuperISO + para.file_input_SuperISO)
    os.chdir(para.pathprog_SuperISO)
    try:
        print(subprocess.check_call('./slha.x ' + para.file_input_SuperISO + ' > log.log 2>&1', shell=True))
    except:
        pass #raise Exception('Error: SuperISO.run_SuperISO: Could not run SuperISO')
    
def move_output():
    check_file_exists(para.pathprog_SuperISO + 'output.flha')
    check_dir_exists(para.path_output_SuperISO)
    try:
        subprocess.check_call('mv ' + para.pathprog_SuperISO + 'output.flha ' + para.path_output_SuperISO + para.file_output_SuperISO, shell=True)
        subprocess.check_call('mv ' + para.pathprog_SuperISO + 'log.log ' + para.path_output_SuperISO + para.file_output_SuperISO_log, shell=True)
    except:
        raise Exception('Error: SuperISO.move_output: Could not move SuperISO output')
    append_mass_block(para.path_output_SuperISO + para.file_output_SuperISO)


def check_output():
    check_file_exists(para.path_output_SuperISO + para.file_output_SuperISO)
    check_file_exists(para.path_output_SuperISO + para.file_output_SuperISO_log)
    try:
        input = pyslha.readSLHAFile(para.path_output_SuperISO + para.file_output_SuperISO)
    except:
        raise Exception('Error: SuperISO.check_output: SuperISO output not valid')
    

def check_flavorphysics():
    check_file_exists(para.path_output_SuperISO + para.file_output_SuperISO)
    input = pyslha.readSLHAFile(para.path_output_SuperISO + para.file_output_SuperISO)
    bsgamma = float(input.blocks['FOBS'][5,1][0])
    Bmumu = float(input.blocks['FOBS'][531,1][0])
    check_bsgamma = True
    check_Bmumu = True
    if bsgamma < para.bsgamma_min or bsgamma > para.bsgamma_max: check_bsgamma = False
    if Bmumu < para.Bmumu_min or Bmumu > para.Bmumu_max: check_Bmumu = False
    if False in [check_bsgamma, check_Bmumu]: return False #excluded by flavor physics
    else: return True
    
def remove_files():
    check_dir_exists(para.pathprog_SuperISO)
    try:
        subprocess.check_call('rm -f ' + para.pathprog_SuperISO + para.file_input_SuperISO, shell=True)
        subprocess.check_call('rm -f ' + para.pathprog_SuperISO + 'output.flha', shell=True)
    except:
        pass
