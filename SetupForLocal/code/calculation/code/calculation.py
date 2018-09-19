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
import os,sys, pyslha

def calculation(part_num, total_parts, file_addon, delete_data, data_store_num=100):

    HSval = 0.85
    Ecm = 8000
    csv_file_path, data_path = get_data_path(file_addon)
    files = get_file_list(csv_file_path, int(part_num), int(total_parts))[:10]
    header = 'M1\tM2\tM3\tAt\tAb\tAtau\tmu\ttanb\tMA\tmeL\tmmuL\tmtauL\tmeR\tmmuR\tmtauR\tmqL1\tmqL2\tmqL3\tmuR\tmcR\tmtR\tmdR\tmsR\tmbR\tEcm\tHSval\txsec ggh [pb]\txsec bbh [pb]\tBR\tmissing topologies [fb]\tSUSY masses [GeV]\tr_direct\tr_interHiggs\tex_topo\texcluded by\tdataset'
    header = header.split('\t')

    if delete_data:
        clear_output_save()
        write_to_file(header, 'w')

    for k, element in enumerate(files):
        if k%data_store_num==0: compress_data('dataset_' + file_addon + '_' + part_num + '_' + total_parts + '_' + str(int(k/data_store_num)))
        filepath = data_path + element + '.slha'
        parameter = read_values(filepath, element, HSval, Ecm)
        try:
            val, excluded_by, ggh, bbh, BR, topo, masslist, r_val_d, r_val_iH, ex_topo = main(filepath,HSval)
        except:
            pass
        store_output(get_dir_name(get_prefix(excluded_by), header[:25], parameter[:25]))
        output = parameter[1:] + [str(ggh), str(bbh), BR, topo, masslist, r_val_d, r_val_iH, ex_topo, get_prefix(excluded_by), element]
        write_to_file(output, 'a')

    compress_data('dataset_' + file_addon + '_' + part_num + '_' + total_parts + '_' + str(data_store_num) + '_fin')

