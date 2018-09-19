import sys, os
sys.path.insert(0,os.path.abspath(os.path.dirname(__file__)) + '/code/')
from testcalculation import calculation
from testcalculation import read_output
from fileIO import clear_output_save


def run_test():
#    for addon in ['bino','wino','higgsino']:
    for addon in ['bino']:
        clear_output_save()
        calculation(addon)
        read_output(addon)
    print('\n\nTOTAL CALCULATION TEST SUCCESSFUL\n\n')
    clear_output_save()

if __name__ == "__main__":
    run_test()
