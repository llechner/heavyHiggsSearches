from MSSMHiggs import main
from fileIO import store_output
from fileIO import get_dir_name
from fileIO import get_prefix
from fileIO import clear_output_save
from fileIO import compress_data
from fileIO import get_data_path
from fileIO import get_file_list
from fileIO import write_to_file
from fileIO import read_values
import parameter as para
import numpy as np
import os, sys, pyslha

def calculation(file_addon):

    HSval = 0.85
    Ecm = 8000
    csv_file_path, data_path = get_data_path(file_addon)
    files = get_file_list(csv_file_path, 1, 1)[3:4]
    header = 'M1\tM2\tM3\tAt\tAb\tAtau\tmu\ttanb\tMA\tmeL\tmmuL\tmtauL\tmeR\tmmuR\tmtauR\tmqL1\tmqL2\tmqL3\tmuR\tmcR\tmtR\tmdR\tmsR\tmbR\tEcm\tHSval\txsec ggh [pb]\txsec bbh [pb]\tBR\tmissing topologies [fb]\tSUSY masses [GeV]\tr_direct\tr_interHiggs\tex_topo\texcluded by\tdataset'
    header = header.split('\t')

    for k, element in enumerate(files):
        filepath = data_path + element + '.slha'
        parameter = read_values(filepath, element, HSval, Ecm)
        try:
            val, excluded_by, ggh, bbh, BR, topo, masslist, r_val_d, r_val_iH, ex_topo = main(filepath,HSval)
        except:
            print(sys.exc_info()[1])
            pass
        store_output(get_dir_name(get_prefix(excluded_by), header[:25], parameter[:25]))

def read_output(addon):
    list = [item for item in os.listdir(para.path_output_save) if os.path.isdir(para.path_output_save + item)]
    exclusion = [item.split('_')[0].split('*') for item in list]
    check = [not '1' in item and not 'x' in item for item in exclusion]
    if not True in check: raise
    else: print('\n\nCALCULATION TEST SUCCESSFUL: ' + addon + '\n\n')

