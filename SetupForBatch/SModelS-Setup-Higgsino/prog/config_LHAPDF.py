import os

def config():
    os.chdir(os.path.abspath(os.path.dirname(__file__)))
    os.system('echo config LHAPDF')
    os.chdir('LHAPDF-6.1.6')
    os.system('make clean')
    os.system('./configure --with-boost --prefix=$PWD/installation')
    os.chdir('..')

if __name__ == "__main__":
    config()

