from fileIO import clear_tempdir
from fileIO import clear_outputdir
from fileIO import change_inputfile
from fileIO import check_inputfile
import parameter as para
import subprocess

class FileHandler:

    active = False

    def __init__(self):
        if FileHandler.active: #only one FileHandler object possible
            raise Exception('Error: classFileHandler.FileHandler: Only one class object can be initiated')
        else:
            FileHandler.active = False #block the creation of another FileHandler object

    def __call__(self,filepath):
        clear_outputdir() #clear the output directory
        subprocess.check_call('cat ' + filepath + ' ' + para.path_input + para.SusHi_block + ' > ' + para.path_temp + para.file_input, shell=True)
        subprocess.check_call('cp ' + filepath + ' ' + para.path_output, shell=True)
#        change_inputfile(list_element, list_block) #create a inputfile with given changes
#        check_inputfile() #check the inputfile

    def __del__(self):
        clear_tempdir() #empty temp directory when deleting FileHandler
        FileHandler.active = False #enable the creation of a FileHandler object again
