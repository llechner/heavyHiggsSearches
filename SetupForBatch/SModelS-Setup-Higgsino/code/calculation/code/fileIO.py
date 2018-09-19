import subprocess, os, pyslha
import parameter as para
import shutil

#read inputfile, change it and write to input_temp
#list_block is a list of strings with blocknames
#e.g. list_block = ['SUSHI','MODSEL']
#list_element is a list for each block, containing a list for each variable to change, containing 2 variables (first is slha block number, second is new value)
#e.g. list_element = [ [ [2,21],[4,14000] ] , [ [1,1] ] ]
def change_inputfile(list_element, list_block): #element[0] == line to change, element[1] == value to change
#    if len(list_element) == 0 and len(list_block) == 0: return
    check_file_exists(para.path_input + para.file_input)
    input = pyslha.readSLHAFile(para.path_input + para.file_input)
    for block in range(len(list_block)): #scan each block
        blockname = str(list_block[block])
        for element in list_element[block]: #scan value list per block
            input.blocks[blockname][int(element[0])] = element[1]
    check_dir_exists(para.path_temp)
    try:
        pyslha.writeSLHAFile(para.path_temp + para.file_input, input)
        subprocess.check_call('cp -f ' + para.path_temp + para.file_input + ' ' + para.path_output, shell=True)
    except:
        raise Exception('Error: fileIO.change_inputfile: Could not save inputfile')
    
#remove empty lines in given file (needed for SusyHit inputfile)
def remove_empty_lines(filename):
    check_file_exists(filename)
    f = open(filename, 'r')
    list = f.readlines()
    f.close()
    
    list = [item for item in list if item != '\n']

    out = open(filename, 'w')
    for item in list:
        out.write("%s" % item)
    out.close()

#read the Higgs number from inputfile
def get_Higgs_number():
    check_file_exists(para.path_temp + para.file_input)
    input = pyslha.readSLHAFile(para.path_temp + para.file_input)
    try:
        higgs = int(input.blocks['SUSHI'][2])
    except:
        raise Exception('Error: fileIO.get_Higgs_number: Could not read Higgs number')
    return higgs

#get the sqrt(s) value from the inputfile
def get_sqrts():
    check_file_exists(para.path_temp + para.file_input)
    input = pyslha.readSLHAFile(para.path_temp + para.file_input)
    try:
        sqrts = float(input.blocks['SUSHI'][4])
    except:
        raise Exception('Error: fileIO.get_sqrts: Could not read CM Energy')
    return sqrts
    
#read the Higgs number from inputfile and give PDG number back
def get_Higgs_PDG_number():
    higgs = get_Higgs_number()
    if int(higgs) not in [11,12,21]:
        raise Exception('Error: fileIO.get_Higgs_PDG_number: wrong Higgs number')
    if higgs == 11:
        PDG = 25
    elif higgs == 12:
        PDG = 35
    elif higgs == 21:
        PDG = 36
    return int(PDG)

#clear the temporary directory
def clear_tempdir():
    check_dir_exists(para.path_temp)
    try:
        subprocess.check_call('rm -f ' + para.path_temp + '*', shell=True)
    except:
        pass

#clear the output directory
def clear_outputdir():
    check_dir_exists(para.path_output)
    try:
        subprocess.check_call('rm -rf ' + para.path_output_SusyHit + '*', shell=True)
#        subprocess.check_call('rm -rf ' + para.path_output_SPheno + '*', shell=True)
        subprocess.check_call('rm -rf ' + para.path_output_SusHi + '*', shell=True)
        subprocess.check_call('rm -rf ' + para.path_output_SModelS_interHiggs + '*', shell=True)
        subprocess.check_call('rm -rf ' + para.path_output_SModelS_direct + '*', shell=True)
        subprocess.check_call('rm -rf ' + para.path_output_FeynHiggs + '*', shell=True)
        subprocess.check_call('rm -rf ' + para.path_output_HiggsBounds + '*', shell=True)
        subprocess.check_call('rm -rf ' + para.path_output_HiggsSignals + '*', shell=True)
        subprocess.check_call('rm -rf ' + para.path_output + '*.slha', shell=True)
    except:
        pass

def store_output(dir_name):
    check_dir_exists(para.path_output)
    check_dir_exists(para.path_output_save)
    try:
        subprocess.check_call('mkdir ' + para.path_output_save + dir_name, shell=True)
        subprocess.check_call('cp -rf ' + para.path_output + '* ' + para.path_output_save + dir_name + '/', shell=True)
    except:
        raise Exception('Error: fileIO.store_output: Could not store output')

def get_prefix(excluded_by):
    output = list('22222')
    for k, element in enumerate(excluded_by):
        if element == 'x': output[k] = 'x'
        else: output[k] = element
    return '*'.join(output)
#    prefix = list('00000')
#    if excluded_by == '[]': return ''.join(prefix)
#    test = str(str(excluded_by.split('[')[1]).split(']')[0]).split(', ')
#    testlist = [para.excluded_SuperISO, para.excluded_HiggsBounds, para.excluded_HiggsSignals, para.excluded_SModelS_direct, para.excluded_SModelS_interHiggs]
#    for element in test:
#        for k, item in enumerate(testlist):
#            if element == item: prefix[k] = '1'
#    return ''.join(prefix)
#    elif excluded_by == para.excluded_SuperISO: return '010000'
#    elif excluded_by == para.excluded_HiggsBounds: return '001000'
#    elif excluded_by == para.excluded_HiggsSignals: return '000100'
#    elif excluded_by == para.excluded_SModelS_direct: return '000010'
#    elif excluded_by == para.excluded_SModelS_interHiggs: return '000001'
#    else: return '000000'
    
def get_dir_name(prefix, list_name, list_val):
#    if len(list_name) != len(list_val): raise Exception('Error: fileIO.get_dir_name: wrong input list')
    dir_name = prefix + '_'
    for k, item in enumerate(['file'] + list_name[:-1]):
        dir_name += item + '_' + str(int(list_val[k])) + '_'
    return dir_name[:-1]

def append_mass_block(filename):
    f = open(filename, 'r')
    list = f.readlines()
    f.close()
    
    list.append('Block MASS\n')

    out = open(filename, 'w')
    for item in list:
        out.write(item)
    out.close()
    
def clear_output_save():
    check_dir_exists(para.path_output_save)
    try:
        subprocess.check_call('rm -rf ' + para.path_output_save + '*', shell=True)
    except:
        pass
    
def compress_data(output_filename):
    check_dir_exists(para.path_output_save)
    os.chdir(para.path_output_save)
    try:
        subprocess.check_call('find ./* -maxdepth 1 -type d -exec zip -r ' + output_filename + '.zip {} > /dev/null 2>&1 \; -exec rm -rf {} \;', shell=True)
    except:
        pass
    
#check if the given file exists
def check_file_exists(file_path):
    if not os.path.exists(file_path):
        raise Exception('Error: fileIO.check_file_exists: File not found: %s' %str(file_path))

#check if the given directory exists
def check_dir_exists(dir_path):
    if not os.path.exists(dir_path):
        raise Exception('Error: fileIO.check_dir_exists: Directory not found: %s' %str(dir_path))

def get_data_path(addon):
    if addon=='higgsino':
        csv_file_path = para.path_file_higgsino
        data_path = para.path_data_higgsino
    elif addon=='bino':
        csv_file_path = para.path_file_bino
        data_path = para.path_data_bino
    elif addon=='wino':
        csv_file_path = para.path_file_wino
        data_path = para.path_data_wino
    else: raise
    return csv_file_path, data_path


def get_file_list(csv_file_path, part_num, total_parts):

    f = open(csv_file_path, 'r')
    files = f.readlines()[1:]
    f.close()
    files = [element.split(',')[0] for element in files if element.split(',')[1]=='\n']

    min_ind = int(len(files)*(part_num-1)/total_parts)
    max_ind = int(len(files)*part_num/total_parts)
    files = files[min_ind:max_ind]

    return files

def write_to_file(data, status):
    out_true = open(para.path_output_save + 'Datafile.out', status)
    for item in data:
        out_true.write(str(item) + "\t")
    out_true.write('\n')
    out_true.close()

def read_values(filepath, element, HSval, Ecm):

    input = pyslha.readSLHAFile(filepath).blocks['EXTPAR']
    tanb = float(pyslha.readSLHAFile(filepath).blocks['MINPAR'][3])

    M1 = input[1]
    M2 = input[2]
    M3 = input[3]
    At = input[11]
    Ab = input[12]
    Atau = input[13]
    mu =input[23]
    MA = input[26]
    meL = input[31]
    mmuL = input[32]
    mtauL = input[33]
    meR = input[34]
    mmuR = input[35]
    mtauR = input[36]
    mqL1 = input[41]
    mqL2 = input[42]
    mqL3 = input[43]
    muR = input[44]
    mcR = input[45]
    mtR = input[46]
    mdR = input[47]
    msR = input[48]
    mbR = input[49]

    parameter = [element,M1,M2,M3,At,Ab,Atau,mu,tanb,MA,meL,mmuL,mtauL,meR,mmuR,mtauR,mqL1,mqL2,mqL3,muR,mcR,mtR,mdR,msR,mbR,Ecm,HSval]
    return parameter

def format_BR_to_string(BR_list):
    if len(BR_list)==0: return '[]'
    output = '['
    for element in BR_list:
        output += str(element) + ', '
    output = output[:-2] + ']'
    return output
        
def get_BR():
    filename = para.path_temp + para.file_input
    BR = pyslha.readSLHAFile(filename).decays[35].decays
    BR_list = []
    for decay in range(len(BR)):
        if True in [item < 50 for item in list(BR[decay].ids)]: continue
        BR_list.append([float(BR[decay].br), list(BR[decay].ids)])
    return BR_list

def format_masslist_to_string(mass_list):
    output = '['
    for element in mass_list:
        output += str(element[0]) + ', ' + str(element[1]) + ', '
    output = output[:-2] + ']'
    return output

def get_masses():
    filename = para.path_temp + para.file_input
    input = pyslha.readSLHAFile(filename)
    masses = list(input.blocks['MASS'].items())
    masses = [item for item in masses if item[0]>50 or item[0]==25 or item[0]==35 or item[0]==36]
    return masses

#check if the inputfile is ok
def check_inputfile():
    check_file_exists(para.path_temp + para.file_input)
    input = pyslha.readSLHAFile(para.path_temp + para.file_input)

    if int(input.blocks['SUSHI'][1]) != 1:
        raise ValueError('Error: fileIO.check_inputfile: SUSHI 1: wrong model')
    if int(input.blocks['SUSHI'][2]) not in [11,12,21]:
        raise ValueError('Error: fileIO.check_inputfile: SUSHI 2: wrong Higgs number')
    if int(input.blocks['SUSHI'][3]) not in [0,1]:
        raise ValueError('Error: fileIO.check_inputfile: SUSHI 3: wrong collider')
    if float(input.blocks['SUSHI'][4]) < 0:
        raise ValueError('Error: fileIO.check_inputfile: SUSHI 4: wrong CM energy')
    if int(input.blocks['SUSHI'][5]) not in [-1,0,1,2,3,12,13]:
        raise ValueError('Error: fileIO.check_inputfile: SUSHI 5: wrong ggh order')
    if int(input.blocks['SUSHI'][6]) not in [-1,0,1,2]:
        raise ValueError('Error: fileIO.check_inputfile: SUSHI 6: wrong bbh order')
    if int(input.blocks['SUSHI'][7]) not in [0,1,2]:
        raise ValueError('Error: fileIO.check_inputfile: SUSHI 7: wrong ew order')
    if int(input.blocks['SUSHI'][19]) not in [0,1]:
        raise ValueError('Error: fileIO.check_inputfile: SUSHI 19: wrong mode')
    if int(input.blocks['SUSHI'][20]) not in [0,10]:
        raise ValueError('Error: fileIO.check_inputfile: SUSHI 20: wrong ggh subprocess')

    if int(input.blocks['MODSEL'][1]) != 0:
        raise ValueError('Error: fileIO.check_inputfile: MODSEL 1: wrong model')

    if int(input.blocks['SU_ALGO'][2]) not in [11,21]:
        raise ValueError('Error: fileIO.check_inputfile: SU_ALGO 2: wrong RGE order')
    if int(input.blocks['SU_ALGO'][3]) not in [0,1]:
        raise ValueError('Error: fileIO.check_inputfile: SU_ALGO 3: wrong high scale unification')
    if int(input.blocks['SU_ALGO'][4]) not in [1,2]:
        raise ValueError('Error: fileIO.check_inputfile: SU_ALGO 4: wrong RGE accuracy')
    if int(input.blocks['SU_ALGO'][6]) not in [0,1]:
        raise ValueError('Error: fileIO.check_inputfile: SU_ALGO 6: wrong higgs input model')
    if int(input.blocks['SU_ALGO'][7]) not in [1,2]:
        raise ValueError('Error: fileIO.check_inputfile: SU_ALGO 7: wrong sparticle mass rad. corr.')
    if int(input.blocks['SU_ALGO'][8]) not in [0,1]:
        raise ValueError('Error: fileIO.check_inputfile: SU_ALGO 8: wrong EWSB scale')
    if int(input.blocks['SU_ALGO'][9]) not in [1,2]:
        raise ValueError('Error: fileIO.check_inputfile: SU_ALGO 9: wrong accuracy')
    if int(input.blocks['SU_ALGO'][10]) not in [0,1,2]:
        raise ValueError('Error: fileIO.check_inputfile: SU_ALGO 10: wrong Higgs mass rad. corr.')
    if int(input.blocks['SU_ALGO'][11]) not in [0,1]:
        raise ValueError('Error: fileIO.check_inputfile: SU_ALGO 11: wrong higher order Higgs scheme')

    if int(input.blocks['MINPAR'][3]) != int(input.blocks['EXTPAR'][25]):
        raise ValueError('Error: fileIO.check_inputfile: MINPAR 3, EXTPAR 25: two different tan beta values given')

    if float(input.blocks['EXTPAR'][43]) > 8e3:
        raise ValueError('Error: fileIO.check_inputfile: EXTPAR 43: value too high')
    if float(input.blocks['EXTPAR'][46]) > 8e3:
        raise ValueError('Error: fileIO.check_inputfile: EXTPAR 46: value too high')
    if float(input.blocks['EXTPAR'][49]) > 8e3:
        raise ValueError('Error: fileIO.check_inputfile: EXTPAR 49: value too high')

    if int(input.blocks['DISTRIB'][1]) not in [0,1,2,3]:
        raise ValueError('Error: fileIO.check_inputfile: DISTRIB 1: wrong value')
    if int(input.blocks['DISTRIB'][2]) not in [0,1,2,3]:
        raise ValueError('Error: fileIO.check_inputfile: DISTRIB 2: wrong value')
    if int(input.blocks['DISTRIB'][3]) not in [0,1,2,3]:
        raise ValueError('Error: fileIO.check_inputfile: DISTRIB 3: wrong value')
    if int(input.blocks['DISTRIB'][4]) not in [0,1]:
        raise ValueError('Error: fileIO.check_inputfile: DISTRIB 4: wrong value')

    if int(input.blocks['SCALES'][3]) not in [0,1]:
        raise ValueError('Error: fileIO.check_inputfile: SCALES 3: wrong value')

    if int(input.blocks['RENORMBOT'][1]) not in [0,1,2]:
        raise ValueError('Error: fileIO.check_inputfile: RENORMBOT 1: wrong value')
    if int(input.blocks['RENORMBOT'][2]) not in [0,1,2]:
        raise ValueError('Error: fileIO.check_inputfile: RENORMBOT 2: wrong value')
    if int(input.blocks['RENORMBOT'][3]) not in [0,1]:
        raise ValueError('Error: fileIO.check_inputfile: RENORMBOT 3: wrong value')

    if int(input.blocks['RENORMSBOT'][1]) not in [0,1,2]:
        raise ValueError('Error: fileIO.check_inputfile: RENORMSBOT 1: wrong value')
    if int(input.blocks['RENORMSBOT'][2]) not in [0,1,2]:
        raise ValueError('Error: fileIO.check_inputfile: RENORMSBOT 2: wrong value')
    if int(input.blocks['RENORMSBOT'][3]) not in [0,1]:
        raise ValueError('Error: fileIO.check_inputfile: RENORMSBOT 3: wrong value')

    if float(input.blocks['FACTORS'][1]) < 0. or float(input.blocks['FACTORS'][1]) > 1.:
        raise ValueError('Error: fileIO.check_inputfile: FACTORS 1: wrong quark/squark factor')
    if float(input.blocks['FACTORS'][2]) < 0. or float(input.blocks['FACTORS'][2]) > 1.:
        raise ValueError('Error: fileIO.check_inputfile: FACTORS 2: wrong quark/squark factor')
    if float(input.blocks['FACTORS'][3]) < 0. or float(input.blocks['FACTORS'][3]) > 1.:
        raise ValueError('Error: fileIO.check_inputfile: FACTORS 3: wrong quark/squark factor')
    if float(input.blocks['FACTORS'][4]) < 0. or float(input.blocks['FACTORS'][4]) > 1.:
        raise ValueError('Error: fileIO.check_inputfile: FACTORS 4: wrong quark/squark factor')
    if float(input.blocks['FACTORS'][5]) < 0. or float(input.blocks['FACTORS'][5]) > 1.:
        raise ValueError('Error: fileIO.check_inputfile: FACTORS 5: wrong quark/squark factor')


