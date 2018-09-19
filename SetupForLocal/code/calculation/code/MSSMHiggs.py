#from fileIO import clear_tempdir
#from fileIO import clear_outputdir
#from fileIO import change_inputfile
#from fileIO import check_inputfile
#from SusyHit import main as run_susyhit
#from SusHi import main as run_sushi
#from SModelS import main as run_smodels


#def main(list_element, list_block):
#    clear_outputdir()
#    change_inputfile(list_element, list_block)
#    check_inputfile()
#    run_susyhit()
#    run_sushi()
#    run_smodels()
#    clear_tempdir()

#def initiate(list_element, list_block):
#    clear_outputdir()
#    change_inputfile(list_element, list_block)
#    check_inputfile()

from classMSSMHiggs import MSSMHiggs
import sys, os

def main(filepath, HSlimit):
    try:
        higgs = MSSMHiggs(filepath, HSlimit)
        higgs()

    except:
#        pass
#        if hasattr(locals(),'higgs'): del higgs
        raise

    valid = higgs.valid
    excluded = higgs.excluded_by
    ggh = higgs.ggh
    bbh = higgs.bbh
    BR = higgs.BR
    topo = higgs.missing_topologies
    masslist = higgs.masslist
    r_val_d = higgs.rd
    r_val_iH = higgs.riH
    ex_topo = higgs.ex_topo
    if hasattr(locals(),'higgs'): del higgs
    return valid, excluded, ggh, bbh, BR, topo, masslist, r_val_d, r_val_iH, ex_topo
