import os


def uninstall():
    os.chdir(os.path.abspath(os.path.dirname(__file__)))
    uninstall_superiso()
    uninstall_2HDMC()
    uninstall_HDecay()
    uninstall_LHAPDF()
    uninstall_FeynHiggs13()
    uninstall_HiggsBounds()
    uninstall_HiggsSignals()
    uninstall_SModelS()
    uninstall_SPheno()
    uninstall_SusHi()

def clear_SusHi_makefile():
    f = open('SusHi-1.6.1/Makefile','r')
    output = f.readlines()
    f.close
    output[17] = 'FHPATH=\n'
    output[20] = 'HBPATH=\n'
    output[23] = 'HSPATH=\n'
    output[26] = '2HDMCPATH=\n'
    output[29] = 'LHAPATH=\n'
    f = open('SusHi-1.6.1/Makefile','w')
    for element in output:
        f.write(element)
    f.close

def clear_HS_configure():
    f = open('HiggsSignals-1.4.0/configure','r')
    output = f.readlines()
    f.close
    output[34] = 'HBLIBS =-L\n'
    output[35] = 'HBINCLUDE =-I\n'
    output[70] = 'FHINCLUDE = -I/include\n'
    output[71] = 'FHLIBS = -L/lib -lFH -lg2c\n'
    f = open('HiggsSignals-1.4.0/configure','w')
    for element in output:
        f.write(element)
    f.close

def clear_HB_configure():
    f = open('HiggsBounds-4.3.1/configure','r')
    output = f.readlines()
    f.close
    output[65] = 'FHINCLUDE = -I\n'
    output[66] = 'FHLIBS = -L -lFH\n'
    f = open('HiggsBounds-4.3.1/configure','w')
    for element in output:
        f.write(element)
    f.close


def uninstall_superiso():
    os.system('echo uninstall SuperISO')
    os.chdir('superiso_v3.6')
    os.system('make clean')
    os.system('make distclean')
    os.chdir('..')

def uninstall_2HDMC():
    os.system('echo uninstall 2HDMC')
    os.chdir('2HDMC-1.7.0')
    os.system('make clean')
    os.chdir('..')

def uninstall_HDecay():
    os.system('echo uninstall HDecay')
    os.chdir('HDecay')
    os.system('make clean')
    os.chdir('..')

def uninstall_FeynHiggs13():
    os.system('echo uninstall FeynHiggs13')
    os.chdir('FeynHiggs-2.13.0')
    os.system('make clean')
    os.chdir('..')

def uninstall_LHAPDF():
    os.system('echo uninstall LHAPDF')
    os.chdir('LHAPDF-6.1.6')
    os.system('make clean')
    os.system('rm -r installation/*')
    os.chdir('..')

def uninstall_HiggsBounds():
    os.system('echo uninstall HiggsBounds')
    clear_HB_configure()
    os.chdir('HiggsBounds-4.3.1')
    os.system('make clean')
    os.chdir('..')

def uninstall_HiggsSignals():
    os.system('echo uninstall HiggsSignals')
    clear_HS_configure()
    os.chdir('HiggsSignals-1.4.0')
    os.system('make clean')
    os.chdir('..')

def uninstall_SModelS():
    os.system('echo uninstall SModelS')
    os.chdir('SModelS/lib')
    os.system('make clean')
    os.chdir('pythia6')
    os.system('make clean')
    os.chdir('../../../')

def uninstall_SPheno():
    os.system('echo uninstall SPheno')
    os.chdir('SPheno-4.0.2')
    os.system('make clean')
    os.chdir('..')

def uninstall_SusHi():
    os.system('echo uninstall SusHi')
    clear_SusHi_makefile()
    os.chdir('SusHi-1.6.1')
    os.system('make clean')
    os.chdir('..')

if __name__ == "__main__":
    uninstall()

