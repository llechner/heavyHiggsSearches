import os

path = os.path.abspath(os.path.dirname(__file__ + '/../../../../')) + '/'


path_code = path + 'code/calculation/'
path_prog = path + 'prog/'
path_data = path + 'data/raw-data/'
path_output_save = path + 'data/processed-data/'		#path to saved output

path_data_bino = path_data + 'Bino/'
path_file_bino = path_data + 'exclusion_Bino.csv'
path_data_wino = path_data + 'Wino/'
path_file_wino = path_data + 'exclusion_Wino.csv'
path_data_higgsino = path_data + 'Higgsino/'
path_file_higgsino = path_data + 'exclusion_Higgsino.csv'

path_input = path_code + 'input/'		#path to stored (unchangable) inputfiles
file_input = 'input.slha'
SusHi_block = 'SusHi.slha'

path_temp = path_code + 'temp/'		#path to temporary (useable) inputfiles
path_output = path_code + 'output/'		#path to saved output

pathprog_SusyHit = path_prog + 'Susy-hit/'		#path to SusyHit prog
path_output_SusyHit = path_output + 'SusyHit/'					#path to saved SusyHit output
file_output_SusyHit = 'SusyHit.out'						#filename saved SusyHit output
file_output_SusyHit_log = 'SusyHit_log.out'					#filename saved SusyHit log
file_input_SusyHit = 'SusyHit.in'						#filename SusyHit input (unchangable)

pathprog_SPheno = path_prog + 'SPheno-4.0.2/'		#path to SPheno prog
path_output_SPheno = path_output + 'SPheno/'					#path to saved SPheno output
file_output_SPheno = 'SPheno.out'						#filename saved SPheno output
file_output_SPheno_log = 'SPheno_log.out'					#filename saved SPheno log
file_input_SPheno = 'SPheno.in'						#filename SPheno input (unchangable)

pathprog_SuperISO = path_prog + 'superiso_v3.6/'		#path to SuperISO prog
path_output_SuperISO = path_output + 'SuperISO/'					#path to saved SuperISO output
file_output_SuperISO = 'SuperISO.out'						#filename saved SuperISO output
file_output_SuperISO_log = 'SuperISO_log.out'					#filename saved SuperISO log
file_input_SuperISO = 'SuperISO.in'						#filename SuperISO input (unchangable)

pathprog_SusHi = path_prog + 'SusHi-1.6.1/bin/'	#path to SusHi prog
path_output_SusHi = path_output + 'SusHi/'					#path to saved SModelS output
file_output_SusHi = 'SusHi.out'							#filename saved SusyHit output
file_output_SusHi_log = 'SusHi_log.out'						#filename saved SusyHit log
file_input_SusHi = 'SusHi.in'							#filename SusyHit input (unchangable)


pathprog_SModelS = path_prog + 'SModelS/'		#path to SModelS prog
path_output_SModelS_direct = path_output + 'SModelS/direct/'					#path to saved SModelS output
path_output_SModelS_interHiggs = path_output + 'SModelS/intermediateHiggs/'					#path to saved SModelS output
file_output_SModelS_direct_log = 'SModelS_direct_log.out'					#filename saved SModelS log
file_output_SModelS_interHiggs_log = 'SModelS_interHiggs_log.out'					#filename saved SModelS log
file_input_SModelS_direct = 'SModelS_input_direct.slha'						#filename SModelS input (unchangable)
file_input_SModelS_interHiggs = 'SModelS_input_interHiggs.slha'						#filename SModelS input (unchangable)
file_temp_SModelS_XSec = 'XSec_SModelS.in'					#temporary output files SModelS XSec


file_input_SuSpect = 'SuSpect.in'						#filename SuSpect input (unchangable)
file_input_Values = 'Values.in'							#filename Values input (unchangable)

path_output_FeynHiggs = path_output + 'FeynHiggs/'
file_input_FeynHiggs = 'FeynHiggs.in'						
file_FH_block = 'FH_block.in'

pathprog_HiggsBounds = path_prog + 'HiggsBounds-4.3.1/'	#path to HiggsBounds prog
path_output_HiggsBounds = path_output + 'HiggsBounds/'
file_input_HiggsBounds = 'HiggsBounds.in'		
file_output_HiggsBounds = 'HiggsBounds.out'
file_output_HiggsBounds_log = 'HiggsBounds_log.out'

pathprog_HiggsSignals = path_prog + 'HiggsSignals-1.4.0/'	#path to HiggsSignals prog
path_output_HiggsSignals = path_output + 'HiggsSignals/'
file_input_HiggsSignals = 'HiggsSignals.in'		
file_output_HiggsSignals = 'HiggsSignals.out'
file_output_HiggsSignals_log = 'HiggsSignals_log.out'

#excluded messages:
excluded_SPheno = 'charged_LSP'
excluded_SuperISO = 'flavor_physics'
excluded_HiggsBounds = 'HB'
excluded_HiggsSignals = 'HS'
excluded_SModelS_direct = 'SModelS_direct'
excluded_SModelS_interHiggs = 'SModelS_intermediate_Higgs'

bsgamma_min = 2.69e-4
bsgamma_max = 3.87e-4
Bmumu_min = 1.6e-9
Bmumu_max = 4.2e-9
