#include "intfile.hh"

dcmplx Pf10(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
dcmplx y[93];
dcmplx FOUT;
dcmplx MYI(0.,1.);
y[1]=1./bi;
y[2]=x0*x0;
y[3]=em[2];
y[4]=em[0];
y[5]=em[1];
y[6]=esx[0];
y[7]=y[1]*y[4];
y[8]=-(y[1]*y[6]);
y[9]=-x1;
y[10]=1.+y[9];
y[11]=y[1]*y[2]*y[4];
y[12]=x0*y[1]*y[5];
y[13]=x0*y[1]*y[3];
y[14]=2.*x1*y[1]*y[2]*y[3];
y[15]=-(y[1]*y[2]*y[6]);
y[16]=y[11]+y[12]+y[13]+y[14]+y[15];
y[17]=-x0;
y[18]=1.+y[17];
y[19]=x1*x1;
y[20]=lrs[0];
y[21]=2.*x0*x1*y[1]*y[4];
y[22]=x1*y[1]*y[5];
y[23]=x1*y[1]*y[3];
y[24]=2.*x0*y[1]*y[3]*y[19];
y[25]=x1*y[1]*y[4];
y[26]=x2*y[1]*y[4];
y[27]=2.*x0*x1*x2*y[1]*y[4];
y[28]=x1*x2*y[1]*y[5];
y[29]=y[1]*y[3]*y[19];
y[30]=x1*x2*y[1]*y[3];
y[31]=2.*x0*x2*y[1]*y[3]*y[19];
y[32]=-(x1*y[1]*y[6]);
y[33]=-(x2*y[1]*y[6]);
y[34]=-2.*x0*x1*x2*y[1]*y[6];
y[35]=y[7]+y[21]+y[22]+y[23]+y[24]+y[25]+y[26]+y[27]+y[28]+y[29]+y[30]+y[31]\
+y[32]+y[33]+y[34];
y[36]=lrs[1];
y[37]=-x2;
y[38]=1.+y[37];
y[39]=-2.*x0*x1*y[1]*y[6];
y[40]=y[7]+y[8]+y[21]+y[22]+y[23]+y[24]+y[39];
y[41]=lambda*lambda;
y[42]=2.*x0*y[1]*y[4];
y[43]=2.*x0*x2*y[1]*y[4];
y[44]=y[1]*y[5];
y[45]=x2*y[1]*y[5];
y[46]=y[1]*y[3];
y[47]=2.*x1*y[1]*y[3];
y[48]=4.*x0*x1*y[1]*y[3];
y[49]=x2*y[1]*y[3];
y[50]=4.*x0*x1*x2*y[1]*y[3];
y[51]=-2.*x0*x2*y[1]*y[6];
y[52]=y[7]+y[8]+y[42]+y[43]+y[44]+y[45]+y[46]+y[47]+y[48]+y[49]+y[50]+y[51];
y[53]=x0*y[1]*y[4];
y[54]=x2*y[1]*y[2]*y[4];
y[55]=x0*x2*y[1]*y[5];
y[56]=2.*x0*x1*y[1]*y[3];
y[57]=x0*x2*y[1]*y[3];
y[58]=2.*x1*x2*y[1]*y[2]*y[3];
y[59]=-(x0*y[1]*y[6]);
y[60]=-(x2*y[1]*y[2]*y[6]);
y[61]=y[11]+y[12]+y[13]+y[14]+y[44]+y[53]+y[54]+y[55]+y[56]+y[57]+y[58]+y[59\
]+y[60];
y[62]=lrs[2];
y[63]=2.*x1*y[1]*y[4];
y[64]=2.*x1*x2*y[1]*y[4];
y[65]=2.*y[1]*y[3]*y[19];
y[66]=2.*x2*y[1]*y[3]*y[19];
y[67]=-2.*x1*x2*y[1]*y[6];
y[68]=y[63]+y[64]+y[65]+y[66]+y[67];
y[69]=-(lambda*MYI*x0*y[18]*y[20]*y[68]);
y[70]=-(lambda*MYI*y[18]*y[20]*y[35]);
y[71]=lambda*MYI*x0*y[20]*y[35];
y[72]=1.+y[69]+y[70]+y[71];
y[73]=2.*x0*y[1]*y[3];
y[74]=2.*y[1]*y[2]*y[3];
y[75]=2.*x2*y[1]*y[2]*y[3];
y[76]=y[73]+y[74]+y[75];
y[77]=-(lambda*MYI*x1*y[10]*y[36]*y[76]);
y[78]=-(lambda*MYI*y[10]*y[36]*y[61]);
y[79]=lambda*MYI*x1*y[36]*y[61];
y[80]=1.+y[77]+y[78]+y[79];
y[81]=x1*y[1]*y[2]*y[4];
y[82]=x0*x1*y[1]*y[5];
y[83]=x0*x1*y[1]*y[3];
y[84]=y[1]*y[2]*y[3]*y[19];
y[85]=-(x1*y[1]*y[2]*y[6]);
y[86]=y[44]+y[53]+y[59]+y[81]+y[82]+y[83]+y[84]+y[85];
y[87]=-(lambda*MYI*x1*y[10]*y[36]*y[61]);
y[88]=x1+y[87];
y[89]=-(lambda*MYI*x0*y[18]*y[20]*y[35]);
y[90]=x0+y[89];
y[91]=-(lambda*MYI*x2*y[38]*y[62]*y[86]);
y[92]=x2+y[91];
FOUT=pow(bi,-2)*pow(y[1]+y[1]*y[88]+y[1]*y[88]*y[90]+y[1]*y[92]+y[1]*y[88]*y\
[90]*y[92],-2)*(lambda*MYI*x2*y[16]*y[38]*y[62]*(x0*x1*y[10]*y[18]*y[20]*y[\
36]*y[40]*y[41]*y[52]-lambda*MYI*x1*y[10]*y[16]*y[36]*y[72])-lambda*MYI*x2*\
y[38]*y[40]*y[62]*(-(x0*x1*y[10]*y[16]*y[18]*y[20]*y[36]*y[41]*y[52])+lambd\
a*MYI*x0*y[18]*y[20]*y[40]*y[80])+(x0*x1*pow(y[52],2)*y[10]*y[18]*y[20]*y[3\
6]*y[41]+y[72]*y[80])*(1.+lambda*MYI*x2*y[62]*y[86]-lambda*MYI*y[38]*y[62]*\
y[86]));
return (FOUT);
}
