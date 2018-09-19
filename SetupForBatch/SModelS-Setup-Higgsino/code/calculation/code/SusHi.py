import os, subprocess, pyslha, sys
import parameter as para
from fileIO import check_dir_exists
from fileIO import check_file_exists

#main SusHi function
#def main():
#    create_temp_Spectrum_file()
#    create_SusHi_SLHAfile()
#    copy_inputfiles()
#    run_SusHi()
#    move_output()
#    check_output()
#    remove_files()


def create_temp_Spectrum_file():
    check_file_exists(para.path_temp + para.file_input)
    input = pyslha.readSLHAFile(para.path_temp + para.file_input,ignoreblocks=['MODSEL','MINPAR','EXTPAR','SMINPUTS'])
    check_dir_exists(para.path_temp)
    pyslha.writeSLHAFile(para.path_temp + para.file_input_SusHi, input)    


def create_SusHi_SLHAfile():
    check_file_exists(para.path_temp + para.file_input)
    check_file_exists(para.path_temp + para.file_input_SusHi)
    check_dir_exists(para.path_output_SusHi)
    try:
        subprocess.check_call('cat ' + para.path_temp + para.file_input + ' ' + para.path_temp + para.file_input_SusHi + ' > ' + para.path_output_SusHi + para.file_input_SusHi, shell=True)
#        remove_doublemassblock(para.path_output_SusHi + para.file_input_SusHi)
    except:
        print(sys.exc_info()[1])
        raise Exception('Error: SusHi.create_SusHi_SLHAfile: Could not create SusHi inputfile')

def remove_doublemassblock(filename):
    check_file_exists(filename)
    f = open(filename, 'r')
    list = f.readlines()
    f.close()
    
    output = []
    massblock = False
    for item in list:
        if 'BLOCK MASS' in item and not massblock:
            massblock=True
            continue
        output.append(item)

    out = open(filename, 'w')
    for item in output:
        out.write("%s" % item)
    out.close()

def copy_inputfiles():
    check_file_exists(para.path_temp + para.file_input)
    check_dir_exists(para.pathprog_SusHi)
    try:
        subprocess.check_call('cp ' + para.path_temp + para.file_input + ' ' + para.path_output_SusHi + para.file_input_SusHi, shell=True)
        subprocess.check_call('cp ' + para.path_temp + para.file_input + ' ' + para.pathprog_SusHi + para.file_input_SusHi, shell=True)
    except:
        print(sys.exc_info()[1])
        raise Exception('Error: SusHi.copy_inputfiles: Could not move SusHi inputfile')


def run_SusHi():
    check_dir_exists(para.pathprog_SusHi)
    os.chdir(para.pathprog_SusHi)
    try:
        subprocess.check_call('./sushi ' + para.file_input_SusHi + ' ' + para.file_output_SusHi + ' > ' + para.file_output_SusHi_log + ' 2>&1', shell=True)
    except:
        print(sys.exc_info()[1])
        raise Exception('Error: SusHi.run_SusHi: Could not run SusHi')


def move_output():
    check_file_exists(para.pathprog_SusHi + para.file_output_SusHi)
    check_file_exists(para.pathprog_SusHi + para.file_output_SusHi_log)
    check_dir_exists(para.pathprog_SusHi)
    os.chdir(para.pathprog_SusHi)
    try:
        subprocess.check_call('mv ' + para.file_output_SusHi + ' ' + para.path_output_SusHi, shell=True)
        subprocess.check_call('mv ' + para.file_output_SusHi_log + ' ' + para.path_output_SusHi, shell=True)
    except:
        print(sys.exc_info()[1])
        raise Exception('Error: SusHi.move_output: Could not move SusHi output')


def check_output():
    check_file_exists(para.path_output_SusHi + para.file_output_SusHi_log)
    check_file_exists(para.path_output_SusHi + para.file_output_SusHi)
    xs = pyslha.readSLHAFile(para.path_output_SusHi + para.file_output_SusHi)
    try:
        ggh = isinstance(xs.blocks['SUSHIGGH'][1], float)
        bbh = isinstance(xs.blocks['SUSHIBBH'][1], float)
    except:
        print(sys.exc_info()[1])
        raise Exception('Error: SusHi.check_output: SusHi output not valid')
    if not ggh or not bbh:
        raise Exception('Error: SusHi.check_output: SusHi output not valid')

    f = open(para.path_output_SusHi + para.file_output_SusHi_log, 'r')
    list = f.readlines()
    f.close()
    if not True in ['Results written in output file:' in item for item in list] or not True in ['Higgs mass:' in item for item in list]:
        raise Exception('Error: SusHi.check_output: SusHi output not valid')


def remove_files():
    check_dir_exists(para.pathprog_SusHi)
    os.chdir(para.pathprog_SusHi)
    try:
        subprocess.check_call('rm -f ' + para.file_input_SusHi, shell=True)
        subprocess.check_call('rm -f *out*', shell=True)
    except:
        pass


def get_crosssections():
    check_file_exists(para.path_output_SusHi + para.file_output_SusHi)
    xs = pyslha.readSLHAFile(para.path_output_SusHi + para.file_output_SusHi)
    return float(xs.blocks['SUSHIGGH'][1]), float(xs.blocks['SUSHIBBH'][1])
