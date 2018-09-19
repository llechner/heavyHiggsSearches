#include "intfile.hh"

dcmplx Pf12(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
dcmplx y[73];
dcmplx FOUT;
dcmplx MYI(0.,1.);
y[1]=1./bi;
y[2]=em[0];
y[3]=x1*x1;
y[4]=esx[0];
y[5]=x0*x0;
y[6]=-x0;
y[7]=1.+y[6];
y[8]=2.*x0*x1*y[1]*y[2];
y[9]=y[1]*y[2]*y[3];
y[10]=-(x1*y[1]*y[4]);
y[11]=2.*x1*y[1]*y[2];
y[12]=lrs[0];
y[13]=-x1;
y[14]=1.+y[13];
y[15]=x0*y[1]*y[2];
y[16]=y[1]*y[2]*y[5];
y[17]=2.*x1*y[1]*y[2]*y[5];
y[18]=-(x0*y[1]*y[4]);
y[19]=y[8]+y[15]+y[16]+y[17]+y[18];
y[20]=2.*x1*x2*y[1]*y[2];
y[21]=y[1]*y[2];
y[22]=x1*x2*y[1]*y[2];
y[23]=2.*x0*x1*x2*y[1]*y[2];
y[24]=x2*y[1]*y[2]*y[3];
y[25]=2.*x0*x2*y[1]*y[2]*y[3];
y[26]=-(x1*x2*y[1]*y[4]);
y[27]=y[9]+y[10]+y[11]+y[21]+y[22]+y[23]+y[24]+y[25]+y[26];
y[28]=-(lambda*MYI*y[7]*y[12]*y[27]);
y[29]=lrs[1];
y[30]=-x2;
y[31]=1.+y[30];
y[32]=x1*y[1]*y[2];
y[33]=2.*x0*y[1]*y[2]*y[3];
y[34]=y[8]+y[9]+y[10]+y[32]+y[33];
y[35]=lambda*lambda;
y[36]=2.*y[1]*y[2];
y[37]=x2*y[1]*y[2];
y[38]=2.*x0*x2*y[1]*y[2];
y[39]=4.*x0*x1*x2*y[1]*y[2];
y[40]=-(y[1]*y[4]);
y[41]=-(x2*y[1]*y[4]);
y[42]=y[11]+y[20]+y[36]+y[37]+y[38]+y[39]+y[40]+y[41];
y[43]=2.*x0*y[1]*y[2];
y[44]=x0*x2*y[1]*y[2];
y[45]=x2*y[1]*y[2]*y[5];
y[46]=2.*x1*x2*y[1]*y[2]*y[5];
y[47]=-(x0*x2*y[1]*y[4]);
y[48]=y[8]+y[18]+y[21]+y[23]+y[43]+y[44]+y[45]+y[46]+y[47];
y[49]=lrs[2];
y[50]=2.*x2*y[1]*y[2]*y[3];
y[51]=y[20]+y[50];
y[52]=-(lambda*MYI*x0*y[7]*y[12]*y[51]);
y[53]=lambda*MYI*x0*y[12]*y[27];
y[54]=1.+y[28]+y[52]+y[53];
y[55]=2.*x2*y[1]*y[2]*y[5];
y[56]=y[38]+y[43]+y[55];
y[57]=-(lambda*MYI*x1*y[14]*y[29]*y[56]);
y[58]=-(lambda*MYI*y[14]*y[29]*y[48]);
y[59]=lambda*MYI*x1*y[29]*y[48];
y[60]=1.+y[57]+y[58]+y[59];
y[61]=x0*x1*y[1]*y[2];
y[62]=x1*y[1]*y[2]*y[5];
y[63]=x0*y[1]*y[2]*y[3];
y[64]=y[1]*y[2]*y[3]*y[5];
y[65]=-(x0*x1*y[1]*y[4]);
y[66]=y[61]+y[62]+y[63]+y[64]+y[65];
y[67]=-(lambda*MYI*x0*y[7]*y[12]*y[27]);
y[68]=x0+y[67];
y[69]=-(lambda*MYI*x1*y[14]*y[29]*y[48]);
y[70]=x1+y[69];
y[71]=-(lambda*MYI*x2*y[31]*y[49]*y[66]);
y[72]=x2+y[71];
FOUT=x0*pow(bi,-2)*pow(y[1]+y[1]*y[68]+y[1]*y[68]*y[70]+pow(y[68],2)*y[1]*y[\
70]*y[72]+y[1]*y[68]*y[70]*y[72],-2)*(1.+y[28])*(lambda*MYI*x2*y[19]*y[31]*\
y[49]*(x0*x1*y[7]*y[12]*y[14]*y[29]*y[34]*y[35]*y[42]-lambda*MYI*x1*y[14]*y\
[19]*y[29]*y[54])-lambda*MYI*x2*y[31]*y[34]*y[49]*(-(x0*x1*y[7]*y[12]*y[14]\
*y[19]*y[29]*y[35]*y[42])+lambda*MYI*x0*y[7]*y[12]*y[34]*y[60])+(x0*x1*pow(\
y[42],2)*y[7]*y[12]*y[14]*y[29]*y[35]+y[54]*y[60])*(1.+lambda*MYI*x2*y[49]*\
y[66]-lambda*MYI*y[31]*y[49]*y[66]));
return (FOUT);
}
