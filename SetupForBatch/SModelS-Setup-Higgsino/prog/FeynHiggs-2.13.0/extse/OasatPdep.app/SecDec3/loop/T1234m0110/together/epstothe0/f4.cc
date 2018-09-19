#include "intfile.hh"

dcmplx Pf4(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
dcmplx y[84];
dcmplx FOUT;
dcmplx MYI(0.,1.);
y[1]=1./bi;
y[2]=-x0;
y[3]=1.+y[2];
y[4]=em[0];
y[5]=y[1]*y[4];
y[6]=esx[0];
y[7]=lrs[0];
y[8]=x1*y[1]*y[4];
y[9]=-(x1*y[1]*y[6]);
y[10]=y[5]+y[8]+y[9];
y[11]=-x1;
y[12]=1.+y[11];
y[13]=-(y[1]*y[6]);
y[14]=lrs[1];
y[15]=x0*y[1]*y[4];
y[16]=-(x0*y[1]*y[6]);
y[17]=y[5]+y[13]+y[15]+y[16];
y[18]=-(lambda*MYI*x0*y[3]*y[7]*y[10]);
y[19]=x0+y[18];
y[20]=-(lambda*MYI*x1*y[12]*y[14]*y[17]);
y[21]=x1+y[20];
y[22]=pow(bi,-2);
y[23]=lambda*lambda;
y[24]=y[5]+y[13];
y[25]=pow(y[24],2);
y[26]=x0*x1*y[3]*y[7]*y[12]*y[14]*y[23]*y[25];
y[27]=-(lambda*MYI*y[3]*y[7]*y[10]);
y[28]=lambda*MYI*x0*y[7]*y[10];
y[29]=1.+y[27]+y[28];
y[30]=-(lambda*MYI*y[12]*y[14]*y[17]);
y[31]=lambda*MYI*x1*y[14]*y[17];
y[32]=1.+y[30]+y[31];
y[33]=y[29]*y[32];
y[34]=y[26]+y[33];
y[35]=y[1]*y[19];
y[36]=y[1]*y[21];
y[37]=y[1]*y[19]*y[21];
y[38]=y[1]+y[35]+y[36]+y[37];
y[39]=pow(y[38],-2);
y[40]=x0*x0;
y[41]=1./x2;
y[42]=2.*x0*y[1]*y[4];
y[43]=y[1]*y[4]*y[40];
y[44]=x0*x1*y[1]*y[4];
y[45]=x1*y[1]*y[4]*y[40];
y[46]=lrs[2];
y[47]=-x2;
y[48]=1.+y[47];
y[49]=y[15]+y[43];
y[50]=2.*x2*y[1]*y[4];
y[51]=2.*x0*x2*y[1]*y[4];
y[52]=x2*x2;
y[53]=x1*x2*y[1]*y[4];
y[54]=2.*x0*x1*x2*y[1]*y[4];
y[55]=2.*x0*y[1]*y[4]*y[52];
y[56]=-(x2*y[1]*y[6]);
y[57]=y[5]+y[8]+y[9]+y[50]+y[51]+y[53]+y[54]+y[55]+y[56];
y[58]=2.*y[1]*y[4];
y[59]=2.*x0*x1*y[1]*y[4];
y[60]=4.*x0*x2*y[1]*y[4];
y[61]=y[8]+y[13]+y[42]+y[58]+y[59]+y[60];
y[62]=x2*y[1]*y[4];
y[63]=y[5]+y[13]+y[51]+y[62];
y[64]=x0*x2*y[1]*y[4];
y[65]=x2*y[1]*y[4]*y[40];
y[66]=y[5]+y[13]+y[15]+y[16]+y[64]+y[65];
y[67]=2.*x1*x2*y[1]*y[4];
y[68]=2.*y[1]*y[4]*y[52];
y[69]=y[50]+y[67]+y[68];
y[70]=-(lambda*MYI*x0*y[3]*y[7]*y[69]);
y[71]=-(lambda*MYI*y[3]*y[7]*y[57]);
y[72]=lambda*MYI*x0*y[7]*y[57];
y[73]=1.+y[70]+y[71]+y[72];
y[74]=-(lambda*MYI*y[12]*y[14]*y[66]);
y[75]=lambda*MYI*x1*y[14]*y[66];
y[76]=1.+y[74]+y[75];
y[77]=2.*x2*y[1]*y[4]*y[40];
y[78]=y[16]+y[42]+y[43]+y[44]+y[45]+y[77];
y[79]=-(lambda*MYI*y[46]*y[48]*y[78]);
y[80]=-(lambda*MYI*x0*y[3]*y[7]*y[57]);
y[81]=x0+y[80];
y[82]=-(lambda*MYI*x1*y[12]*y[14]*y[66]);
y[83]=x1+y[82];
FOUT=myLog(bi)*y[22]*y[34]*y[39]-2.*myLog(y[5]+y[1]*y[4]*y[19]+y[1]*y[4]*y[2\
1]-y[1]*y[6]*y[21]+y[1]*y[4]*y[19]*y[21]-y[1]*y[6]*y[19]*y[21])*y[22]*y[34]\
*y[39]+3.*myLog(y[38])*y[22]*y[34]*y[39]+myLog(1.-lambda*MYI*(y[16]+y[42]+y\
[43]+y[44]+y[45])*y[46])*y[22]*y[34]*y[39]-y[22]*y[34]*y[39]*y[41]+(pow(y[1\
]+y[1]*y[81]+y[1]*(x2-lambda*MYI*x2*y[46]*y[48]*y[78])*y[81]+y[1]*y[83]+y[1\
]*y[81]*y[83],-2)*y[22]*y[41]*(lambda*MYI*x2*y[46]*y[48]*y[49]*(x0*x1*y[3]*\
y[7]*y[12]*y[14]*y[23]*y[61]*y[63]-lambda*MYI*x1*y[12]*y[14]*y[49]*y[73])-l\
ambda*MYI*x2*y[46]*y[48]*y[61]*(-(x0*x1*y[3]*y[7]*y[12]*y[14]*y[23]*y[49]*y\
[63])+lambda*MYI*x0*y[3]*y[7]*y[61]*y[76])+(x0*x1*pow(y[63],2)*y[3]*y[7]*y[\
12]*y[14]*y[23]+y[73]*y[76])*(1.-2.*lambda*MYI*x2*y[1]*y[4]*y[40]*y[46]*y[4\
8]+lambda*MYI*x2*y[46]*y[78]+y[79])))/(1.+y[79]);
return (FOUT);
}
