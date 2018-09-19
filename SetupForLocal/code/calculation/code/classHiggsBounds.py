from HiggsBounds import create_HiggsBounds_inputfile
from HiggsBounds import run_HiggsBounds
from HiggsBounds import move_output
from HiggsBounds import check_output
from HiggsBounds import check_result_allowed

class HiggsBounds:

    active = False

    def __init__(self):
        if HiggsBounds.active: #only one HiggsBounds object possible
            raise Exception('Error: classHiggsBounds.HiggsBounds: Only one class object can be initiated')
        else:
            create_HiggsBounds_inputfile() #create inputfile
            HiggsBounds.active = False #change to TRUE for making sure that only one object is active

    def __call__(self): #run HiggsBounds, move output to storage
        run_HiggsBounds()
        move_output()
        check_output()
        self.result = check_result_allowed()

    def __del__(self):
        HiggsBounds.active = False
