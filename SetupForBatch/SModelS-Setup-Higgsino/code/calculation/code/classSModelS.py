from SModelS import create_temp_XSec_file
from SModelS import create_SModelS_SLHAfile
from SModelS import run_SModelS
from SModelS import check_output
from SModelS import check_valid
from SModelS import read_rvalue
from SModelS import get_missing_topologies
from SModelS import format_topo_to_string
from SModelS import get_excluded_topo
from SModelS import check_SModelS_outputstatus_valid
import sys

class SModelS:

    active = False

    def __init__(self,intermediate_Higgs):
        if SModelS.active: #only one SModelS object possible
            raise Exception('Error: classSModelS.SModelS: Only one class object can be initiated')
        else:
            self.intermediate_Higgs = intermediate_Higgs
            create_SModelS_SLHAfile(self.intermediate_Higgs)
            SModelS.active = False
            self.exclusion = 'x'
            self.r = 0.
            self.ex_topo = 'x'
            self.missing_topo = 'x'
            self.outputstatus = 'x'

    def __call__(self): #run SModelS and check if output is valid
        run_SModelS(self.intermediate_Higgs)

        try:
            check_output(self.intermediate_Higgs) #check if output is valid, else raise error
        except:
            print(sys.exc_info()[1])
            return

        try:
            self.exclusion = str(check_valid(self.intermediate_Higgs)) # if error but output valid == no experimental data match -> still valid dataset
        except:
            print(sys.exc_info()[1])
            pass

        try:
            self.outputstatus = check_SModelS_outputstatus_valid(self.intermediate_Higgs) # if error but output valid == no experimental data match -> still valid dataset
        except:
            print(sys.exc_info()[1])
            pass

        try:
            self.missing_topo = format_topo_to_string(get_missing_topologies(self.intermediate_Higgs))
        except:
            print(sys.exc_info()[1])
            pass

        try:
            self.r = read_rvalue(self.intermediate_Higgs)
        except:
            print(sys.exc_info()[1])
            pass

        try:
            if self.r >= 1.: self.ex_topo = str(get_excluded_topo())
            elif self.r >= 0. and self.r < 1.: self.ex_topo = '0'
        except:
            print(sys.exc_info()[1])
            pass

            
    def __del__(self):
        SModelS.active = False

