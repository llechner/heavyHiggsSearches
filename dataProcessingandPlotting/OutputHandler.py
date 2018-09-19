import Outputparameter as para
import os
import numpy as np

#check if the given file exists
def check_file_exists(file_path):
    if not os.path.exists(file_path):
        raise Exception('Error: fileIO.check_file_exists: File not found: %s' %str(file_path))

#check if the given directory exists
def check_dir_exists(dir_path):
    if not os.path.exists(dir_path):
        raise Exception('Error: fileIO.check_dir_exists: Directory not found: %s' %str(dir_path))

#def create_excluded_datafile():
#    check_dir_exists(para.path_total_data)
#    cmd = 'cat '
#    for filename in para.false_data_file_set:
#        check_file_exists(filename)
#        cmd += str(filename) + ' '
#    
#    cmd += '> ' + path_total_data + para.file_total_false
#    print(os.system(cmd))
    #remove_double_entries(para.path_total_data + para.file_total_false)
    
    
#def create_included_datafile():
#    check_dir_exists(para.path_total_data)
#    cmd = 'cat '
#    for filename in para.true_data_file_set:
#        check_file_exists(filename)
#        cmd += str(filename) + ' '
#
#    cmd += '> ' + path_total_data + para.file_total_true
#    print(os.system(cmd))
#    remove_double_entries(para.path_total_data + para.file_total_true)

def create_excluded_datafile():
    check_dir_exists(para.path_total_data)
    false = []
    for filename in para.false_data_file_set:
        check_file_exists(filename)
        f = open(filename, 'r')
        list = f.readlines()
        header = list[0]
        false += list[1:]
        f.close()

    out = open(para.path_total_data + para.file_total_false, 'w')
    out.write(header)
    for item in false:
        out.write('%s' %item)
    out.close()

    remove_double_entries(para.path_total_data + para.file_total_false)
    
    
def create_included_datafile():
    check_dir_exists(para.path_total_data)
    true = []
    for filename in para.true_data_file_set:
        check_file_exists(filename)
        f = open(filename, 'r')
        list = f.readlines()
        header = list[0]
        true += list[1:]
        f.close()

    out = open(para.path_total_data + para.file_total_true, 'w')
    out.write(header)
    for item in true:
        out.write('%s' %item)
    out.close()

    remove_double_entries(para.path_total_data + para.file_total_true)
    

def split_excluded_datafile(max_num = 100000):
    check_dir_exists(para.path_total_data + para.file_total_false)

    out = open(para.path_total_data + para.file_total_false, 'r')
    false = out.readlines()
    out.close()

    outLSP = open(para.path_total_data + para.file_LSP_false, 'w')
    outHB = open(para.path_total_data + para.file_HB_false, 'w')
    outHS = open(para.path_total_data + para.file_HS_false, 'w')
    outSD = open(para.path_total_data + para.file_SD_false, 'w')
    outSH = open(para.path_total_data + para.file_SH_false, 'w')
    
    header = false[0]
    outLSP.write(header)
    outHB.write(header)
    outHS.write(header)
    outSD.write(header)
    outSH.write(header)
    
    num_LSP = 0
    num_HB = 0
    num_HS = 0
    num_SD = 0
    num_SH = 0

    for line in false[1:]:
        exc = str(str(line.split('# ')[1]).split('\n')[0])

        if exc == para.excluded_SPheno and num_LSP < max_num:
            outLSP.write(line)
            num_LSP += 1
        elif exc == para.excluded_HiggsBounds and num_HB < max_num:
            outHB.write(line)
            num_HB += 1
        elif exc == para.excluded_HiggsSignals and num_HS < max_num:
            outHS.write(line)
            num_HS += 1
        elif exc == para.excluded_SModelS_direct and num_SD < max_num:
            outSD.write(line)
            num_SD += 1
        elif exc == para.excluded_SModelS_interHiggs and num_SH < max_num:
            outSH.write(line)
            num_SH += 1

    outLSP.close()
    outHB.close()
    outHS.close()
    outSD.close()
    outSH.close()

def read_parameter(filename):
    check_file_exists(filename)

    f = open(filename, 'r')
    list = f.readlines()
    f.close()

    if len(list) == 0: return []

    para_list = []
    for element in list[1:]:
        item = str(element).split('\t')[:13]
        item = np.asarray([float(par) for par in item])
        para_list.append(item)
        
    return para_list

def read_xsec(filename):
    check_file_exists(filename)

    f = open(filename, 'r')
    list = f.readlines()
    f.close()

    if len(list) == 0: return 0,0

    ggh_list = []
    bbh_list = []
    for element in list[1:]:
        ggh_list.append(float(str(element).split('\t')[13]))
        bbh_list.append(float(str(element).split('\t')[14]))
        
    return ggh_list, bbh_list
            
def read_BR_list(filename):
    check_file_exists(filename)

    f = open(filename, 'r')
    list = f.readlines()
    f.close()

    if len(list) == 0: return []

    run = []
    for element in list[1:]:
        item = str(str(element).split('\t')[15]).split(', ')
        item[0] = str(item[0])[1:]
        item[-1] = str(item[-1])[:-1]
        item = [str(str(el).split('[')[-1]).split(']')[0] for el in item]
        temp = []
        for i in np.arange(0,len(item),3):
            temp.append([float(item[i]),[int(item[i+1]),int(item[i+2])]])
        run.append(temp)
    return run

def read_topo_list(filename):
    check_file_exists(filename)

    f = open(filename, 'r')
    list = f.readlines()
    f.close()

    if len(list) == 0: return []

    run = []
    for element in list[1:]:
        item = str(str(element).split('\t')[16]).split(', ')
        item[0] = str(item[0])[1:]
        item[-1] = str(item[-1])[:-1]
        temp = []
        for i in np.arange(0,len(item),2):
            temp.append([float(item[i]),str(item[i+1])])
        run.append(temp)
    return run

def read_mass_list(filename):
    check_file_exists(filename)

    f = open(filename, 'r')
    list = f.readlines()
    f.close()
    
    if len(list) == 0: return []

    run = []
    for element in list[1:]:
        item = str(str(element).split('\t')[17]).split(', ')
        item[0] = str(item[0])[1:]
        item[-1] = str(item[-1])[:-1]
        item = [str(str(el).split('[')[-1]).split(']')[0] for el in item]
        temp = []
        for i in np.arange(0,len(item),2):
            temp.append([float(item[i+1]),int(item[i])])
        run.append(temp)
    return run
    
def remove_double_entries(filename):
    check_file_exists(filename)

    inp = open(filename, 'r')
    lines = inp.readlines()
    inp.close()

    if len(lines) == 0: return

    out = open(filename, 'w')
    for n,item in enumerate(lines):
        if item not in lines[:n] and item != '\n': out.write(item)
    out.close()