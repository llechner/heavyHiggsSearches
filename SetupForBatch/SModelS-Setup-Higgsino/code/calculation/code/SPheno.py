import os, subprocess, pyslha
import parameter as para
from fileIO import get_Higgs_PDG_number
from fileIO import check_dir_exists
from fileIO import check_file_exists
import numpy as np

def copy_inputfiles():
    check_file_exists(para.path_temp + para.file_input)
    check_dir_exists(para.path_output_SPheno)
    check_dir_exists(para.pathprog_SPheno)
    try:
        subprocess.check_call('cp ' + para.path_temp + para.file_input + ' ' + para.path_output_SPheno + para.file_input_SPheno, shell=True)
        subprocess.check_call('cp ' + para.path_temp + para.file_input + ' ' + para.pathprog_SPheno + para.file_input_SPheno, shell=True)
    except:
        raise Exception('Error: SPheno.copy_inputfiles: Could not copy SPheno inputfile')


def run_SPheno():
    check_dir_exists(para.pathprog_SPheno)
    check_file_exists(para.pathprog_SPheno + para.file_input_SPheno)
    os.chdir(para.pathprog_SPheno)
    try:
        subprocess.check_call('./bin/SPheno ' + para.file_input_SPheno, shell=True)
    except:
        raise Exception('Error: SPheno.run_SPheno: Could not run SPheno')


def switch_sign_mu():
    check_file_exists(para.path_temp + para.file_input)
    input = pyslha.readSLHAFile(para.path_temp + para.file_input)
    input.blocks['EXTPAR'][23] = float(input.blocks['EXTPAR'][23])*(-1)
    pyslha.writeSLHAFile(para.path_temp + para.file_input, input)    
    
    
def set_Q():
    check_file_exists(para.path_temp + para.file_input)
    input = pyslha.readSLHAFile(para.path_temp + para.file_input)
    input.blocks['MODSEL'][12] = np.sqrt(float(input.blocks['EXTPAR'][43])*float(input.blocks['EXTPAR'][46]))
    pyslha.writeSLHAFile(para.path_temp + para.file_input, input)    
    
    
def move_output():
    check_file_exists(para.pathprog_SPheno + 'SPheno.spc')
    check_dir_exists(para.path_output_SPheno)
    try:
        subprocess.check_call('mv ' + para.pathprog_SPheno + 'SPheno.spc ' + para.path_output_SPheno + para.file_output_SPheno, shell=True)
        subprocess.check_call('mv ' + para.pathprog_SPheno + 'Messages.out' + ' ' + para.path_output_SPheno + para.file_output_SPheno_log, shell=True)
    except:
        raise Exception('Error: SPheno.move_output: Could not move SPheno output')


def check_output():
    check_file_exists(para.path_output_SPheno + para.file_output_SPheno)
    check_file_exists(para.path_output_SPheno + para.file_output_SPheno_log)
    try:
        input = pyslha.readSLHAFile(para.path_output_SPheno + para.file_output_SPheno)
    except:
        raise Exception('Error: SPheno.check_output: SPheno output not valid')
    

def check_LSP():
    check_file_exists(para.path_output_SPheno + para.file_output_SPheno)
    input = pyslha.readSLHAFile(para.path_output_SPheno + para.file_output_SPheno)
    neutralino_PDG = [1000022,1000023,1000025,1000035]
    masses = list(input.blocks['MASS'].items())
    masses = [item for item in masses if item[0]>50]
    mass_LSP = min(np.abs([item[1] for item in masses if item[0] in neutralino_PDG]))
    check = True
    for item in masses:
        if item[0] in neutralino_PDG: continue
        if item[1] <= mass_LSP:
            check = False #lightest SUSY particle is not a neutralino
            break
    return check
    
def remove_files():
    check_dir_exists(para.pathprog_SPheno)
    try:
        subprocess.check_call('rm -f ' + para.pathprog_SPheno + para.file_input_SPheno, shell=True)
    except:
        pass

#get the mass for the PDG value particle from SusyHit output
#def get_mass_SLHA(PDG):
#    return pyslha.readSLHAFile(para.path_output_SusyHit + para.file_output_SusyHit).decays[PDG].mass


def get_BR_list_PDG(filename, PDG):
    check_file_exists(filename)
    BR = pyslha.readSLHAFile(filename).decays[PDG].decays
    if len(BR) == 0:
        raise Exception('Error: SPheno.get_BR_list_PDG: Empty branching ratio list')
    BR_list = []
    for decay in range(len(BR)):
        BR_list.append([float(BR[decay].br), list(BR[decay].ids)])
    return BR_list
    

def crop_BR_list_particles(BR_list, particles):
    if not isinstance(BR_list, list) or len(BR_list) == 0:
        raise Exception('Error: SPheno.crop_BR_list_particles: Empty or unknown branching ratio list')
    if not isinstance(particles, list) or len(particles) == 0:
        raise Exception('Error: SPheno.crop_BR_list_particles: Empty or unknown particles list')
    new_BR_list = []
    for element in BR_list:
        if False in [int(item) in particles for item in element[1]]:
            continue
        new_BR_list.append(element)
    return new_BR_list


def crop_BR_list_thresh(BR_list, BRthresh):
    if not isinstance(BR_list, list) or len(BR_list) == 0:
        raise Exception('Error: SPheno.crop_BR_list_thresh: Empty or unknown branching ratio list')
    if not isinstance(BRthresh, float):
        raise Exception('Error: SPheno.crop_BR_list_thresh: Unknown threshold given')
    new_BR_list = []
    for element in BR_list:
        if float(element[0]) >= BRthresh:
            new_BR_list.append(element)
    return new_BR_list


def crop_BR_list_SUSYonly(BR_list):
    if not isinstance(BR_list, list) or len(BR_list) == 0:
        raise Exception('Error: SPheno.crop_BR_list_SUSYonly: Empty or unknown branching ratio list')
    new_BR_list = []
    for element in BR_list:
        if False in [abs(int(item)) > 50 for item in element[1]]:
            continue
        new_BR_list.append(element)
    return new_BR_list
    

def get_BR_sum(BR_list):
    if not isinstance(BR_list, list) or len(BR_list) == 0:
        raise Exception('Error: SPheno.get_BR_sum: Empty or unknown branching ratio list')
    BR_sum = sum([float(item[0]) for item in BR_list])
    return BR_sum

def get_susy_masslist():
    check_file_exists(para.path_output_SPheno + para.file_output_SPheno)
    input = pyslha.readSLHAFile(para.path_output_SPheno + para.file_output_SPheno)
    masses = list(input.blocks['MASS'].items())
    masses = [item for item in masses if item[0]>50]
    return masses

def format_masslist_to_string(mass_list):
    output = '['
    for element in mass_list:
        output += str(element[0]) + ', ' + str(element[1]) + ', '
    output = output[:-2] + ']'
    return output

def format_BR_to_string(BR_list):
    if len(BR_list)==0: return '[]'
    output = '['
    for element in BR_list:
        output += str(element) + ', '
    output = output[:-2] + ']'
    return output
        

