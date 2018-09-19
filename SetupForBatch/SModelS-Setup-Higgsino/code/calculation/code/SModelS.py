#Lukas Lechner
#lukas.k.lechner@gmail.com
#26.04.2017

#SModelS function
#create XSECTION Block from cross section and BR inputs
#create Inputfile for SModels
#run SModels

import os, subprocess, pyslha, sys
import parameter as para
from SusHi import get_crosssections
from SPheno import crop_BR_list_SUSYonly
from SPheno import get_BR_list_PDG
from fileIO import get_Higgs_PDG_number
from fileIO import get_sqrts
from fileIO import check_dir_exists
from fileIO import check_file_exists

#main SModelS function
#def main():
#    create_temp_XSec_file()
#    create_SModelS_SLHAfile()
#    run_SModelS()
#    check_output()


#create XSECTION Blocks for SModels   <-- replace by SModels function soon!!!
def create_temp_XSec_file():
    xs_ggh, xs_bbh = get_crosssections()
    filename = para.path_temp + para.file_input
    BR_list = crop_BR_list_SUSYonly(get_BR_list_PDG(filename,get_Higgs_PDG_number()))
    if len(BR_list) == 0:
        raise Exception('Error: SModelS.create_temp_XSec_file: No decay mode exists')

    text = ['XSECTION   ' + str("{:.2E}".format(get_sqrts())) + '   2212   2212   ' + str(len(item[1])) + '   ' + get_decay_PDG_string(item[1]) + '    # PDG intermediate Higgs: ' + str(get_Higgs_PDG_number()) + '\n   0   0   0   0   0   0   ' + str("{:.8E}".format(get_sigmaxB(xs_ggh, xs_bbh, item[0]))) + '    SModelS 1.1.1\n#\n' for item in BR_list]

    check_dir_exists(para.path_temp)
    with open(para.path_temp + para.file_temp_SModelS_XSec, 'w') as f:
        f.writelines("%s" % l for l in ['#\n'] + text)


#create SModels inputfile from SPheno output and the XSECTION Blocks   <-- replace by pyslha/SModels function soon!!!
#check if files exist          
def create_SModelS_SLHAfile(interHiggs):
    if interHiggs: dir_name = para.path_output_SModelS_interHiggs
    else: dir_name = para.path_output_SModelS_direct

    check_file_exists(para.path_temp + para.file_input)
    check_dir_exists(para.pathprog_SModelS)
    check_dir_exists(dir_name)
    if interHiggs: create_temp_XSec_file()
    try:
        if interHiggs:
            subprocess.check_call('cat ' + para.path_temp + para.file_input + ' ' + para.path_temp + para.file_temp_SModelS_XSec + ' > ' +  para.path_output_SModelS_interHiggs + para.file_input_SModelS_interHiggs, shell=True)

        else:
            os.chdir(para.pathprog_SModelS)
            subprocess.check_call('cp ' + para.path_temp + para.file_input + ' ' + para.pathprog_SModelS, shell=True)
            subprocess.check_call('./smodelsTools.py xseccomputer -s ' + str(int(get_sqrts()/1000.0)) + ' -e 10000 -6 -P -f ' + para.file_input + ' > ' + para.path_output_SModelS_direct + 'xsec.log 2>&1', shell=True)
            subprocess.check_call('mv ' + para.pathprog_SModelS + para.file_input + ' ' + para.path_output_SModelS_direct + para.file_input_SModelS_direct, shell=True)
    except:
        print(sys.exc_info()[1])
        raise Exception('Error: SModelS.create_SModelS_SLHAfile: Could not create SModelS inputfile')

#run SModelS 
#check if files exist          
def run_SModelS(interHiggs):
    if interHiggs:
        file_name = para.file_input_SModelS_interHiggs
        logfile_name = para.file_output_SModelS_interHiggs_log
        dir_name = para.path_output_SModelS_interHiggs
    else:
        file_name = para.file_input_SModelS_direct
        logfile_name = para.file_output_SModelS_direct_log
        dir_name = para.path_output_SModelS_direct
        
    check_dir_exists(para.pathprog_SModelS)
    check_dir_exists(dir_name)
    check_file_exists(dir_name + file_name)
    os.chdir(para.pathprog_SModelS)
    try:
        subprocess.check_call('./runSModelS.py -T 1800 -f ' + dir_name + file_name + ' -p parameters.ini -o ' + dir_name + ' -v warning > ' + dir_name + logfile_name + ' 2>&1', shell=True)
    except:
        print(sys.exc_info()[1])
        raise Exception('Error: SModelS.create_SModelS_SLHAfile: Could not run SModelS')


def check_output(interHiggs):
    if interHiggs:
        file_name = para.file_input_SModelS_interHiggs
        dir_name = para.path_output_SModelS_interHiggs
    else:
        file_name = para.file_input_SModelS_direct
        dir_name = para.path_output_SModelS_direct
        
    check_file_exists(dir_name + file_name + '.smodels')
    check_file_exists(dir_name + file_name + '.smodelsslha')
    if not check_SModelS_status_valid(dir_name + file_name + '.smodels'):
        raise Exception('Error: SModelS.check_output: Output not valid')


def read_rvalue(interHiggs):
    if interHiggs:
        file_name = para.file_input_SModelS_interHiggs
        dir_name = para.path_output_SModelS_interHiggs
    else:
        file_name = para.file_input_SModelS_direct
        dir_name = para.path_output_SModelS_direct
        
    check_file_exists(dir_name + file_name + '.smodelsslha')
    try:
        input = pyslha.readSLHAFile(dir_name + file_name + '.smodelsslha')
    except:
        with open(dir_name + file_name + '.smodelsslha', 'a') as f:
            f.writelines("BLOCK MASS")
        input = pyslha.readSLHAFile(dir_name + file_name + '.smodelsslha')
    if check_SModelS_outputstatus_valid(interHiggs) == 1:
        try:
            r = float(input.blocks['SMODELS_EXCLUSION'][1,1])
        except:
            raise Exception('Error: SModelS.read_rvalue: Could not read r value')
        return r
    elif check_SModelS_outputstatus_valid(interHiggs) == 0:
        r = 0.
        return r
    else:
        print(sys.exc_info()[1])
        raise Exception('Error: SModelS.check_excluded: Could not check exclusion value')
    
    
def get_excluded_topo():
    file_name = para.file_input_SModelS_direct
    dir_name = para.path_output_SModelS_direct
    filename = dir_name + file_name + '.smodelsslha'
    input = pyslha.readSLHAFile(filename)
    txname = str(input.blocks['SMODELS_EXCLUSION'][1,0])
    signal = str(input.blocks['SMODELS_EXCLUSION'][1,5])
    analysis = str(input.blocks['SMODELS_EXCLUSION'][1,4])
    return txname + '*' + signal + '*' + analysis

def check_valid(interHiggs):
    if interHiggs:
        file_name = para.file_input_SModelS_interHiggs
        dir_name = para.path_output_SModelS_interHiggs
    else:
        file_name = para.file_input_SModelS_direct
        dir_name = para.path_output_SModelS_direct
        
    check_file_exists(dir_name + file_name + '.smodelsslha')
    try:
        input = pyslha.readSLHAFile(dir_name + file_name + '.smodelsslha')
    except:
        with open(dir_name + file_name + '.smodelsslha', 'a') as f:
            f.writelines("BLOCK MASS")
        input = pyslha.readSLHAFile(dir_name + file_name + '.smodelsslha')

    if check_SModelS_outputstatus_valid(interHiggs) == 1:
        try:
            ex = float(input.blocks['SMODELS_EXCLUSION'][0,0])
        except:
            print('A')
            print(check_SModelS_outputstatus_valid(interHiggs))
            print(sys.exc_info()[1])
            raise Exception('Error: SModelS.check_excluded: Could not check exclusion value')
    elif check_SModelS_outputstatus_valid(interHiggs) == 0:
        ex = 0
    else:
        print(sys.exc_info()[1])
        raise Exception('Error: SModelS.check_excluded: Could not check exclusion value')
    return int(ex)

def check_SModelS_status_valid(filename):
    f = open(filename,'r')
    list = f.readlines()[:2]
    f.close()
    inputstatus = int(list[0].split(': ')[1])
    if inputstatus == 1: return True
    else: return False

def check_SModelS_outputstatus_valid(interHiggs):
    if interHiggs:
        file_name = para.file_input_SModelS_interHiggs
        dir_name = para.path_output_SModelS_interHiggs
    else:
        file_name = para.file_input_SModelS_direct
        dir_name = para.path_output_SModelS_direct
        
    filename = dir_name + file_name + '.smodels'
    f = open(filename,'r')
    list = f.readlines()[:2]
    f.close()
    outputstatus = int(list[1].split(': ')[1].split(' ')[0])
    return outputstatus

#calculate sigma x BR    
def get_sigmaxB(xs_ggh, xs_bbh, BR):
    return (float(xs_ggh)+float(xs_bbh))*float(BR)


def get_decay_PDG_string(PDG_list):
    if len(PDG_list) == 0:
        raise Exception('Error: SModelS.get_decay_PDG_string: No decay daughters given')
    pdg = ''
    for element in PDG_list:
        pdg += str(element) + '   '
    return pdg

def get_missing_topologies(interHiggs):
    if interHiggs:
        file_name = para.file_input_SModelS_interHiggs
        dir_name = para.path_output_SModelS_interHiggs
    else:
        file_name = para.file_input_SModelS_direct
        dir_name = para.path_output_SModelS_direct
        
    check_file_exists(dir_name + file_name + '.smodelsslha')
    try:
        input = pyslha.readSLHAFile(dir_name + file_name + '.smodelsslha')
    except:
        with open(dir_name + file_name + '.smodelsslha', 'a') as f:
            f.writelines("BLOCK MASS")
        input = pyslha.readSLHAFile(dir_name + file_name + '.smodelsslha')
    try:
        topos = list(input.blocks['SMODELS_MISSING_TOPOS'].items())
    except:
        raise Exception('Error: SModelS.get_missing_topologies: Could not read missing topologies')
    topos = [list(item[1]) for item in topos]
    return topos

def format_topo_to_string(topo_list):
    if len(topo_list)==0: return '[]'
    output = '['
    for element in topo_list:
        output += str(element[0]) + ', ' + str(element[1]) + ', '
    return output[:-2] + ']'
        
