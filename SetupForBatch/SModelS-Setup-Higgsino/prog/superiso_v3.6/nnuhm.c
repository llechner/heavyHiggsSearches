#include "src/include.h"
#include "src/nmssmtools.h"


#define USE_NMSSMTOOLS /* to be commented if NMSSMTOOLS is unavailable */

/*--------------------------------------------------------------------*/
/* Calculation of the observables, corresponding to an NNUHM point generated by NMSSMTools */
/*--------------------------------------------------------------------*/

int main(int argc,char** argv)
{
	char name[200];
	double m0,m12,tanb,A0,lambda,AK,sgnmu,MHDGUT,MHUGUT,mtop,mbot,alphas_mz,delta0;
	double obs[Nobs_BKsll+1];

  	if(argc<8) 
  	{ 
    		printf(" This program needs 7 parameters:\n"
           	"   m0      universal scalar mass at GUT scale\n"
           	"   m12     universal gaugino mass at GUT scale\n"
           	"   A0      trilinear soft breaking parameter at GUT scale\n"
           	"   tanb      tan(beta) \n"
          	"   lambda    Yukawa coupling\n"
		"   MHDGUT    Down Higgs mass at GUT scale\n"
		"   MHUGUT    Up Higgs mass at GUT scale\n");
    		printf(" Auxiliary parameters are:\n"
         	"   sgnmu    +/-1,  sign of Higgsino mass term (default 1)\n"               	"   AK  (if different from A0)\n"
            	"   mtop     top quark pole mass\n"
           	"   mbot     Mb(Mb) scale independent b-quark mass\n"
           	"   alphas_mz  strong coupling at MZ\n");                        
      		exit(1); 
  	} 
	else  
  	{  
		sscanf(argv[1],"%lf",&m0);
     		sscanf(argv[2],"%lf",&m12);
     		sscanf(argv[3],"%lf",&A0);
     		sscanf(argv[4],"%lf",&tanb);
     		sscanf(argv[5],"%lf",&lambda);
     		sscanf(argv[6],"%lf",&MHDGUT);
     		sscanf(argv[7],"%lf",&MHUGUT);	
     		if(argc>8) sscanf(argv[8],"%lf",&sgnmu); else sgnmu=1;
     		if(argc>9) sscanf(argv[9],"%lf",&AK); else AK=A0;
     		if(argc>10) sscanf(argv[10],"%lf",&mtop); else mtop=173.34;   
     		if(argc>11) sscanf(argv[11],"%lf",&mbot); else mbot=4.18;
     		if(argc>12) sscanf(argv[12],"%lf",&alphas_mz); else alphas_mz=0.1181;
  	}	

	int filesOK=1;
#ifdef USE_NMSSMTOOLS
	if(!test_file(NMSSMTools)) 
	{
		printf("\"%s\" absent. Please check the NMSSMTOOLS path or comment \"#define USE_NMSSMTOOLS\" in nnuhm.c\n",NMSSMTools);
		filesOK=0;
	}
#endif
	if(!filesOK) return 1;
	
	if(!test_file("tmp")) system("mkdir tmp");
	chdir("tmp");
	
	printf("\n");
	
	printf("SuperIso v3.6 - F. Mahmoudi\n\n");
	
#ifdef USE_NMSSMTOOLS	
	sprintf(name,"nnuhm_nmssmtools%d.tmplha",getpid());
	nmssmtools_nnuhm(m0, m12, tanb, A0, MHDGUT, MHUGUT, lambda, AK, sgnmu, mtop, mbot, alphas_mz,name);
	printf("NNUHM - SLHA file generated by NMSSMTOOLS\n\n");

	delta0=delta0_calculator(name);
	if(delta0 !=0.)
	{
		printf("Observable\t\t\tValue\n\n");

        printf("BR(b->s gamma)\t\t\t%.3e\n",bsgamma_calculator(name));
		printf("delta0(B->K* gamma)\t\t%.3e\n\n",delta0_calculator(name));

		printf("BR(Bs->mu mu)\t\t\t%.3e\n",Bsmumu_calculator(name));
		printf("BR(Bs->mu mu)_untag\t\t%.3e\n",Bsmumu_untag_calculator(name));
		printf("BR(Bd->mu mu)\t\t\t%.3e\n\n",Bdmumu_calculator(name));
	
		printf("BR(B->K* mu mu)_low\t\t%.3e\n",BRobs_BKstarmumu_lowq2_full_calculator(name,obs));
		printf("AFB(B->K* mu mu)_low\t\t%.3e\n",obs[1]);
		printf("FL(B->K* mu mu)_low\t\t%.3e\n",obs[2]);
		printf("AI(B->K* mu mu)_low\t\t%.3e\n\n",AI_BKstarmumu_lowq2_calculator(name));
		
		printf("q0^2(AFB(B->K* mu mu))\t\t%.3e\n",obs[0]);
		printf("q0^2(AI(B->K* mu mu))\t\t%.3e\n\n",AI_BKstarmumu_zero_calculator(name));
	
		printf("BR(B->K* mu mu)_high\t\t%.3e\n",BRobs_BKstarmumu_highq2_full_calculator(name,obs));
		printf("AFB(B->K* mu mu)_high\t\t%.3e\n",obs[1]);
		printf("FL(B->K* mu mu)_high\t\t%.3e\n",obs[2]);
		printf("AI(B->K* mu mu)_high\t\t%.3e\n\n",AI_BKstarmumu_highq2_calculator(name));

		printf("BR(B->Xs mu mu)_low\t\t%.3e\n",BRBXsmumu_lowq2_calculator(name));
		printf("BR(B->Xs mu mu)_high\t\t%.3e\n",BRBXsmumu_highq2_calculator(name));
		printf("q0^2(AFB(B->Xs mu mu)\t\t%.3e\n",A_BXsmumu_zero_calculator(name));
		printf("BR(B->Xs tau tau)_high\t\t%.3e\n\n",BRBXstautau_highq2_calculator(name));
	
		printf("BR(B->tau nu)\t\t\t%.3e\n",Btaunu_calculator(name));
      	printf("R(B->tau nu)\t\t\t%.3e\n\n",RBtaunu_calculator(name));
		printf("BR(B->D tau nu)\t\t\t%.3e\n",BRBDlnu_full_calculator(3,1,obs,name));
		printf("AFB(B->D tau nu)\t\t%.3e\n",obs[1]);
		printf("Ptau(B->D tau nu)\t\t%.3e\n",obs[2]);
		printf("BR(B->D tau nu)/BR(B->D e nu)\t%.3e\n\n",BDtaunu_BDenu_calculator(name));
		printf("BR(B->D* tau nu)\t\t%.3e\n",BRBDstarlnu_full_calculator(3,1,obs,name));
		printf("AFB(B->D* tau nu)\t\t%.3e\n",obs[1]);
		printf("Ptau(B->D* tau nu)\t\t%.3e\n",obs[2]);
		printf("PD*(B->D* tau nu)\t\t%.3e\n",obs[3]);
		printf("BR(B->D* tau nu)/BR(B->D* e nu)\t%.3e\n\n",BDstartaunu_BDstarenu_calculator(name));
     	printf("BR(Ds->tau nu)\t\t\t%.3e\n",Dstaunu_calculator(name));
     	printf("BR(Ds->mu nu)\t\t\t%.3e\n",Dsmunu_calculator(name));
     	printf("BR(D->mu nu)\t\t\t%.3e\n",Dmunu_calculator(name));
      	printf("BR(K->mu nu)/BR(pi->mu nu)\t%.3e\n",Kmunu_pimunu_calculator(name));
     	printf("Rmu23(K->mu nu)\t\t\t%.3e\n\n",Rmu23_calculator(name));

		printf("a_muon\t\t\t\t%.3e\n\n",muon_gm2_calculator(name));
 		printf("excluded_collider_NMSSMTools\t%d\n",NMSSM_collider_excluded(name));
		printf("theory_excluded\t\t\t%d\n",NMSSM_theory_excluded(name));
		
		printf("charged_LSP\t\t\t%d\n\n",charged_LSP_calculator(name));
		
		flha_generator(name,"../output.flha");
		printf("output.flha generated\n\n");	
	}
	else printf("Invalid point\n\n");
	sprintf(name,"rm nnuhm_nmssmtools%d.tmplha",getpid());
	system(name);		
#endif
	return 1;
}

