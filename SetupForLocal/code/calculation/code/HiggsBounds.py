import subprocess, os, pyslha
import parameter as para
from fileIO import check_dir_exists
from fileIO import check_file_exists

def create_HiggsBounds_inputfile():
    check_file_exists(para.path_temp + para.file_input)
    try:
        subprocess.check_call('cp ' + para.path_temp + para.file_input + ' ' + para.pathprog_HiggsBounds + para.file_input_HiggsBounds, shell=True)
    except:
        raise Exception('Error: HiggsBounds.create_HiggsBounds_inputfile: Could not create HiggsBounds inputfile')

def run_HiggsBounds():
    check_file_exists(para.pathprog_HiggsBounds + para.file_input_HiggsBounds)
    check_dir_exists(para.pathprog_HiggsBounds)
    os.chdir(para.pathprog_HiggsBounds)
    try:
        subprocess.check_call('./HiggsBounds LandH SLHA 3 1 ' + para.file_input_HiggsBounds + ' > ' + para.path_output_HiggsBounds + para.file_output_HiggsBounds_log + ' 2>&1', shell=True)
    except:
        raise Exception('Error: HiggsBounds.run_HiggsBounds: Could not run HiggsBounds')


def move_output():
    check_file_exists(para.pathprog_HiggsBounds + para.file_input_HiggsBounds)
    try:
        subprocess.check_call('mv ' + para.pathprog_HiggsBounds + para.file_input_HiggsBounds + ' ' + para.path_output_HiggsBounds + para.file_output_HiggsBounds, shell=True)
        subprocess.check_call('cp ' + para.path_temp + para.file_input + ' ' + para.path_output_HiggsBounds + para.file_input_HiggsBounds, shell=True)
    except:
        raise Exception('Error: HiggsBounds.move_output: Could not move HiggsBounds output')


def check_output():
    check_file_exists(para.path_output_HiggsBounds + para.file_output_HiggsBounds)
    res = pyslha.readSLHAFile(para.path_output_HiggsBounds + para.file_output_HiggsBounds)
    try:
        result = res.blocks['HIGGSBOUNDSRESULTS'][1,1]
    except:
        raise Exception('Error: HiggsBounds.check_output: HiggsBounds output not valid')
    if result == 0:
        raise Exception('Error: HiggsBounds.check_output: HiggsBounds output not valid')


def check_result_allowed():
    check_file_exists(para.path_output_HiggsBounds + para.file_output_HiggsBounds)
    res = pyslha.readSLHAFile(para.path_output_HiggsBounds + para.file_output_HiggsBounds)
    try:
        result = int(res.blocks['HIGGSBOUNDSRESULTS'][1,2])
        limit = float(res.blocks['HIGGSBOUNDSRESULTS'][1,3])
    except:
        raise Exception('Error: HiggsBounds.check_result_allowed: HiggsBounds output not valid')

    if result==1 and limit < 1.: return True
    elif result==0 and limit > 1.: return False
    elif result==-1: raise Exception('Error: HiggsBounds.check_result_allowed: HiggsBounds output unphysical')
    else: raise Exception('Error: HiggsBounds.check_result_allowed: HiggsBounds output not valid')


