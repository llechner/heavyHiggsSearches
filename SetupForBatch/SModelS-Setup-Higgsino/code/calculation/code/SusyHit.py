import os, subprocess, pyslha
import parameter as para
from fileIO import remove_empty_lines
from fileIO import get_Higgs_PDG_number
from fileIO import check_dir_exists
from fileIO import check_file_exists

#main SusyHit function
#def main():
#    copy_inputfiles()
#    run_SusyHit()
#    move_output()
#    check_output()
#    remove_files()


def copy_inputfiles():
    check_file_exists(para.path_input + para.file_input_SusyHit)
    check_file_exists(para.path_temp + para.file_input)
    check_dir_exists(para.pathprog_SusyHit)
    try:
        subprocess.check_call('cp ' + para.path_input + para.file_input_SusyHit + ' ' + para.pathprog_SusyHit + 'susyhit.in', shell=True)
        subprocess.check_call('cp ' + para.path_temp + para.file_input + ' ' + para.pathprog_SusyHit + 'suspect2_lha.in', shell=True)
    except:
        raise Exception('Error: SusyHit.copy_inputfiles: Could not copy SusyHit inputfile')
    remove_empty_lines(para.pathprog_SusyHit + 'suspect2_lha.in')


def run_SusyHit():
    check_dir_exists(para.pathprog_SusyHit)
    os.chdir(para.pathprog_SusyHit)
    try:
        subprocess.check_call('./run > ' + para.path_output_SusyHit + para.file_output_SusyHit_log + ' 2>&1', shell=True)
    except:
        raise Exception('Error: SusyHit.run_SusyHit: Could not run SusyHit')


def move_output():
    check_file_exists(para.pathprog_SusyHit + 'susyhit_slha.out')
    check_dir_exists(para.path_output_SusyHit)
    try:
        subprocess.check_call('mv ' + para.pathprog_SusyHit + 'susyhit_slha.out ' + para.path_output_SusyHit + para.file_output_SusyHit, shell=True)
    except:
        raise Exception('Error: SusyHit.move_output: Could not move SusyHit output')


def check_output():
    check_file_exists(para.path_output_SusyHit + para.file_output_SusyHit_log)
    check_file_exists(para.path_output_SusyHit + para.file_output_SusyHit)
    f = open(para.path_output_SusyHit + para.file_output_SusyHit, 'r')
    list = f.readlines()
    f.close()
    if True in ['NaN' in item for item in list] or not True in ['BLOCK MASS' in item for item in list]:# or True in [len(get_BR_list_PDG(item))==0 for item in [1000022, 1000023, 1000025, 1000035, 1000024, 1000037, 25, 35, 36]]:
        raise Exception('Error: SusyHit.check_output: SusyHit output not valid')
    

def remove_files():
    check_dir_exists(para.pathprog_SusyHit)
    try:
        subprocess.check_call('rm -f ' + para.pathprog_SusyHit + '*.in', shell=True)
        subprocess.check_call('rm -f ' + para.pathprog_SusyHit + '*.out', shell=True)
    except:
        pass


#get the mass for the PDG value particle from SusyHit output
#def get_mass_SLHA(PDG):
#    return pyslha.readSLHAFile(para.path_output_SusyHit + para.file_output_SusyHit).decays[PDG].mass


def get_BR_list_PDG(PDG):
    check_file_exists(para.path_output_SusyHit + para.file_output_SusyHit)
    BR = pyslha.readSLHAFile(para.path_output_SusyHit + para.file_output_SusyHit).decays[PDG].decays
    if len(BR) == 0:
        raise Exception('Error: SusyHit.get_BR_list_PDG: Empty branching ratio list')
    BR_list = []
    for decay in range(len(BR)):
        BR_list.append([float(BR[decay].br), list(BR[decay].ids)])
    return BR_list
    

def crop_BR_list_particles(BR_list, particles):
    if not isinstance(BR_list, list) or len(BR_list) == 0:
        raise Exception('Error: SusyHit.crop_BR_list_particles: Empty or unknown branching ratio list')
    if not isinstance(particles, list) or len(particles) == 0:
        raise Exception('Error: SusyHit.crop_BR_list_particles: Empty or unknown particles list')
    new_BR_list = []
    for element in BR_list:
        if False in [int(item) in particles for item in element[1]]:
            continue
        new_BR_list.append(element)
    return new_BR_list


def crop_BR_list_thresh(BR_list, BRthresh):
    if not isinstance(BR_list, list) or len(BR_list) == 0:
        raise Exception('Error: SusyHit.crop_BR_list_thresh: Empty or unknown branching ratio list')
    if not isinstance(BRthresh, float):
        raise Exception('Error: SusyHit.crop_BR_list_thresh: Unknown threshold given')
    new_BR_list = []
    for element in BR_list:
        if float(element[0]) >= BRthresh:
            new_BR_list.append(element)
    return new_BR_list


def crop_BR_list_SUSYonly(BR_list):
    if not isinstance(BR_list, list) or len(BR_list) == 0:
        raise Exception('Error: SusyHit.crop_BR_list_SUSYonly: Empty or unknown branching ratio list')
    new_BR_list = []
    for element in BR_list:
        if False in [abs(int(item)) > 50 for item in element[1]]:
            continue
        new_BR_list.append(element)
    return new_BR_list
    

def get_BR_sum(BR_list):
    if not isinstance(BR_list, list) or len(BR_list) == 0:
        raise Exception('Error: SusyHit.get_BR_sum: Empty or unknown branching ratio list')
    BR_sum = sum([float(item[0]) for item in BR_list])
    return BR_sum



