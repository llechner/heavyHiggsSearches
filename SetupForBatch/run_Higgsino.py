#!/usr/bin/env python

import os, subprocess, sys
from time import time

total_parts = 20
part = sys.argv[1]
path = str(os.path.abspath(os.path.dirname(__file__)) + '/')
outputpath = str(os.path.abspath(path + '/../../output_higgsino/') + '/')
filename = 'SModelS-Setup-Higgsino/'
filepath = str(os.path.abspath(path + '/../../Setup/') + '/')

def run(path, outputpath, filepath, filename, part, total_parts):
    t1 = time()
    t2 = time()
    copy(path, filepath+filename)
    t2 = time() - t2
    t3 = time()
    install_code(path,filename)
    t3 = time() - t3
    t4 = time()
    run_code(path, filename, part, total_parts)
    t4 = time() - t4
    t5 = time()
    mv_output(path, filename, outputpath)
#    remove_package(path, filename)
    t5 = time() - t5
    t1 = time() - t1
    os.system('echo SUCCESS: TOTAL TIME = ' + str(t1) + ' sec')
    os.system('echo SUCCESS: UNZIP TIME = ' + str(t2) + ' sec')
    os.system('echo SUCCESS: INSTALL TIME = ' + str(t3) + ' sec')
    os.system('echo SUCCESS: RUN TIME = ' + str(t4) + ' sec')
    os.system('echo SUCCESS: REMOVE TIME = ' + str(t5) + ' sec')
    os.system('echo RUN SUCCESSFUL: PART: ' + str(part) + ' OF ' + str(total_parts))

def copy(path, filepath):
    print('\nCOPY FILES\n')
    os.system('cp -rf ' + filepath + ' ' + path + ' > /dev/null ')

def install_code(path,filename):
    print('\nINSTALL AND TEST CODE\n')
    os.chdir(path + filename)
    try:
        subprocess.check_call('python install_and_test.py', shell=True)
    except:
        print(sys.exc_info()[1])
        raise Exception('Error: install and test')

def run_code(path, filename, part, total_parts):
    print('\nRUN CALCULATION\n')
    os.chdir(path + filename + 'code/calculation/')
    try:
        subprocess.check_call('python process_raw_data.py ' + str(part) + ' ' + str(total_parts), shell=True)
    except:
        print(sys.exc_info()[1])
        raise Exception('Error: run code')

def mv_output(path, filename, outputpath):
    print('\nMOVE OUTPUT\n')
    try:
        subprocess.check_call('mv -f ' + path + filename + 'data/processed-data/Datafile.out ' + outputpath + 'Datafile_' + str(part) + '_' + str(total_parts) + '.out', shell=True)
        subprocess.check_call('mv -f ' + path + filename + 'data/processed-data/* ' + outputpath, shell=True)
    except:
        print(sys.exc_info()[1])
        raise Exception('Error: move output')

def remove_package(path, filename):
    print('\nREMOVE PACKAGE\n')
#    try:
#        subprocess.check_call('rm -rf ' + path + filename, shell=True)
#    except:
#        print(sys.exc_info()[1])
#        raise Exception('Error: remove package')


if __name__ == "__main__":
    run(path, outputpath, filepath, filename, part, total_parts)

