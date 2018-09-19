from fileIO import get_Higgs_PDG_number
from SPheno import copy_inputfiles
from SPheno import run_SPheno
from SPheno import switch_sign_mu
from SPheno import set_Q
from SPheno import move_output
from SPheno import check_output
from SPheno import check_LSP
from SPheno import remove_files
from SPheno import get_BR_list_PDG
from SPheno import crop_BR_list_SUSYonly
from SPheno import crop_BR_list_particles
from SPheno import crop_BR_list_thresh
from SPheno import get_susy_masslist
from SPheno import format_masslist_to_string
from SPheno import format_BR_to_string
import sys

class SPheno:

    active = False

    def __init__(self):
        if SPheno.active: #only one SPheno object possible
            raise Exception('Error: classSPheno.SPheno: Only one class object can be initiated')
        else:
            copy_inputfiles() #create inputfile
            SPheno.active = False

    def __call__(self):  #run SPheno, move output to storage and check if output is valid
        run_SPheno()
        move_output()
        check_output()
        self.LSP_neutralino = check_LSP()
#        try:
#            check_output()
#        except:
#            try:
#                set_Q()
#                copy_inputfiles() #create inputfile
#                run_SPheno()
#                move_output()
#                check_output()
#            except:
#                switch_sign_mu()
#                copy_inputfiles() #create inputfile
#                run_SPheno()
#                move_output()
#                check_output()

        self.BR_list = get_BR_list_PDG(get_Higgs_PDG_number()) #read BR list for calculated Higgs
    
    def __del__(self): #remove inputfiles and unused output
        remove_files()
        SPheno.active = False
        self.BR_list = []

    def get_BR_list(self, PDG): #get BR list for given PDG mother particle
        return get_BR_list_PDG(PDG)

    def get_BR_list_Susy(self): #get BR list for SUSY daughters
        return crop_BR_list_SUSYonly(self.BR_list)

    def get_BR_list_particles(self, particles): #get BR list for given daughters (e.g. particles=[5,-5,6,-6])
        return crop_BR_list_particles(self.BR_list, particles)

    def get_BR_list_thresh(self, threshold): #get BR list with BR > threshold
        return crop_BR_list_thresh(self.BR_list, threshold)
    
    def get_masslist(self): #get BR list with BR > threshold
        return format_masslist_to_string(get_susy_masslist())

    def get_BR_list(self):
        return format_BR_to_string(crop_BR_list_SUSYonly(self.BR_list))
