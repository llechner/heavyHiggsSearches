from classFileHandler import FileHandler
#from classSusyHit import SusyHit
#from classSPheno import SPheno
from classSuperISO import SuperISO
from classHiggsBounds import HiggsBounds
from classHiggsSignals import HiggsSignals
from classSusHi import SusHi
from classSModelS import SModelS
from fileIO import format_BR_to_string
from fileIO import get_BR
from fileIO import format_masslist_to_string
from fileIO import get_masses

import sys
import parameter as para

#class for MSSM Higgs calculation of BR (SusyHit) and xsec (SusHi) + SModels
class MSSMHiggs:

    active = False

    def __init__(self,filepath, limit):
        if MSSMHiggs.active: #only one object possible
            raise Exception('Error: classMSSMHiggs.MSSMHiggs: Only one class object can be initiated')
        else:
            self.FileHandler = FileHandler()
            self.FileHandler(filepath) #initialize inputfile + clear directories
            MSSMHiggs.active = False
            self.valid = True
            self.ggh = 'x'
            self.bbh = 'x'
            self.BR = 'x'
            self.missing_topologies = 'x'
            self.masslist = 'x'
            self.excluded_by = ['x','x','x','x','x']
            self.rd = 'x'
            self.riH = 'x'
            self.ex_topo = 'x'
            self.HSval = limit

    def __call__(self, check_SPheno=False, check_SuperISO=True, check_HiggsBounds=True, check_HiggsSignals=True, check_SModelS_direct=True, check_SModelS_interHiggs=True):

#            self.SusyHit = SusyHit() #create inputfile
#            self.SusyHit() #calculate BR + mass spectrum

        if check_SPheno:
            try:
                self.SPheno = SPheno() #create inputfile
                self.SPheno() #calculate BR + mass spectrum
                self.BR = self.SPheno.get_BR_list()
                self.masslist = self.SPheno.get_masslist()

                if not self.SPheno.LSP_neutralino:
                    self.valid = False
                    return
            except:
                print(sys.exc_info()[1])
                pass

        self.BR = format_BR_to_string(get_BR())
        self.masslist = format_masslist_to_string(get_masses())

        if check_SuperISO:
            try:
                self.SuperISO = SuperISO() #create inputfile
                self.SuperISO() #calculate BR + mass spectrum

                if self.SuperISO.valid:
                    self.excluded_by[0] = '0'
                else:
                    self.valid = False
                    self.excluded_by[0] = '1'
            except:
                print(sys.exc_info()[1])
                pass


        if check_HiggsBounds:
            try:
                self.HiggsBounds = HiggsBounds() #create inputfile
                self.HiggsBounds() #calculate xsec
                if self.HiggsBounds.result:
                    self.excluded_by[1] = '0'
                else:
                    self.valid = False
                    self.excluded_by[1] = '1'
            except:
                print(sys.exc_info()[1])
                pass


        if check_HiggsSignals:
            try:
                self.HiggsSignals = HiggsSignals() #create inputfile
                self.HiggsSignals(self.HSval) #calculate xsec
                if self.HiggsSignals.result:
                    self.excluded_by[2] = '0'
                else:
                    self.valid = False
                    self.excluded_by[2] = '1'
            except:
                print(sys.exc_info()[1])
                pass


        if check_SModelS_direct:
            try:
                self.SModelSd = SModelS(False) #create inputfile
                self.SModelSd() #run SModelS direct search
                self.rd = str(self.SModelSd.r)
                self.ex_topo = self.SModelSd.ex_topo
                if self.SModelSd.exclusion == 1:
                    self.valid = False
                    self.excluded_by[3] = '1'
                else:
                    self.excluded_by[3] = '0'

                if hasattr(self,'SModelSd'): del self.SModelSd
            except:
                print(sys.exc_info()[1])
                pass
         
   
        if check_SModelS_interHiggs:
            try:
                self.SusHi = SusHi() #create inputfile
                self.SusHi() #calculate xsec
                self.ggh,self.bbh = self.SusHi.get_xsec()
            except:
                print(sys.exc_info()[1])
                pass

            try:
                self.SModelSiH = SModelS(True) #create inputfile
                self.SModelSiH() #run SModelS intermediate Higgs search
                self.riH = str(self.SModelSiH.r)
                self.missing_topologies = self.SModelSiH.get_topo_string()
                if self.SModelSiH.exclusion == 1:
                    self.valid = False    
                    self.excluded_by[4] = '1'
                else:
                    self.excluded_by[4] = '0'
            except:
                print(sys.exc_info()[1])
                pass

        if hasattr(self,'FileHandler'): del self.FileHandler
        if hasattr(self,'SPheno'): del self.SPheno
        if hasattr(self,'SuperISO'): del self.SuperISO
        if hasattr(self,'HiggsBounds'): del self.HiggsBounds
        if hasattr(self,'HiggsSignals'): del self.HiggsSignals
        if hasattr(self,'SModelSd'): del self.SModelSd
        if hasattr(self,'SusHi'): del self.SusHi
        if hasattr(self,'SModelSiH'): del self.SModelSiH

    def __del__(self): #delete inputfiles and unused directories
        if hasattr(self,'FileHandler'): del self.FileHandler
        if hasattr(self,'SPheno'): del self.SPheno
        if hasattr(self,'SuperISO'): del self.SuperISO
        if hasattr(self,'HiggsBounds'): del self.HiggsBounds
        if hasattr(self,'HiggsSignals'): del self.HiggsSignals
        if hasattr(self,'SusHi'): del self.SusHi
        if hasattr(self,'SModelSd'): del self.SModelSd
        if hasattr(self,'SModelSiH'): del self.SModelSiH
        MSSMHiggs.active = False
