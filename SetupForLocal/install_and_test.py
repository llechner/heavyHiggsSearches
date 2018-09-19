import sys, os
sys.path.insert(0,os.path.abspath(os.path.dirname(__file__)) + '/code/calculation/')
sys.path.insert(0,os.path.abspath(os.path.dirname(__file__)) + '/prog/')
from testprogram import run_test
from install import install

try:
    install()
    run_test()
except:
    raise
