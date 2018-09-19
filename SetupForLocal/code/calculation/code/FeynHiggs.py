import subprocess, pyslha
import parameter as para
from fileIO import check_dir_exists
from fileIO import check_file_exists

def create_FeynHiggs_inputfile(list=[]):
    check_file_exists(para.path_temp + para.file_input)
    input = pyslha.readSLHAFile(para.path_temp + para.file_input,ignoreblocks=['SUSHI','MODSEL','SU_ALGO','MINPAR','SMINPUTS','DISTRIB','SCALES','RENORMBOT','RENORMSBOT','PDFSPEC','VEGAS','FACTORS'])
    pyslha.writeSLHAFile(para.path_temp + para.file_FH_block, input)
    try:
        subprocess.check_call('cat ' + para.path_temp + para.file_input + ' ' + para.path_temp + para.file_FH_block + ' > ' + para.path_output_FeynHiggs + para.file_input_FeynHiggs, shell=True)
    except:
        raise Exception('Error: FeynHiggs.create_FeynHiggs_inputfile: Could not create FeynHiggs inputfile')
    remove_2nd_Mass()
    change_to_FeynHiggs()
    if len(list) !=0: add_flags(list)

def remove_2nd_Mass():
    check_file_exists(para.path_output_FeynHiggs + para.file_input_FeynHiggs)
    f = open(para.path_output_FeynHiggs + para.file_input_FeynHiggs, 'r')
    list = f.readlines()
    f.close()
    
    newlist = []
    count = False
    for item in list:
        if 'BLOCK MASS' in item and count:
            continue
        elif 'BLOCK MASS' in item and not count:
            count=True
        newlist.append(item)

    out = open(para.path_output_FeynHiggs + para.file_input_FeynHiggs, 'w')
    for item in newlist:
        out.write("%s" % item)
    out.close()

def change_to_FeynHiggs():
    check_dir_exists(para.path_output_FeynHiggs)
    check_file_exists(para.path_output_FeynHiggs + para.file_input_FeynHiggs)
    f = open(para.path_output_FeynHiggs + para.file_input_FeynHiggs, 'r')
    list = f.readlines()
    f.close()
    
    newlist = []
    count = False
    for item in list:
        if 'BLOCK EXTPAR' in item and count:
            newlist.append('Block FEYNHIGGS\n')
            continue
        elif 'BLOCK EXTPAR' in item and not count:
            count=True
            newlist.append(item)
            continue
        else:
            newlist.append(item)

    out = open(para.path_output_FeynHiggs + para.file_input_FeynHiggs, 'w')
    for item in newlist:
        out.write("%s" % item)
    out.close()

def add_flags(list):
    newlist = ['Block FEYNHIGGSFLAGS\n']
    for item in list:
        newlist.append('    ' + str(item[0]) + '    ' + str(item[1]) + '\n')
    check_dir_exists(para.path_output_FeynHiggs)
    check_file_exists(para.path_output_FeynHiggs + para.file_input_FeynHiggs)
    out = open(para.path_output_FeynHiggs + para.file_input_FeynHiggs, 'a')
    for item in newlist:
        out.write("%s" % item)
    out.close()

