path_prog = '/media/lukas/2d17b1d4-972f-4e20-a7c8-e35e19ccb906/multicore/'
path_data = '/media/lukas/2d17b1d4-972f-4e20-a7c8-e35e19ccb906/data/'

path_Higgs1_data = path_prog + 'Higgs1/output/'
path_Higgs2_data = path_prog + 'Higgs2/output/'
path_Higgs3_data = path_prog + 'Higgs3/output/'
path_Higgs4_data = path_prog + 'Higgs4/output/'
path_Desktop_data = path_prog + 'Desktop/'

file_true = 'True_para.out'
file_false = 'False_para.out'

true_data_file_set = [path_Desktop_data+file_true, path_Higgs1_data+file_true, path_Higgs2_data+file_true, path_Higgs3_data+file_true, path_Higgs4_data+file_true]

false_data_file_set = [path_Desktop_data+file_false,path_Higgs1_data+file_false, path_Higgs2_data+file_false, path_Higgs3_data+file_false, path_Higgs4_data+file_false]

path_total_data = path_data
file_total_true = 'True_dataset.out'
file_total_false = 'False_dataset.out'

file_LSP_false = 'LSP_False_dataset.out'
file_HB_false = 'HB_False_dataset.out'
file_HS_false = 'HS_False_dataset.out'
file_SD_false = 'SD_False_dataset.out'
file_SH_false = 'SH_False_dataset.out'

#excluded messages:
excluded_SPheno = 'charged_LSP'
excluded_HiggsBounds = 'HB'
excluded_HiggsSignals = 'HS'
excluded_SModelS_direct = 'SModelS_direct'
excluded_SModelS_interHiggs = 'SModelS_intermediate_Higgs'

#plots
path_plots = '/media/lukas/2d17b1d4-972f-4e20-a7c8-e35e19ccb906/plots/'
path_parameterplots = path_plots + 'parameterplots/'
path_massplots = path_plots + 'massplots/'
path_topoplots = path_plots + 'topologyplots/'

para_name_latex = ['M_1','M_2','M_3','A_t','A_b','\mu','\\tan\\beta','M_A','M_{Q_3,L}','M_{U_3,R}','M_{D_3,R}','E_{cm}','p_{HS}']
para_name = ['M1','M2','M3','At','Ab','mu','tanb','MA','MQ3','MU3R','MD3R', 'Ecm', 'HSval']
para_min = [1,100,1200,-5000,-5000,-3000,2,100,500,500,500]
para_max = [2000,2000,5000,5000,5000,3000,55,2000,2000,2000,2000]
para_unit = ['GeV','GeV','GeV','GeV','GeV','GeV','','GeV','GeV','GeV','GeV']
       
fontsize = 10
legfontsize = 5

#mass list convention
mass_name_latex = ['M_{\\tilde{d}_L}', 'M_{\\tilde{d}_R}', 'M_{\\tilde{u}_L}', 'M_{\\tilde{u}_R}', 'M_{\\tilde{s}_L}', 'M_{\\tilde{s}_R}', 'M_{\\tilde{c}_L}', 'M_{\\tilde{c}_R}', 'M_{\\tilde{b}_1}', 'M_{\\tilde{b}_2}', 'M_{\\tilde{t}_1}', 'M_{\\tilde{t}_2}', 'M_{\\tilde{e}_L^-}', 'M_{\\tilde{e}_R^-}', 'M_{\\tilde{\nu}_{e,L}}', 'M_{\\tilde{\mu}_L^-}', 'M_{\\tilde{\mu}_R^-}', 'M_{\\tilde{\nu}_{\mu,L}}', 'M_{\\tilde{\tau}_1^-}', 'M_{\\tilde{\tau}_2^-}', 'M_{\\tilde{\nu}_{\tau,L}}', 'M_{\\tilde{g}}', 'M_{\\tilde{\chi}_1^0}', 'M_{\\tilde{\chi}_2^0}', 'M_{\\tilde{\chi}_3^0}', 'M_{\\tilde{\chi}_4^0}', 'M_{\\tilde{\chi}_1^+}', 'M_{\\tilde{\chi}_2^+}']
mass_name = ['sdL', 'sdR', 'suL', 'suR', 'ssL', 'ssR', 'scL', 'scR', 'sb1', 'sb2', 'st1', 'st2', 'seL', 'seR', 'snueL', 'smuL', 'smuR', 'snumuL', 'stau1', 'stau2', 'snutauL', 'gino', 'chi10', 'chi20', 'chi30', 'chi40', 'chi1p', 'chi2p']
mass_unit = 'GeV'

excluded_sparticle_index = list(range(8))+list(range(12,21))#+list(range(25,35))