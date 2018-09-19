import os

os.system('wget http://www.hepforge.org/archive/lhapdf/pdfsets/6.1.6/pdfsets.index')
f = open('pdfsets.index', 'r')
list = f.readlines()
f.close()

for element in list:
    item = str(element.split(' ')[1]) + '.tar.gz'
    comm = 'wget http://www.hepforge.org/archive/lhapdf/pdfsets/6.1.6/' + str(item) + ' -O- | tar -xz -C LHAPDF-6.1.6/pdfs/'
    try:
        os.system(comm)
        print('\n\n successful: ' + element + '\n\n')
    except ValueError:
        print('\n\n ERROR: ' + element + '\n\n')

os.system('rm pdfsets.index')

