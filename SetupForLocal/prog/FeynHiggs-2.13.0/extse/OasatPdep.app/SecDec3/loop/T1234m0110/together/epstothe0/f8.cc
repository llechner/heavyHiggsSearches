#include "intfile.hh"

dcmplx Pf8(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
dcmplx y[75];
dcmplx FOUT;
dcmplx MYI(0.,1.);
y[1]=1./bi;
y[2]=em[0];
y[3]=x0*x0;
y[4]=esx[0];
y[5]=-x1;
y[6]=1.+y[5];
y[7]=x0*y[1]*y[2];
y[8]=y[1]*y[2]*y[3];
y[9]=-(x0*y[1]*y[4]);
y[10]=-(y[1]*y[3]*y[4]);
y[11]=y[7]+y[8]+y[9]+y[10];
y[12]=-x0;
y[13]=1.+y[12];
y[14]=lrs[0];
y[15]=2.*x1*y[1]*y[2];
y[16]=x1*x1;
y[17]=x2*y[1]*y[2];
y[18]=-(x1*y[1]*y[4]);
y[19]=y[1]*y[2]*y[16];
y[20]=2.*x0*y[1]*y[2]*y[16];
y[21]=x1*x2*y[1]*y[2];
y[22]=2.*x0*x1*x2*y[1]*y[2];
y[23]=-(x1*x2*y[1]*y[4]);
y[24]=-2.*x0*x1*x2*y[1]*y[4];
y[25]=y[15]+y[17]+y[18]+y[19]+y[20]+y[21]+y[22]+y[23]+y[24];
y[26]=lrs[1];
y[27]=-x2;
y[28]=1.+y[27];
y[29]=y[1]*y[2];
y[30]=x1*y[1]*y[2];
y[31]=2.*x0*x1*y[1]*y[2];
y[32]=-2.*x0*x1*y[1]*y[4];
y[33]=y[18]+y[29]+y[30]+y[31]+y[32];
y[34]=lambda*lambda;
y[35]=2.*y[1]*y[2];
y[36]=4.*x0*x1*y[1]*y[2];
y[37]=2.*x0*x2*y[1]*y[2];
y[38]=-(y[1]*y[4]);
y[39]=-(x2*y[1]*y[4]);
y[40]=-2.*x0*x2*y[1]*y[4];
y[41]=y[15]+y[17]+y[35]+y[36]+y[37]+y[38]+y[39]+y[40];
y[42]=2.*x0*y[1]*y[2];
y[43]=2.*x1*y[1]*y[2]*y[3];
y[44]=x0*x2*y[1]*y[2];
y[45]=x2*y[1]*y[2]*y[3];
y[46]=-(x0*x2*y[1]*y[4]);
y[47]=-(x2*y[1]*y[3]*y[4]);
y[48]=y[9]+y[29]+y[31]+y[42]+y[43]+y[44]+y[45]+y[46]+y[47];
y[49]=lrs[2];
y[50]=2.*y[1]*y[2]*y[16];
y[51]=2.*x1*x2*y[1]*y[2];
y[52]=-2.*x1*x2*y[1]*y[4];
y[53]=y[50]+y[51]+y[52];
y[54]=-(lambda*MYI*x0*y[13]*y[14]*y[53]);
y[55]=-(lambda*MYI*y[13]*y[14]*y[25]);
y[56]=lambda*MYI*x0*y[14]*y[25];
y[57]=1.+y[54]+y[55]+y[56];
y[58]=2.*y[1]*y[2]*y[3];
y[59]=y[42]+y[58];
y[60]=-(lambda*MYI*x1*y[6]*y[26]*y[59]);
y[61]=-(lambda*MYI*y[6]*y[26]*y[48]);
y[62]=lambda*MYI*x1*y[26]*y[48];
y[63]=1.+y[60]+y[61]+y[62];
y[64]=x0*x1*y[1]*y[2];
y[65]=x1*y[1]*y[2]*y[3];
y[66]=-(x0*x1*y[1]*y[4]);
y[67]=-(x1*y[1]*y[3]*y[4]);
y[68]=y[7]+y[29]+y[64]+y[65]+y[66]+y[67];
y[69]=-(lambda*MYI*x1*y[6]*y[26]*y[48]);
y[70]=x1+y[69];
y[71]=-(lambda*MYI*x0*y[13]*y[14]*y[25]);
y[72]=x0+y[71];
y[73]=-(lambda*MYI*x2*y[28]*y[49]*y[68]);
y[74]=x2+y[73];
FOUT=pow(bi,-2)*pow(y[1]+y[1]*y[70]+y[1]*y[70]*y[72]+y[1]*y[74]+y[1]*y[72]*y\
[74],-2)*(lambda*MYI*x2*y[11]*y[28]*y[49]*(x0*x1*y[6]*y[13]*y[14]*y[26]*y[3\
3]*y[34]*y[41]-lambda*MYI*x1*y[6]*y[11]*y[26]*y[57])-lambda*MYI*x2*y[28]*y[\
33]*y[49]*(-(x0*x1*y[6]*y[11]*y[13]*y[14]*y[26]*y[34]*y[41])+lambda*MYI*x0*\
y[13]*y[14]*y[33]*y[63])+(x0*x1*pow(y[41],2)*y[6]*y[13]*y[14]*y[26]*y[34]+y\
[57]*y[63])*(1.+lambda*MYI*x2*y[49]*y[68]-lambda*MYI*y[28]*y[49]*y[68]));
return (FOUT);
}