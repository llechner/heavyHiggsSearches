from fileIO import get_Higgs_PDG_number
from SusyHit import copy_inputfiles
from SusyHit import run_SusyHit
from SusyHit import move_output
from SusyHit import check_output
from SusyHit import remove_files
from SusyHit import get_BR_list_PDG
from SusyHit import crop_BR_list_SUSYonly
from SusyHit import crop_BR_list_particles
from SusyHit import crop_BR_list_thresh


class SusyHit:

    active = False

    def __init__(self):
        if SusyHit.active: #only one SusyHit object possible
            raise Exception('Error: classSusyHit.SusyHit: Only one class object can be initiated')
        else:
            copy_inputfiles() #create inputfile
            SusyHit.active = False

    def __call__(self):  #run SusyHit, move output to storage and check if output is valid
        run_SusyHit()
        move_output()
#        check_output()
        self.BR_list = get_BR_list_PDG(get_Higgs_PDG_number()) #read BR list for calculated Higgs

    def __del__(self): #remove inputfiles and unused output
        remove_files()
        SusyHit.active = False
        self.BR_list = []

    def get_BR_list(self, PDG): #get BR list for given PDG mother particle
        return get_BR_list_PDG(PDG)

    def get_BR_list_Susy(self): #get BR list for SUSY daughters
        return crop_BR_list_SUSYonly(self.BR_list)

    def get_BR_list_particles(self, particles): #get BR list for given daughters (e.g. particles=[5,-5,6,-6])
        return crop_BR_list_particles(self.BR_list, particles)

    def get_BR_list_thresh(self, threshold): #get BR list with BR > threshold
        return crop_BR_list_thresh(self.BR_list, threshold)

class FeynHiggs:

    active = False

    def __init__(self):
        if FeynHiggs.active: #only one SusyHit object possible
            raise Exception('Error: classSusyHit.FeynHiggs: Only one class object can be initiated')
        else:
            copy_inputfiles() #create inputfile
            FeynHiggs.active = True

    def __call__(self):  #run SusyHit, move output to storage and check if output is valid
        run_SusyHit()
        move_output()
        check_output()
        self.BR_list = get_BR_list_PDG(get_Higgs_PDG_number()) #read BR list for calculated Higgs

    def __del__(self): #remove inputfiles and unused output
        remove_files()
        FeynHiggs.active = False
        self.BR_list = []

