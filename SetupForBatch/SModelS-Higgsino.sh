#! /bin/sh
#SBATCH -J Higgsino
#SBATCH -D /afs/hephy.at/data/llechner01/SModelS/runs
#SBATCH -o /afs/hephy.at/data/llechner01/SModelS/runs/Higgsino_log_jobID_%j.out

#module add python/2.7
echo HIGGSINO CALCULATION PART $1
python --version
virtualenv HIGGSINO_Set$1
cd HIGGSINO_Set$1
cp $PWD/../../Setup/run_Higgsino.py ./
source ./bin/activate
pip install xgboost
pip uninstall numpy -y
pip install numpy
pip install docutils
pip install pyslha argparse unum scipy
python run_Higgsino.py $1
cd ..
rm -rf HIGGSINO_Set$1
echo SUCCESS HIGGSINO PART $1
