import subprocess, os, pyslha
import parameter as para
from fileIO import check_dir_exists
from fileIO import check_file_exists

def create_HiggsSignals_inputfile():
#    check_file_exists(para.path_output_SusyHit + para.file_output_SusyHit)
    check_file_exists(para.path_temp + para.file_input)
    try:
        subprocess.check_call('cp ' + para.path_temp + para.file_input + ' ' + para.path_output_HiggsSignals + para.file_input_HiggsSignals, shell=True)
        subprocess.check_call('cp ' + para.path_temp + para.file_input + ' ' + para.pathprog_HiggsSignals + para.file_input_HiggsSignals, shell=True)
    except:
        raise Exception('Error: HiggsSignals.create_HiggsSignals_inputfile: Could not create HiggsSignals inputfile')

def run_HiggsSignals():
    check_file_exists(para.path_output_HiggsSignals + para.file_input_HiggsSignals)
    check_dir_exists(para.pathprog_HiggsSignals)
    check_dir_exists(para.path_output_HiggsSignals)
    os.chdir(para.pathprog_HiggsSignals)
    try:
        subprocess.check_call('./HiggsSignals latestresults mass 2 SLHA 3 1 ' + para.file_input_HiggsSignals + ' > ' + para.path_output_HiggsSignals + para.file_output_HiggsSignals_log + ' 2>&1', shell=True)
    except:
        raise Exception('Error: HiggsSignals.run_HiggsSignals: Could not run HiggsSignals')


def move_output():
    check_dir_exists(para.pathprog_HiggsSignals)
    check_file_exists(para.pathprog_HiggsSignals + para.file_input_HiggsSignals)
    check_dir_exists(para.path_output_HiggsSignals)
    try:
        subprocess.check_call('mv ' + para.pathprog_HiggsSignals + para.file_input_HiggsSignals + ' ' + para.path_output_HiggsSignals + para.file_output_HiggsSignals, shell=True)
    except:
        raise Exception('Error: HiggsSignals.move_output: Could not move HiggsSignals output')


def check_output():
    check_file_exists(para.path_output_HiggsSignals + para.file_output_HiggsSignals)
    res = pyslha.readSLHAFile(para.path_output_HiggsSignals + para.file_output_HiggsSignals)
    try:
        result = isinstance(res.blocks['HIGGSSIGNALSRESULTS'][13], float)
    except:
        raise Exception('Error: HiggsSignals.check_output: HiggsSignals output not valid')


def check_result_allowed(limit):
    check_file_exists(para.path_output_HiggsSignals + para.file_output_HiggsSignals)
    res = pyslha.readSLHAFile(para.path_output_HiggsSignals + para.file_output_HiggsSignals)
    try:
        result = float(res.blocks['HIGGSSIGNALSRESULTS'][13])
    except:
        raise Exception('Error: HiggsSignals.check_result_allowed: HiggsSignals output not valid')

#    print('p',result)
#    print('chi2',float(res.blocks['HIGGSSIGNALSRESULTS'][12]))
#    print('mass','h',float(res.blocks['MASS'][25]),'H',float(res.blocks['MASS'][35]),'A',float(res.blocks['MASS'][36]))
    
    if result >= limit:
        return True
    elif result < limit and result >= 0.:
        return False
    else: raise Exception('Error: HiggsSignals.check_result_allowed: HiggsSignals output not valid')


