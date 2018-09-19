from SusHi import create_temp_Spectrum_file
from SusHi import create_SusHi_SLHAfile
from SusHi import copy_inputfiles
from SusHi import run_SusHi
from SusHi import move_output
from SusHi import check_output
from SusHi import remove_files
from SusHi import get_crosssections

class SusHi:

    active = False

    def __init__(self):
        if SusHi.active: #only one SusHi object possible
            raise Exception('Error: classSusHi.SusHi: Only one class object can be initiated')
        else:
#            create_temp_Spectrum_file() #create inputfile
#            create_SusHi_SLHAfile()
            copy_inputfiles()
            SusHi.active = False #set to True to make sure only one object is called

    def __call__(self): #run SusHi, move output to storage and check if output is valid
        run_SusHi()
        move_output()
#        check_output()
        self.xsec_ggh, self.xsec_bbh = get_crosssections()

    def __del__(self): #remove inputfiles and unused output
        remove_files()
        SusHi.active = False
        self.xsec_ggh = 0.
        self.xsec_bbh = 0.

    def get_xsec(self):
        return get_crosssections()
