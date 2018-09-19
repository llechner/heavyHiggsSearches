import numpy as np
import matplotlib.pyplot as plt
import Outputparameter as para
from OutputHandler import check_dir_exists
from OutputHandler import check_file_exists
from OutputHandler import read_parameter
from OutputHandler import read_mass_list


para_name = ['M1','M2','M3','At','Ab','mu','tanb','MA','MQ3','MU3R','MD3R', 'Ecm', 'HSval']
para_min = [1,100,1200,-5000,-5000,-3000,2,100,500,500,500]
para_max = [2000,2000,5000,5000,5000,3000,55,2000,2000,2000,2000]
unit = ['GeV','GeV','GeV','GeV','GeV','GeV','','GeV','GeV','GeV','GeV']
para_name_latex = ['M_1','M_2','M_3','A_t','A_b','\mu','\\tan\beta','M_A','M_{Q_3,L}','M_{U_3,R}','M_{D_3,R}','E_{cm}','p_{HS}']

#plots
path_plots = '/media/lukas/2d17b1d4-972f-4e20-a7c8-e35e19ccb906/plots/'
path_parameterplots = path_plots + 'parameterplots/'
path_massplots = path_plots + 'massplots/'
path_topoplots = path_plots + 'topologyplots/'

def create_parameterplots(max_num = 20000, save_pdf = True, save_png = True):
    check_file_exists(para.path_total_data + para.file_total_true)
    check_file_exists(para.path_total_data + para.file_LSP_false)
    check_file_exists(para.path_total_data + para.file_HB_false)
    check_file_exists(para.path_total_data + para.file_HS_false)
    check_file_exists(para.path_total_data + para.file_SD_false)
    check_file_exists(para.path_total_data + para.file_SH_false)
    
    para_true = read_parameter(para.path_total_data + para.file_total_true)
    LSP = read_parameter(para.path_total_data + para.file_LSP_false)
    HB = read_parameter(para.path_total_data + para.file_HB_false)
    HS = read_parameter(para.path_total_data + para.file_HS_false)
    SD = read_parameter(para.path_total_data + para.file_SD_false)
    SH = read_parameter(para.path_total_data + para.file_SH_false)
    
    if len(para_true) > max_num: para_true = para_true[:max_num]
    if len(LSP) > max_num: LSP = LSP[:max_num]
    if len(HB) > max_num: HB = HB[:max_num]
    if len(HS) > max_num: HS = HS[:max_num]
    if len(SD) > max_num: SD = SD[:max_num]
    if len(SH) > max_num: SH = SH[:max_num]

    pval = HB[0][12]
    Ecm = HB[0][11]
    
    para_name_latex = para.para_name_latex[:11] 
    para_name = para.para_name[:11] 
    para_min = para.para_min
    para_max = para.para_max
    para_unit = para.para_unit
    
    fontsize = 9
    legfontsize = 5.5
    
    for i in range(len(para_name)):
        for j in range(len(para_name)):
            if i == j: continue

            s = fontsize
            if i == 6 or j == 6: s = 40

            labelx = para_name_latex[i]
            labely = para_name_latex[j]

            if len(para_true)!=0:
                xt = np.matrix(para_true).T[i].tolist()[0]
                yt = np.matrix(para_true).T[j].tolist()[0]
            if len(LSP)!=0:
                xfLSP = np.matrix(LSP).T[i].tolist()[0]
                yfLSP = np.matrix(LSP).T[j].tolist()[0]
            if len(HB)!=0:
                xfHB = np.matrix(HB).T[i].tolist()[0]
                yfHB = np.matrix(HB).T[j].tolist()[0]
            if len(HS)!=0:
                xfHS = np.matrix(HS).T[i].tolist()[0]
                yfHS = np.matrix(HS).T[j].tolist()[0]
            if len(SD)!=0:
                xfSd = np.matrix(SD).T[i].tolist()[0]
                yfSd = np.matrix(SD).T[j].tolist()[0]
            if len(SH)!=0:
                xfSH = np.matrix(SD).T[i].tolist()[0]
                yfSH = np.matrix(SD).T[j].tolist()[0]


            plt.figure()
            ax = plt.subplot(111)
            axes = plt.gca()
            box = ax.get_position()
            axes.set_xlim([para_min[i],para_max[i]])
            axes.set_ylim([para_min[j],para_max[j]])
            ax.set_position([box.x0, box.y0, box.width * 0.7, box.height])
            plt.rcParams.update({'font.size': fontsize})

            if len(LSP)!=0: plt.scatter(xfLSP, yfLSP, marker='.', color='navy', s=s, label=r'excluded (charged LSP)')
            else: plt.scatter([0,0], [0,0], marker='.', color='navy', s=s, label=r'excluded (charged LSP)')

            if len(HB)!=0: plt.scatter(xfHB, yfHB, marker='.', color='royalblue', s=s, label=r'excluded (HiggsBounds)')
            else: plt.scatter([0,0], [0,0], marker='.', color='royalblue', s=s, label=r'excluded (HiggsBounds)')

            if len(HS)!=0: plt.scatter(xfHS, yfHS, marker='.', color='brown', s=s, label=r'excluded (HiggsSignals)')
            else: plt.scatter([0,0], [0,0], marker='.', color='brown', s=s, label=r'excluded (HiggsSignals)')

            if len(SD)!=0: plt.scatter(xfSd, yfSd, marker='.', color='orange', s=s, label=r'excluded (SModelS direct)')
            else: plt.scatter([0,0], [0,0], marker='.', color='orange', s=s, label=r'excluded (SModelS direct)')

            if len(SH)!=0: plt.scatter(xfSH, yfSH, marker='.', color='yellow', s=s, label=r'excluded (SModels Higgs)')
            else: plt.scatter([0,0], [0,0], marker='.', color='yellow', s=s, label=r'excluded (SModels Higgs)')

            if len(para_true)!=0: plt.scatter(xt, yt, marker='.', color='limegreen', s=s, label=r'not excluded')
            else: plt.scatter([0,0], [0,0], marker='.', color='limegreen', s=s, label=r'not excluded')
            plt.scatter([0,0], [0,0], color='white', s=0, label=' ')
            plt.scatter([0,0], [0,0], color='white', s=0, label='SPheno-4.0.2')
            plt.scatter([0,0], [0,0], color='white', s=0, label='HiggsBounds-4.3.1')
            plt.scatter([0,0], [0,0], color='white', s=0, label='HiggsSignals-1.4.0')
            plt.scatter([0,0], [0,0], color='white', s=0, label='SusHi-1.6.1')
            plt.scatter([0,0], [0,0], color='white', s=0, label='SModelS-1.1.1')
            plt.scatter([0,0], [0,0], color='white', s=0, label=' ')
            for k in range(len(para_name)):
                if k == i or k==j: continue
                plt.scatter([0,0], [0,0], color='white', s=0, label=r'$' + str(para_min[k]) + '$ < $' + para_name_latex[k] + '$ < $' + str(para_max[k]) + ' $ ' + para_unit[k])
            plt.scatter([0,0], [0,0], color='white', s=0, label=' ')
            plt.scatter([0,0], [0,0], color='white', s=0, label=r'$A_i = 0$ TeV, $i=q,L,l$')
            plt.scatter([0,0], [0,0], color='white', s=0, label=r'$M_{i,L} = M_{i,R} = 2$ TeV, $i=q,L,l$')

            leg = ax.legend(loc='center left', bbox_to_anchor=(1, 0.5), fancybox=True, framealpha=1., fontsize=legfontsize)
            for item in leg.legendHandles[7:]:
                item.set_visible(False)
            axes.set_title(r'parameter exclusion, $p_{HS} > ' + str(pval) + '$, $\sqrt{s} = ' + str(int(Ecm/1000.)) + '$ TeV', fontsize=fontsize)
            if para_unit[i] != '':
                plt.xlabel(r'$' + labelx + '$ [' + para_unit[i] + ']')
            else:
                plt.xlabel(r'$' + labelx + '$')            
            if para_unit[j] != '':
                plt.ylabel(r'$' + labely + '$ [' + para_unit[j] + ']')
            else:
                plt.ylabel(r'$' + labely + '$')            

            if save_pdf: plt.savefig(para.path_parameterplots + 'exclusion_' + para_name[i] + '_' + para_name[j] + '_p' + str(int(pval*100)) + '.pdf', format='pdf')
            if save_png: plt.savefig(para.path_parameterplots + 'exclusion_' + para_name[i] + '_' + para_name[j] + '_p' + str(int(pval*100)) + '.png', format='png', dpi=1200)
#            ax.cla()
#            axes.cla()
#            plt.cla()
            plt.clf()
            plt.close('all')

            
def create_massplots(max_num = 20000, save_pdf = True, save_png = True):

    check_file_exists(para.path_total_data + para.file_total_true)
    check_file_exists(para.path_total_data + para.file_LSP_false)
    check_file_exists(para.path_total_data + para.file_HB_false)
    check_file_exists(para.path_total_data + para.file_HS_false)
    check_file_exists(para.path_total_data + para.file_SD_false)
    check_file_exists(para.path_total_data + para.file_SH_false)
    
    para_true = read_mass_list(para.path_total_data + para.file_total_true)
    LSP = read_mass_list(para.path_total_data + para.file_LSP_false)
    HB = read_mass_list(para.path_total_data + para.file_HB_false)
    HS = read_mass_list(para.path_total_data + para.file_HS_false)
    SD = read_mass_list(para.path_total_data + para.file_SD_false)
    SH = read_mass_list(para.path_total_data + para.file_SH_false)
    
    if len(para_true) > max_num: para_true = para_true[:max_num]
    if len(LSP) > max_num: LSP = LSP[:max_num]
    if len(HB) > max_num: HB = HB[:max_num]
    if len(HS) > max_num: HS = HS[:max_num]
    if len(SD) > max_num: SD = SD[:max_num]
    if len(SH) > max_num: SH = SH[:max_num]

    p = read_parameter(para.path_total_data + para.file_HS_false)[0][-2:]
    pval = float(p[1])
    Ecm = int(p[0])
    p = []
    
    para_name_latex = para.para_name_latex[:11] 
    para_name = para.para_name[:11] 
    para_min = para.para_min
    para_max = para.para_max
    para_unit = para.para_unit

    mass_name_latex = para.mass_name_latex
    mass_name = para.mass_name
    mass_unit = para.mass_unit
    
    fontsize = 9
    legfontsize = 5.3
    s = fontsize
        
    for i in range(len(mass_name)):
        for j in range(len(mass_name)):
            if i == j: continue
            if i in para.excluded_sparticle_index: continue
            if j in para.excluded_sparticle_index: continue
                       
            labelx = mass_name_latex[i]
            labely = mass_name_latex[j]

            xt = []
            yt = []
            if len(para_true)!=0:
                for element in para_true:
                    xt.append(np.abs(np.matrix(element).T[0,i]))
                    yt.append(np.abs(np.matrix(element).T[0,j]))

            xfLSP = []
            yfLSP = []
            if len(LSP)!=0:
                for element in LSP:
                    xfLSP.append(np.abs(np.matrix(element).T[0,i]))
                    yfLSP.append(np.abs(np.matrix(element).T[0,j]))
                    
            xfHB = []
            yfHB = []
            if len(HB)!=0:
                for element in HB:
                    xfHB.append(np.abs(np.matrix(element).T[0,i]))
                    yfHB.append(np.abs(np.matrix(element).T[0,j]))
                    
            xfHS = []
            yfHS = []
            if len(HS)!=0:
                for element in HS:
                    xfHS.append(np.abs(np.matrix(element).T[0,i]))
                    yfHS.append(np.abs(np.matrix(element).T[0,j]))
                    
            xfSd = []
            yfSd = []
            if len(SD)!=0:
                for element in SD:
                    xfSd.append(np.abs(np.matrix(element).T[0,i]))
                    yfSd.append(np.abs(np.matrix(element).T[0,j]))
                    
            xfSH = []
            yfSH = []
            if len(SH)!=0:
                for element in SH:
                    xfSH.append(np.abs(np.matrix(element).T[0,i]))
                    yfSH.append(np.abs(np.matrix(element).T[0,j]))
                    
            plt.figure(1)
            axes = plt.gca()
            x = np.asarray(xt+xfLSP+xfHB+xfHS+xfSd+xfSH)
            y = np.asarray(yt+yfLSP+yfHB+yfHS+yfSd+yfSH)
            x = x[np.nonzero(x)]
            y = y[np.nonzero(x)]
            axes.set_xlim(min(x),max(x))
            axes.set_ylim(min(y),max(y))
            plt.rcParams.update({'font.size': fontsize})

            if len(xfLSP)!=0: plt.scatter(xfLSP, yfLSP, marker='.', color='navy', s=s, label=r'excluded (charged LSP)')
            else: plt.scatter([0,0], [0,0], marker='.', color='navy', s=s, label=r'excluded (charged LSP)')

            if len(xfHB)!=0: plt.scatter(xfHB, yfHB, marker='.', color='royalblue', s=s, label=r'excluded (HiggsBounds)')
            else: plt.scatter([0,0], [0,0], marker='.', color='royalblue', s=s, label=r'excluded (HiggsBounds)')

            if len(xfHS)!=0: plt.scatter(xfHS, yfHS, marker='.', color='brown', s=s, label=r'excluded (HiggsSignals)')
            else: plt.scatter([0,0], [0,0], marker='.', color='brown', s=s, label=r'excluded (HiggsSignals)')

            if len(xfSd)!=0: plt.scatter(xfSd, yfSd, marker='.', color='orange', s=s, label=r'excluded (SModelS direct)')
            else: plt.scatter([0,0], [0,0], marker='.', color='orange', s=s, label=r'excluded (SModelS direct)')

            if len(xfSH)!=0: plt.scatter(xfSH, yfSH, marker='.', color='yellow', s=s, label=r'excluded (SModels Higgs)')
            else: plt.scatter([0,0], [0,0], marker='.', color='yellow', s=s, label=r'excluded (SModels Higgs)')

            if len(xt)!=0: plt.scatter(xt, yt, marker='.', color='limegreen', s=s, label=r'not excluded')
            else: plt.scatter([0,0], [0,0], marker='.', color='limegreen', s=s, label=r'not excluded')
            plt.scatter([0,0], [0,0], color='white', s=0, label=' ')
            plt.scatter([0,0], [0,0], color='white', s=0, label='SPheno-4.0.2')
            plt.scatter([0,0], [0,0], color='white', s=0, label='HiggsBounds-4.3.1')
            plt.scatter([0,0], [0,0], color='white', s=0, label='HiggsSignals-1.4.0')
            plt.scatter([0,0], [0,0], color='white', s=0, label='SusHi-1.6.1')
            plt.scatter([0,0], [0,0], color='white', s=0, label='SModelS-1.1.1')
            plt.scatter([0,0], [0,0], color='white', s=0, label=' ')
            for k in range(len(para_name)):
                plt.scatter([0,0], [0,0], color='white', s=0, label=r'$' + str(para_min[k]) + '$ < $' + para_name_latex[k] + '$ < $' + str(para_max[k]) + ' $ ' + para_unit[k])
            plt.scatter([0,0], [0,0], color='white', s=0, label=' ')
            plt.scatter([0,0], [0,0], color='white', s=0, label=r'$A_i = 0$ TeV, $i=q,L,l$')
            plt.scatter([0,0], [0,0], color='white', s=0, label=r'$M_{i,L} = M_{i,R} = 2$ TeV, $i=q,L,l$')

            axes.set_title(r'mass exclusion, $p_{HS} > ' + str(pval) + '$, $\sqrt{s} = ' + str(int(Ecm/1000.)) + '$ TeV', fontsize=fontsize)
            plt.xlabel(r'$' + labelx + '$ [' + mass_unit + ']')
            plt.ylabel(r'$' + labely + '$ [' + mass_unit + ']')

            plt.subplot(111)
            box = plt.subplot(111).get_position()
            plt.subplot(111).set_position([box.x0, box.y0, box.width * 0.7, box.height])
            leg = plt.legend(loc='center left', bbox_to_anchor=(1, 0.5), fancybox=True, framealpha=1., fontsize=legfontsize)
            for item in leg.legendHandles[7:]:
                item.set_visible(False)

            filename = para.path_massplots + 'mass_' + mass_name[i] + '_' + mass_name[j] + '_p' + str(int(pval*100))
            print(filename)
            if save_pdf: plt.savefig(filename + '.pdf', format='pdf')
            if save_png: plt.savefig(filename + '.png', format='png', dpi=1200)
            plt.clf()
            plt.close()
