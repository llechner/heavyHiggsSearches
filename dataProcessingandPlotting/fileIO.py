import subprocess, os, pyslha
import parameter as para

#read inputfile, change it and write to input_temp
#list_block is a list of strings with blocknames
#e.g. list_block = ['SUSHI','MODSEL']
#list_element is a list for each block, containing a list for each variable to change, containing 2 variables (first is slha block number, second is new value)
#e.g. list_element = [ [ [2,21],[4,14000] ] , [ [1,1] ] ]
def change_inputfile(list_element, list_block): #element[0] == line to change, element[1] == value to change
    check_file_exists(para.path_input + para.file_input)
    input = pyslha.readSLHAFile(para.path_input + para.file_input)
    for block in range(len(list_block)): #scan each block
        blockname = str(list_block[block])
        for element in list_element[block]: #scan value list per block
            input.blocks[blockname][int(element[0])] = element[1]
    check_dir_exists(para.path_temp)
    pyslha.writeSLHAFile(para.path_temp + para.file_input, input)    

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
        subprocess.check_call('rm -rf ' + para.path_output_SPheno + '*', shell=True)
        subprocess.check_call('rm -rf ' + para.path_output_SusHi + '*', shell=True)
        subprocess.check_call('rm -rf ' + para.path_output_SModelS_interHiggs + '*', shell=True)
        subprocess.check_call('rm -rf ' + para.path_output_SModelS_direct + '*', shell=True)
        subprocess.check_call('rm -rf ' + para.path_output_FeynHiggs + '*', shell=True)
        subprocess.check_call('rm -rf ' + para.path_output_HiggsBounds + '*', shell=True)
        subprocess.check_call('rm -rf ' + para.path_output_HiggsSignals + '*', shell=True)
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


