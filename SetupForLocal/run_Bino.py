#!/usr/bin/env python

import os, subprocess
from time import time

total_parts = 60000
part = 1
path = os.path.abspath(os.path.dirname(__file__))+ '/'
outputpath = os.path.abspath(path + 'output/') + '/' #'/scratch/llechner/Bino-data/'
zipfilename = 'SModelS-Setup-Bino.zip'
zipfilepath = '/scratch/llechner/'


def run(path, outputpath, zipfilepath, zipfilename, part, total_parts):
    t = time()
    copy_zipfile(path, zipfilepath+zipfilename)
    unzip(path, zipfilename)
    os.remove(path + zipfilename)
    install_code(path)
    run_code(path, part, total_parts)
    mv_output(path, outputpath)
    remove_package(path)
    t = time() - t
    os.system('echo SUCCESS: TIME = ' + str(t) + ' sec')

def copy_zipfile(path, zipfile):
    try:
        subprocess.check_call('cp -f ' + zipfile + ' ' + path, shell=True)
    except:
        raise Exception('Error: unzip')

def unzip(path, zipfilename):
    os.system('unzip -u ' + path + zipfilename + ' -d ' + path + ' &> /dev/null')

def install_code(path):
    os.chdir(path + 'SModelS-Setup-Bino/')
    try:
        subprocess.check_call('python install_and_test.py', shell=True)
    except:
        raise Exception('Error: install and test')

def run_code(path, part, total_parts):
    os.chdir(path + 'SModelS-Setup-Bino/code/calculation/')
    try:
        subprocess.check_call('python process_raw_data.py ' + str(part) + ' ' + str(total_parts), shell=True)
    except:
        raise Exception('Error: run code')

def mv_output(path, outputpath):
    try:
        subprocess.check_call('mv -f ' + path + 'SModelS-Setup-Bino/data/processed-data/* ' + outputpath, shell=True)
    except:
        raise Exception('Error: move output')

def remove_package(path):
    try:
        subprocess.check_call('rm -rf ' + path + 'SModelS-Setup-Bino', shell=True)
    except:
        raise Exception('Error: remove package')


if __name__ == "__main__":
    run(path, outputpath, zipfilepath, zipfilename, part, total_parts)

