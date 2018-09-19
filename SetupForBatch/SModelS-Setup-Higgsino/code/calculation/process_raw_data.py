import sys, os
sys.path.insert(0,os.path.abspath(os.path.dirname(__file__)) + '/code/')
from calculation import calculation

part = sys.argv[1] # process part of total parts
total = sys.argv[2] #split data in #total parts
addon = 'higgsino' #process 'wino', 'bino' or 'higgsino' data
delete_data = True #delete preexisting processed data
data_store_num = 100 #zip data every #data_store_num cycles


calculation(part, total, addon, delete_data, data_store_num)

