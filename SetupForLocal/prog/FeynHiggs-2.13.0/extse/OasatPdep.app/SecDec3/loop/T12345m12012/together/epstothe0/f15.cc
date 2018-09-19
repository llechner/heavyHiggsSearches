#include "intfile.hh"

dcmplx Pf15(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double x3=x[3];
dcmplx y[152];
dcmplx FOUT;
dcmplx MYI(0.,1.);
y[1]=1./bi;
y[2]=em[0];
y[3]=x0*x0;
y[4]=em[1];
y[5]=esx[0];
y[6]=x0*y[1]*y[2];
y[7]=x0*y[1]*y[4];
y[8]=-(x0*y[1]*y[5]);
y[9]=y[1]*y[2];
y[10]=y[1]*y[4];
y[11]=-(y[1]*y[5]);
y[12]=x2*y[1]*y[2];
y[13]=x2*y[1]*y[4];
y[14]=-(x2*y[1]*y[5]);
y[15]=-x1;
y[16]=1.+y[15];
y[17]=2.*x1*y[1]*y[4];
y[18]=2.*x0*x2*y[1]*y[4];
y[19]=2.*x0*x3*y[1]*y[4];
y[20]=-x0;
y[21]=1.+y[20];
y[22]=2.*x2*x3*y[1]*y[4];
y[23]=x3*x3;
y[24]=lrs[0];
y[25]=x1*y[1]*y[2];
y[26]=2.*x2*y[1]*y[2];
y[27]=2.*x0*x2*y[1]*y[2];
y[28]=x3*y[1]*y[2];
y[29]=x3*y[1]*y[4];
y[30]=y[1]*y[4]*y[23];
y[31]=-(x3*y[1]*y[5]);
y[32]=x1*x2*y[1]*y[2];
y[33]=x1*x3*y[1]*y[2];
y[34]=x2*x3*y[1]*y[2];
y[35]=2.*x0*x2*x3*y[1]*y[2];
y[36]=x1*x2*y[1]*y[4];
y[37]=x1*x3*y[1]*y[4];
y[38]=x2*x3*y[1]*y[4];
y[39]=2.*x0*x2*x3*y[1]*y[4];
y[40]=2.*x1*x2*x3*y[1]*y[4];
y[41]=x1*y[1]*y[4]*y[23];
y[42]=2.*x0*x2*y[1]*y[4]*y[23];
y[43]=-(x1*x2*y[1]*y[5]);
y[44]=-(x1*x3*y[1]*y[5]);
y[45]=-(x2*x3*y[1]*y[5]);
y[46]=-2.*x0*x2*x3*y[1]*y[5];
y[47]=y[9]+y[25]+y[26]+y[27]+y[28]+y[29]+y[30]+y[31]+y[32]+y[33]+y[34]+y[35]\
+y[36]+y[37]+y[38]+y[39]+y[40]+y[41]+y[42]+y[43]+y[44]+y[45]+y[46];
y[48]=lrs[1];
y[49]=-x2;
y[50]=1.+y[49];
y[51]=x1*y[1]*y[4];
y[52]=2.*x1*x3*y[1]*y[4];
y[53]=-(x1*y[1]*y[5]);
y[54]=lambda*lambda;
y[55]=y[6]+y[7]+y[8]+y[9]+y[10]+y[11]+y[17]+y[18]+y[19];
y[56]=y[9]+y[12]+y[13]+y[14]+y[22]+y[28]+y[29]+y[30]+y[31];
y[57]=2.*x1*x2*y[1]*y[4];
y[58]=2.*x3*y[1]*y[4];
y[59]=4.*x0*x2*x3*y[1]*y[4];
y[60]=-2.*x0*x2*y[1]*y[5];
y[61]=y[9]+y[10]+y[11]+y[12]+y[13]+y[14]+y[18]+y[25]+y[27]+y[51]+y[52]+y[53]\
+y[57]+y[58]+y[59]+y[60];
y[62]=x0*x2*y[1]*y[2];
y[63]=x0*x3*y[1]*y[2];
y[64]=x0*x2*y[1]*y[4];
y[65]=x0*x3*y[1]*y[4];
y[66]=x0*y[1]*y[4]*y[23];
y[67]=-(x0*x2*y[1]*y[5]);
y[68]=-(x0*x3*y[1]*y[5]);
y[69]=y[6]+y[9]+y[10]+y[11]+y[12]+y[13]+y[14]+y[17]+y[28]+y[29]+y[31]+y[39]+\
y[52]+y[57]+y[62]+y[63]+y[64]+y[65]+y[66]+y[67]+y[68];
y[70]=lrs[2];
y[71]=y[1]*y[2]*y[3];
y[72]=y[1]*y[3]*y[4];
y[73]=2.*x0*x1*y[1]*y[4];
y[74]=2.*x3*y[1]*y[3]*y[4];
y[75]=-(y[1]*y[3]*y[5]);
y[76]=y[6]+y[7]+y[8]+y[71]+y[72]+y[73]+y[74]+y[75];
y[77]=2.*x2*x3*y[1]*y[2];
y[78]=2.*x2*y[1]*y[4]*y[23];
y[79]=-2.*x2*x3*y[1]*y[5];
y[80]=y[22]+y[26]+y[77]+y[78]+y[79];
y[81]=-(lambda*MYI*x0*y[21]*y[24]*y[80]);
y[82]=-(lambda*MYI*y[21]*y[24]*y[47]);
y[83]=lambda*MYI*x0*y[24]*y[47];
y[84]=1.+y[81]+y[82]+y[83];
y[85]=2.*y[1]*y[4];
y[86]=2.*x2*y[1]*y[4];
y[87]=y[58]+y[85]+y[86];
y[88]=-(lambda*MYI*x1*y[16]*y[48]*y[87]);
y[89]=-(lambda*MYI*y[16]*y[48]*y[69]);
y[90]=lambda*MYI*x1*y[48]*y[69];
y[91]=1.+y[88]+y[89]+y[90];
y[92]=-x3;
y[93]=1.+y[92];
y[94]=2.*y[1]*y[2];
y[95]=2.*x0*y[1]*y[2];
y[96]=2.*x0*x3*y[1]*y[2];
y[97]=2.*x0*y[1]*y[4]*y[23];
y[98]=-2.*x0*x3*y[1]*y[5];
y[99]=y[19]+y[25]+y[28]+y[29]+y[31]+y[51]+y[52]+y[53]+y[94]+y[95]+y[96]+y[97\
]+y[98];
y[100]=y[6]+y[7]+y[8]+y[9]+y[10]+y[11]+y[17]+y[19];
y[101]=x0*x1*y[16]*y[21]*y[24]*y[48]*y[54]*y[56]*y[61];
y[102]=-(lambda*MYI*x1*y[16]*y[48]*y[55]*y[84]);
y[103]=y[101]+y[102];
y[104]=x0*x1*y[1]*y[2];
y[105]=x3*y[1]*y[2]*y[3];
y[106]=x0*x1*y[1]*y[4];
y[107]=x1*x1;
y[108]=y[1]*y[4]*y[107];
y[109]=x3*y[1]*y[3]*y[4];
y[110]=2.*x0*x1*x3*y[1]*y[4];
y[111]=y[1]*y[3]*y[4]*y[23];
y[112]=-(x0*x1*y[1]*y[5]);
y[113]=-(x3*y[1]*y[3]*y[5]);
y[114]=y[9]+y[25]+y[51]+y[53]+y[63]+y[65]+y[68]+y[71]+y[95]+y[104]+y[105]+y[\
106]+y[108]+y[109]+y[110]+y[111]+y[112]+y[113];
y[115]=lrs[3];
y[116]=x0*x1*y[16]*y[21]*y[24]*y[48]*y[54]*y[61]*y[100];
y[117]=-(x0*x1*y[16]*y[21]*y[24]*y[48]*y[54]*y[55]*y[99]);
y[118]=y[116]+y[117];
y[119]=-(x0*x1*y[16]*y[21]*y[24]*y[48]*y[54]*y[55]*y[56]);
y[120]=lambda*MYI*x0*y[21]*y[24]*y[61]*y[91];
y[121]=y[119]+y[120];
y[122]=-(lambda*MYI*y[50]*y[70]*y[114]);
y[123]=lambda*MYI*x2*y[70]*y[114];
y[124]=1.+y[122]+y[123];
y[125]=x0*x1*y[16]*y[21]*y[24]*y[48]*y[54]*y[56]*y[99];
y[126]=-(lambda*MYI*x1*y[16]*y[48]*y[84]*y[100]);
y[127]=y[125]+y[126];
y[128]=-(x0*x1*y[16]*y[21]*y[24]*y[48]*y[54]*y[56]*y[100]);
y[129]=lambda*MYI*x0*y[21]*y[24]*y[91]*y[99];
y[130]=y[128]+y[129];
y[131]=pow(y[56],2);
y[132]=x0*x1*y[16]*y[21]*y[24]*y[48]*y[54]*y[131];
y[133]=y[84]*y[91];
y[134]=y[132]+y[133];
y[135]=x2*y[1]*y[2]*y[3];
y[136]=x2*y[1]*y[3]*y[4];
y[137]=2.*x0*x1*x2*y[1]*y[4];
y[138]=2.*x2*x3*y[1]*y[3]*y[4];
y[139]=-(x2*y[1]*y[3]*y[5]);
y[140]=y[6]+y[7]+y[8]+y[9]+y[19]+y[25]+y[51]+y[53]+y[62]+y[64]+y[67]+y[104]+\
y[106]+y[108]+y[110]+y[112]+y[135]+y[136]+y[137]+y[138]+y[139];
y[141]=-(lambda*MYI*x2*y[50]*y[70]*y[114]);
y[142]=x2+y[141];
y[143]=-(lambda*MYI*x1*y[16]*y[48]*y[69]);
y[144]=x1+y[143];
y[145]=-(lambda*MYI*x3*y[93]*y[115]*y[140]);
y[146]=x3+y[145];
y[147]=-(lambda*MYI*x0*y[21]*y[24]*y[47]);
y[148]=x0+y[147];
y[149]=pow(y[144],2);
y[150]=pow(y[148],2);
y[151]=pow(y[146],2);
FOUT=(pow(bi,-2)*(-(lambda*MYI*x3*y[55]*y[93]*y[115]*(-(lambda*MYI*x2*y[50]*\
y[70]*y[99]*y[118])-y[103]*y[124]-lambda*MYI*x2*y[50]*y[70]*y[76]*y[127]))+\
lambda*MYI*x3*y[61]*y[93]*y[115]*(-(lambda*MYI*x2*y[50]*y[70]*y[100]*y[118]\
)-y[121]*y[124]-lambda*MYI*x2*y[50]*y[70]*y[76]*y[130])+lambda*MYI*x3*y[76]\
*y[93]*y[115]*(lambda*MYI*x2*y[50]*y[70]*y[100]*y[103]-lambda*MYI*x2*y[50]*\
y[70]*y[99]*y[121]-lambda*MYI*x2*y[50]*y[70]*y[76]*y[134])+(lambda*MYI*x2*y\
[50]*y[70]*y[100]*y[127]-lambda*MYI*x2*y[50]*y[70]*y[99]*y[130]+y[124]*y[13\
4])*(1.-lambda*MYI*x3*(2.*x0*y[1]*y[4]+2.*x2*y[1]*y[3]*y[4]+y[73])*y[93]*y[\
115]+lambda*MYI*x3*y[115]*y[140]-lambda*MYI*y[93]*y[115]*y[140])))/((y[1]+y\
[1]*y[142]+y[1]*y[144]+y[1]*y[142]*y[144]+y[1]*y[146]+y[1]*y[144]*y[146]+y[\
1]*y[142]*y[148]+y[1]*y[142]*y[146]*y[148])*(y[9]+y[1]*y[2]*y[142]+y[1]*y[2\
]*y[144]+y[1]*y[4]*y[144]-y[1]*y[5]*y[144]+y[1]*y[2]*y[142]*y[144]+y[1]*y[4\
]*y[142]*y[144]-y[1]*y[5]*y[142]*y[144]+y[1]*y[2]*y[146]+y[1]*y[2]*y[144]*y\
[146]+y[1]*y[4]*y[144]*y[146]-y[1]*y[5]*y[144]*y[146]+y[1]*y[2]*y[148]+2.*y\
[1]*y[2]*y[142]*y[148]+y[1]*y[2]*y[144]*y[148]+y[1]*y[2]*y[142]*y[144]*y[14\
8]+y[1]*y[4]*y[142]*y[144]*y[148]-y[1]*y[5]*y[142]*y[144]*y[148]+y[1]*y[2]*\
y[146]*y[148]+y[1]*y[4]*y[146]*y[148]-y[1]*y[5]*y[146]*y[148]+y[1]*y[2]*y[1\
42]*y[146]*y[148]+y[1]*y[4]*y[142]*y[146]*y[148]-y[1]*y[5]*y[142]*y[146]*y[\
148]+y[1]*y[2]*y[144]*y[146]*y[148]+y[1]*y[4]*y[144]*y[146]*y[148]-y[1]*y[5\
]*y[144]*y[146]*y[148]+2.*y[1]*y[4]*y[142]*y[144]*y[146]*y[148]+y[1]*y[4]*y\
[149]+y[1]*y[4]*y[142]*y[149]+y[1]*y[4]*y[146]*y[149]+y[1]*y[2]*y[142]*y[15\
0]+y[1]*y[2]*y[142]*y[146]*y[150]+y[1]*y[4]*y[142]*y[146]*y[150]-y[1]*y[5]*\
y[142]*y[146]*y[150]+y[1]*y[4]*y[148]*y[151]+y[1]*y[4]*y[144]*y[148]*y[151]\
+y[1]*y[4]*y[142]*y[150]*y[151]));
return (FOUT);
}