from fileIO import get_Higgs_PDG_number
from SuperISO import copy_inputfiles
from SuperISO import run_SuperISO
from SuperISO import move_output
from SuperISO import check_output
from SuperISO import check_flavorphysics
from SuperISO import remove_files
import sys

class SuperISO:

    active = False

    def __init__(self):
        if SuperISO.active: #only one SuperISO object possible
            raise Exception('Error: classSuperISO.SuperISO: Only one class object can be initiated')
        else:
            copy_inputfiles() #create inputfile
            SuperISO.active = False

    def __call__(self):  #run SuperISO, move output to storage and check if output is valid
        run_SuperISO()
        move_output()
        check_output()
        self.valid = check_flavorphysics()
    
    def __del__(self): #remove inputfiles and unused output
        remove_files()
        SuperISO.active = False
