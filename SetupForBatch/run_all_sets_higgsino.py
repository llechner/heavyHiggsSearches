import os,sys

for i in range(1,21):
    os.system("eval `/usr/bin/modulecmd sh add python/2.7` && sbatch SModelS-Higgsino.sh " + str(i))

