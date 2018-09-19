import os

#manually install unum, numpy, scipy, argparse, docutils, lapack-lib, blas-lib, python3, pyslha, pythia

# os.system('sudo apt-get install libblas-dev liblapack-dev')
# os.system('sudo pip3 install unum numpy scipy argparse docutils pyslha')
# anything missing?

# os.system('echo pyslha')
# os.chdir('pyslha-3.2.0')
# os.system('python setup.py build')
# os.system('sudo -H python setup.py install')


def install():
    os.chdir(os.path.abspath(os.path.dirname(__file__)))
    install_2HDMC()
    install_HDecay()
    install_LHAPDF()
    install_FeynHiggs13()
    install_HiggsBounds()
    install_HiggsSignals()
    install_SModelS()
    install_SPheno()
    install_SusHi()


def write_path_to_SusHi_makefile():
    f = open('SusHi-1.6.1/Makefile','r')
    output = f.readlines()
    f.close
    path = os.path.abspath('FeynHiggs-2.13.0')
    output[17] = 'FHPATH=' + path + '\n'
    output[18] = 'FHVERSION=2.13.0\n'
    path = os.path.abspath('HiggsBounds-4.3.1')
    output[20] = 'HBPATH=' + path + '\n'
    output[21] = 'HBVERSION=4.3.1\n'
    path = os.path.abspath('HiggsSignals-1.4.0')
    output[23] = 'HSPATH=' + path + '\n'
    output[24] = 'HSVERSION=1.4.0\n'
    path = os.path.abspath('2HDMC-1.7.0')
    output[26] = '2HDMCPATH=' + path + '\n'
    output[27] = '2HDMCVERSION=1.7.0\n'
    path = os.path.abspath('LHAPDF-6.1.6/installation/lib')
    output[29] = 'LHAPATH=' + path + '\n'
    f = open('SusHi-1.6.1/Makefile','w')
    for element in output:
        f.write(element)
    f.close

def write_path_to_HS_configure():
    f = open('HiggsSignals-1.4.0/configure','r')
    output = f.readlines()
    f.close
    path = os.path.abspath('HiggsBounds-4.3.1')
    output[34] = 'HBLIBS =-L' + path + '\n'
    output[35] = 'HBINCLUDE =-I' + path + '\n'
    path = os.path.abspath('FeynHiggs-2.13.0/x86_64-Linux')
    output[70] = 'FHINCLUDE = -I' + path + '/include\n'
    output[71] = 'FHLIBS = -L' + path + '/lib -lFH -lg2c\n'
    f = open('HiggsSignals-1.4.0/configure','w')
    for element in output:
        f.write(element)
    f.close

def write_path_to_HB_configure():
    f = open('HiggsBounds-4.3.1/configure','r')
    output = f.readlines()
    f.close
    path = os.path.abspath('FeynHiggs-2.13.0/x86_64-Linux')
    output[65] = 'FHINCLUDE = -I' + path + '/include\n'
    output[66] = 'FHLIBS = -L' + path + '/lib -lFH\n'
    f = open('HiggsBounds-4.3.1/configure','w')
    for element in output:
        f.write(element)
    f.close

def install_2HDMC():
    os.system('echo install 2HDMC')
    os.chdir('2HDMC-1.7.0')
    os.system('make clean')
    os.system('make')
    os.chdir('..')

def install_HDecay():
    os.system('echo install HDecay')
    os.chdir('HDecay')
    os.system('make clean')
    os.system('make')
    os.chdir('..')

def install_FeynHiggs13():
    os.system('echo install FeynHiggs13')
    os.chdir('FeynHiggs-2.13.0')
    os.system('make clean')
    os.system('./configure')
    os.system('make')
    os.chdir('..')

def install_LHAPDF():
    os.system('echo install LHAPDF')
    os.chdir('LHAPDF-6.1.6')
    os.system('make clean')
    os.system('rm -r installation/*')
    os.system('./configure --with-boost --prefix=$PWD/installation')
    os.system('mkdir installation/share/')
    os.system('mkdir installation/share/LHAPDF/')
    os.system('cp -rf pdfs/* installation/share/LHAPDF/')
    os.system('make')
    os.system('make install')
    os.chdir('..')

def install_HiggsBounds():
    os.system('echo install HiggsBounds')
    write_path_to_HB_configure()
    os.chdir('HiggsBounds-4.3.1')
    os.system('make clean')
    os.system('./configure')
    os.system('make')
    os.chdir('..')

def install_HiggsSignals():
    os.system('echo install HiggsSignals')
    write_path_to_HS_configure()
    os.chdir('HiggsSignals-1.4.0')
    os.system('make clean')
    os.system('./configure')
    os.system('make')
    os.chdir('..')

def install_SModelS():
    os.system('echo install SModelS')
    os.chdir('SModelS/lib')
    os.system('make clean')
    os.system('make')
    os.chdir('pythia6')
    os.system('make clean')
    os.system('make')
    os.chdir('../../')
    os.system('python setup.py install --user')
    os.chdir('..')

def install_SPheno():
    os.system('echo install SPheno')
    os.chdir('SPheno-4.0.2')
    os.system('make clean')
    os.system('make')
    os.chdir('..')

def install_SusHi():
    os.system('echo install SusHi')
    write_path_to_SusHi_makefile()
    os.chdir('SusHi-1.6.1')
    os.system('make clean')
    os.system('./configure')
    os.system('make')
    os.chdir('..')

if __name__ == "__main__":
    install()

