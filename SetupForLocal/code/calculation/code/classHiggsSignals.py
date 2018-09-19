from HiggsSignals import create_HiggsSignals_inputfile
from HiggsSignals import run_HiggsSignals
from HiggsSignals import move_output
from HiggsSignals import check_output
from HiggsSignals import check_result_allowed

class HiggsSignals:

    active = False

    def __init__(self):
        if HiggsSignals.active: #only one HiggsSignals object possible
            raise Exception('Error: classHiggsSignals.HiggsSignals: Only one class object can be initiated')
        else:
            create_HiggsSignals_inputfile() #create inputfile
            HiggsSignals.active = False #set to True for making sure only one object is called

    def __call__(self, limit = 0.95): #run HiggsSignals, move output to storage
        run_HiggsSignals()
        move_output()
        check_output()
        self.result = check_result_allowed(limit)
        
    def __del__(self):
        HiggsSignals.active = False
