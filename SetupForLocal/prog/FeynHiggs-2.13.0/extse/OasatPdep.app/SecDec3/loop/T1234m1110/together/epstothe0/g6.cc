#include "intfile.hh"

double Pr6(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[42];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=esx[0];
y[4]=-x0;
y[5]=1.+y[4];
y[6]=2.*y[1]*y[2];
y[7]=2.*x0*y[1]*y[2];
y[8]=2.*x1*y[1]*y[2];
y[9]=x2*y[1]*y[2];
y[10]=2.*x0*x2*y[1]*y[2];
y[11]=2.*x1*x2*y[1]*y[2];
y[12]=2.*x0*x1*x2*y[1]*y[2];
y[13]=x1*x1;
y[14]=x2*y[1]*y[2]*y[13];
y[15]=-(y[1]*y[3]);
y[16]=-(x1*x2*y[1]*y[3]);
y[17]=y[6]+y[7]+y[8]+y[9]+y[10]+y[11]+y[12]+y[14]+y[15]+y[16];
y[18]=lrs[0];
y[19]=x0*x0;
y[20]=-x1;
y[21]=1.+y[20];
y[22]=x2*y[1]*y[2]*y[19];
y[23]=-(x0*x2*y[1]*y[3]);
y[24]=y[6]+y[7]+y[8]+y[10]+y[12]+y[15]+y[22]+y[23];
y[25]=lrs[1];
y[26]=-x2;
y[27]=1.+y[26];
y[28]=x0*y[1]*y[2];
y[29]=y[1]*y[2]*y[19];
y[30]=2.*x0*x1*y[1]*y[2];
y[31]=x1*y[1]*y[2]*y[19];
y[32]=x0*y[1]*y[2]*y[13];
y[33]=-(x0*x1*y[1]*y[3]);
y[34]=y[28]+y[29]+y[30]+y[31]+y[32]+y[33];
y[35]=lrs[2];
y[36]=pow(y[5],2);
y[37]=pow(y[17],2);
y[38]=pow(y[18],2);
y[39]=pow(y[21],2);
y[40]=pow(y[24],2);
y[41]=pow(y[25],2);
FOUT=(2.*x0*x1*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[21]*y[24]*y[25]*y[27]*y[34]*y\
[35]-x0*x1*x2*y[1]*y[3]*y[5]*y[17]*y[18]*y[21]*y[24]*y[25]*y[27]*y[34]*y[35\
]+2.*x0*x2*y[1]*y[2]*y[5]*y[13]*y[17]*y[18]*y[21]*y[24]*y[25]*y[27]*y[34]*y\
[35]+2.*x1*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[19]*y[21]*y[24]*y[25]*y[27]*y[34\
]*y[35]+x1*x2*y[1]*y[2]*y[19]*y[21]*y[24]*y[25]*y[36]*y[37]*y[38]+x2*y[1]*y\
[2]*y[19]*y[27]*y[34]*y[35]*y[36]*y[37]*y[38]+x1*x2*y[1]*y[2]*y[19]*y[27]*y\
[34]*y[35]*y[36]*y[37]*y[38]+x0*x2*y[1]*y[2]*y[5]*y[13]*y[17]*y[18]*y[39]*y\
[40]*y[41]+x0*x2*y[1]*y[2]*y[13]*y[27]*y[34]*y[35]*y[39]*y[40]*y[41])/(-2.*\
x0*y[1]*y[2]*y[5]*y[17]*y[18]-2.*x0*x1*y[1]*y[2]*y[5]*y[17]*y[18]-x0*x2*y[1\
]*y[2]*y[5]*y[17]*y[18]-2.*x0*x1*x2*y[1]*y[2]*y[5]*y[17]*y[18]+x0*y[1]*y[3]\
*y[5]*y[17]*y[18]+x0*x1*x2*y[1]*y[3]*y[5]*y[17]*y[18]-x0*x2*y[1]*y[2]*y[5]*\
y[13]*y[17]*y[18]-2.*y[1]*y[2]*y[5]*y[17]*y[18]*y[19]-2.*x2*y[1]*y[2]*y[5]*\
y[17]*y[18]*y[19]-2.*x1*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[19]-2.*x1*y[1]*y[2]\
*y[21]*y[24]*y[25]-2.*x0*x1*y[1]*y[2]*y[21]*y[24]*y[25]-2.*x0*x1*x2*y[1]*y[\
2]*y[21]*y[24]*y[25]+x1*y[1]*y[3]*y[21]*y[24]*y[25]+x0*x1*x2*y[1]*y[3]*y[21\
]*y[24]*y[25]-2.*y[1]*y[2]*y[13]*y[21]*y[24]*y[25]-2.*x0*x2*y[1]*y[2]*y[13]\
*y[21]*y[24]*y[25]-x1*x2*y[1]*y[2]*y[19]*y[21]*y[24]*y[25]-x0*x2*y[1]*y[2]*\
y[27]*y[34]*y[35]-2.*x0*x1*x2*y[1]*y[2]*y[27]*y[34]*y[35]+x0*x1*x2*y[1]*y[3\
]*y[27]*y[34]*y[35]-x0*x2*y[1]*y[2]*y[13]*y[27]*y[34]*y[35]-x2*y[1]*y[2]*y[\
19]*y[27]*y[34]*y[35]-x1*x2*y[1]*y[2]*y[19]*y[27]*y[34]*y[35]);
return (FOUT);
}
double Pm6(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[42];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=esx[0];
y[4]=-x0;
y[5]=1.+y[4];
y[6]=2.*y[1]*y[2];
y[7]=2.*x0*y[1]*y[2];
y[8]=2.*x1*y[1]*y[2];
y[9]=x2*y[1]*y[2];
y[10]=2.*x0*x2*y[1]*y[2];
y[11]=2.*x1*x2*y[1]*y[2];
y[12]=2.*x0*x1*x2*y[1]*y[2];
y[13]=x1*x1;
y[14]=x2*y[1]*y[2]*y[13];
y[15]=-(y[1]*y[3]);
y[16]=-(x1*x2*y[1]*y[3]);
y[17]=y[6]+y[7]+y[8]+y[9]+y[10]+y[11]+y[12]+y[14]+y[15]+y[16];
y[18]=lrs[0];
y[19]=x0*x0;
y[20]=-x1;
y[21]=1.+y[20];
y[22]=x2*y[1]*y[2]*y[19];
y[23]=-(x0*x2*y[1]*y[3]);
y[24]=y[6]+y[7]+y[8]+y[10]+y[12]+y[15]+y[22]+y[23];
y[25]=lrs[1];
y[26]=-x2;
y[27]=1.+y[26];
y[28]=x0*y[1]*y[2];
y[29]=y[1]*y[2]*y[19];
y[30]=2.*x0*x1*y[1]*y[2];
y[31]=x1*y[1]*y[2]*y[19];
y[32]=x0*y[1]*y[2]*y[13];
y[33]=-(x0*x1*y[1]*y[3]);
y[34]=y[28]+y[29]+y[30]+y[31]+y[32]+y[33];
y[35]=lrs[2];
y[36]=pow(y[5],2);
y[37]=pow(y[17],2);
y[38]=pow(y[18],2);
y[39]=pow(y[21],2);
y[40]=pow(y[24],2);
y[41]=pow(y[25],2);
FOUT=pow(lambda*(-2.*x0*y[1]*y[2]*y[5]*y[17]*y[18]-2.*x0*x1*y[1]*y[2]*y[5]*y\
[17]*y[18]-x0*x2*y[1]*y[2]*y[5]*y[17]*y[18]-2.*x0*x1*x2*y[1]*y[2]*y[5]*y[17\
]*y[18]+x0*y[1]*y[3]*y[5]*y[17]*y[18]+x0*x1*x2*y[1]*y[3]*y[5]*y[17]*y[18]-x\
0*x2*y[1]*y[2]*y[5]*y[13]*y[17]*y[18]-2.*y[1]*y[2]*y[5]*y[17]*y[18]*y[19]-2\
.*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[19]-2.*x1*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y\
[19]-2.*x1*y[1]*y[2]*y[21]*y[24]*y[25]-2.*x0*x1*y[1]*y[2]*y[21]*y[24]*y[25]\
-2.*x0*x1*x2*y[1]*y[2]*y[21]*y[24]*y[25]+x1*y[1]*y[3]*y[21]*y[24]*y[25]+x0*\
x1*x2*y[1]*y[3]*y[21]*y[24]*y[25]-2.*y[1]*y[2]*y[13]*y[21]*y[24]*y[25]-2.*x\
0*x2*y[1]*y[2]*y[13]*y[21]*y[24]*y[25]-x1*x2*y[1]*y[2]*y[19]*y[21]*y[24]*y[\
25]-x0*x2*y[1]*y[2]*y[27]*y[34]*y[35]-2.*x0*x1*x2*y[1]*y[2]*y[27]*y[34]*y[3\
5]+x0*x1*x2*y[1]*y[3]*y[27]*y[34]*y[35]-x0*x2*y[1]*y[2]*y[13]*y[27]*y[34]*y\
[35]-x2*y[1]*y[2]*y[19]*y[27]*y[34]*y[35]-x1*x2*y[1]*y[2]*y[19]*y[27]*y[34]\
*y[35])+pow(lambda,3)*(2.*x0*x1*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[21]*y[24]*y\
[25]*y[27]*y[34]*y[35]-x0*x1*x2*y[1]*y[3]*y[5]*y[17]*y[18]*y[21]*y[24]*y[25\
]*y[27]*y[34]*y[35]+2.*x0*x2*y[1]*y[2]*y[5]*y[13]*y[17]*y[18]*y[21]*y[24]*y\
[25]*y[27]*y[34]*y[35]+2.*x1*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[19]*y[21]*y[24\
]*y[25]*y[27]*y[34]*y[35]+x1*x2*y[1]*y[2]*y[19]*y[21]*y[24]*y[25]*y[36]*y[3\
7]*y[38]+x2*y[1]*y[2]*y[19]*y[27]*y[34]*y[35]*y[36]*y[37]*y[38]+x1*x2*y[1]*\
y[2]*y[19]*y[27]*y[34]*y[35]*y[36]*y[37]*y[38]+x0*x2*y[1]*y[2]*y[5]*y[13]*y\
[17]*y[18]*y[39]*y[40]*y[41]+x0*x2*y[1]*y[2]*y[13]*y[27]*y[34]*y[35]*y[39]*\
y[40]*y[41]),2)+pow(y[1]*y[2]+x0*x2*y[1]*y[2]-x0*y[1]*y[3]-x1*y[1]*y[3]-x0*\
x1*x2*y[1]*y[3]+y[7]+y[8]+y[12]+y[1]*y[2]*y[13]+x0*x2*y[1]*y[2]*y[13]+x1*x2\
*y[1]*y[2]*y[19]+y[22]+y[29]+y[30]+lambda*lambda*(-2.*x0*x1*y[1]*y[2]*y[5]*\
y[17]*y[18]*y[21]*y[24]*y[25]-2.*x0*x1*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[21]*\
y[24]*y[25]+x0*x1*x2*y[1]*y[3]*y[5]*y[17]*y[18]*y[21]*y[24]*y[25]-2.*x0*x2*\
y[1]*y[2]*y[5]*y[13]*y[17]*y[18]*y[21]*y[24]*y[25]-2.*x1*x2*y[1]*y[2]*y[5]*\
y[17]*y[18]*y[19]*y[21]*y[24]*y[25]-x0*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[27]*\
y[34]*y[35]-2.*x0*x1*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[27]*y[34]*y[35]+x0*x1*\
x2*y[1]*y[3]*y[5]*y[17]*y[18]*y[27]*y[34]*y[35]-x0*x2*y[1]*y[2]*y[5]*y[13]*\
y[17]*y[18]*y[27]*y[34]*y[35]-2.*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[19]*y[27]*\
y[34]*y[35]-2.*x1*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[19]*y[27]*y[34]*y[35]-2.*\
x0*x1*x2*y[1]*y[2]*y[21]*y[24]*y[25]*y[27]*y[34]*y[35]+x0*x1*x2*y[1]*y[3]*y\
[21]*y[24]*y[25]*y[27]*y[34]*y[35]-2.*x0*x2*y[1]*y[2]*y[13]*y[21]*y[24]*y[2\
5]*y[27]*y[34]*y[35]-x1*x2*y[1]*y[2]*y[19]*y[21]*y[24]*y[25]*y[27]*y[34]*y[\
35]-y[1]*y[2]*y[19]*y[36]*y[37]*y[38]-x2*y[1]*y[2]*y[19]*y[36]*y[37]*y[38]-\
x1*x2*y[1]*y[2]*y[19]*y[36]*y[37]*y[38]-y[1]*y[2]*y[13]*y[39]*y[40]*y[41]-x\
0*x2*y[1]*y[2]*y[13]*y[39]*y[40]*y[41])+pow(lambda,4)*(x1*x2*y[1]*y[2]*y[19\
]*y[21]*y[24]*y[25]*y[27]*y[34]*y[35]*y[36]*y[37]*y[38]+x0*x2*y[1]*y[2]*y[5\
]*y[13]*y[17]*y[18]*y[27]*y[34]*y[35]*y[39]*y[40]*y[41]),2);
return (FOUT);
}
double Ps6(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[42];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=esx[0];
y[4]=-x0;
y[5]=1.+y[4];
y[6]=2.*y[1]*y[2];
y[7]=2.*x0*y[1]*y[2];
y[8]=2.*x1*y[1]*y[2];
y[9]=x2*y[1]*y[2];
y[10]=2.*x0*x2*y[1]*y[2];
y[11]=2.*x1*x2*y[1]*y[2];
y[12]=2.*x0*x1*x2*y[1]*y[2];
y[13]=x1*x1;
y[14]=x2*y[1]*y[2]*y[13];
y[15]=-(y[1]*y[3]);
y[16]=-(x1*x2*y[1]*y[3]);
y[17]=y[6]+y[7]+y[8]+y[9]+y[10]+y[11]+y[12]+y[14]+y[15]+y[16];
y[18]=lrs[0];
y[19]=x0*x0;
y[20]=-x1;
y[21]=1.+y[20];
y[22]=x2*y[1]*y[2]*y[19];
y[23]=-(x0*x2*y[1]*y[3]);
y[24]=y[6]+y[7]+y[8]+y[10]+y[12]+y[15]+y[22]+y[23];
y[25]=lrs[1];
y[26]=-x2;
y[27]=1.+y[26];
y[28]=x0*y[1]*y[2];
y[29]=y[1]*y[2]*y[19];
y[30]=2.*x0*x1*y[1]*y[2];
y[31]=x1*y[1]*y[2]*y[19];
y[32]=x0*y[1]*y[2]*y[13];
y[33]=-(x0*x1*y[1]*y[3]);
y[34]=y[28]+y[29]+y[30]+y[31]+y[32]+y[33];
y[35]=lrs[2];
y[36]=pow(y[5],2);
y[37]=pow(y[17],2);
y[38]=pow(y[18],2);
y[39]=pow(y[21],2);
y[40]=pow(y[24],2);
y[41]=pow(y[25],2);
FOUT=lambda*(-2.*x0*y[1]*y[2]*y[5]*y[17]*y[18]-2.*x0*x1*y[1]*y[2]*y[5]*y[17]\
*y[18]-x0*x2*y[1]*y[2]*y[5]*y[17]*y[18]-2.*x0*x1*x2*y[1]*y[2]*y[5]*y[17]*y[\
18]+x0*y[1]*y[3]*y[5]*y[17]*y[18]+x0*x1*x2*y[1]*y[3]*y[5]*y[17]*y[18]-x0*x2\
*y[1]*y[2]*y[5]*y[13]*y[17]*y[18]-2.*y[1]*y[2]*y[5]*y[17]*y[18]*y[19]-2.*x2\
*y[1]*y[2]*y[5]*y[17]*y[18]*y[19]-2.*x1*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[19]\
-2.*x1*y[1]*y[2]*y[21]*y[24]*y[25]-2.*x0*x1*y[1]*y[2]*y[21]*y[24]*y[25]-2.*\
x0*x1*x2*y[1]*y[2]*y[21]*y[24]*y[25]+x1*y[1]*y[3]*y[21]*y[24]*y[25]+x0*x1*x\
2*y[1]*y[3]*y[21]*y[24]*y[25]-2.*y[1]*y[2]*y[13]*y[21]*y[24]*y[25]-2.*x0*x2\
*y[1]*y[2]*y[13]*y[21]*y[24]*y[25]-x1*x2*y[1]*y[2]*y[19]*y[21]*y[24]*y[25]-\
x0*x2*y[1]*y[2]*y[27]*y[34]*y[35]-2.*x0*x1*x2*y[1]*y[2]*y[27]*y[34]*y[35]+x\
0*x1*x2*y[1]*y[3]*y[27]*y[34]*y[35]-x0*x2*y[1]*y[2]*y[13]*y[27]*y[34]*y[35]\
-x2*y[1]*y[2]*y[19]*y[27]*y[34]*y[35]-x1*x2*y[1]*y[2]*y[19]*y[27]*y[34]*y[3\
5])+pow(lambda,3)*(2.*x0*x1*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[21]*y[24]*y[25]\
*y[27]*y[34]*y[35]-x0*x1*x2*y[1]*y[3]*y[5]*y[17]*y[18]*y[21]*y[24]*y[25]*y[\
27]*y[34]*y[35]+2.*x0*x2*y[1]*y[2]*y[5]*y[13]*y[17]*y[18]*y[21]*y[24]*y[25]\
*y[27]*y[34]*y[35]+2.*x1*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[19]*y[21]*y[24]*y[\
25]*y[27]*y[34]*y[35]+x1*x2*y[1]*y[2]*y[19]*y[21]*y[24]*y[25]*y[36]*y[37]*y\
[38]+x2*y[1]*y[2]*y[19]*y[27]*y[34]*y[35]*y[36]*y[37]*y[38]+x1*x2*y[1]*y[2]\
*y[19]*y[27]*y[34]*y[35]*y[36]*y[37]*y[38]+x0*x2*y[1]*y[2]*y[5]*y[13]*y[17]\
*y[18]*y[39]*y[40]*y[41]+x0*x2*y[1]*y[2]*y[13]*y[27]*y[34]*y[35]*y[39]*y[40\
]*y[41]);
return (FOUT);
}
double Pa6(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[42];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=esx[0];
y[4]=-x0;
y[5]=1.+y[4];
y[6]=2.*y[1]*y[2];
y[7]=2.*x0*y[1]*y[2];
y[8]=2.*x1*y[1]*y[2];
y[9]=x2*y[1]*y[2];
y[10]=2.*x0*x2*y[1]*y[2];
y[11]=2.*x1*x2*y[1]*y[2];
y[12]=2.*x0*x1*x2*y[1]*y[2];
y[13]=x1*x1;
y[14]=x2*y[1]*y[2]*y[13];
y[15]=-(y[1]*y[3]);
y[16]=-(x1*x2*y[1]*y[3]);
y[17]=y[6]+y[7]+y[8]+y[9]+y[10]+y[11]+y[12]+y[14]+y[15]+y[16];
y[18]=lrs[0];
y[19]=x0*x0;
y[20]=-x1;
y[21]=1.+y[20];
y[22]=x2*y[1]*y[2]*y[19];
y[23]=-(x0*x2*y[1]*y[3]);
y[24]=y[6]+y[7]+y[8]+y[10]+y[12]+y[15]+y[22]+y[23];
y[25]=lrs[1];
y[26]=-x2;
y[27]=1.+y[26];
y[28]=x0*y[1]*y[2];
y[29]=y[1]*y[2]*y[19];
y[30]=2.*x0*x1*y[1]*y[2];
y[31]=x1*y[1]*y[2]*y[19];
y[32]=x0*y[1]*y[2]*y[13];
y[33]=-(x0*x1*y[1]*y[3]);
y[34]=y[28]+y[29]+y[30]+y[31]+y[32]+y[33];
y[35]=lrs[2];
y[36]=pow(y[5],2);
y[37]=pow(y[17],2);
y[38]=pow(y[18],2);
y[39]=pow(y[21],2);
y[40]=pow(y[24],2);
y[41]=pow(y[25],2);
FOUT=(lambda*(-2.*x0*y[1]*y[2]*y[5]*y[17]*y[18]-2.*x0*x1*y[1]*y[2]*y[5]*y[17\
]*y[18]-x0*x2*y[1]*y[2]*y[5]*y[17]*y[18]-2.*x0*x1*x2*y[1]*y[2]*y[5]*y[17]*y\
[18]+x0*y[1]*y[3]*y[5]*y[17]*y[18]+x0*x1*x2*y[1]*y[3]*y[5]*y[17]*y[18]-x0*x\
2*y[1]*y[2]*y[5]*y[13]*y[17]*y[18]-2.*y[1]*y[2]*y[5]*y[17]*y[18]*y[19]-2.*x\
2*y[1]*y[2]*y[5]*y[17]*y[18]*y[19]-2.*x1*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[19\
]-2.*x1*y[1]*y[2]*y[21]*y[24]*y[25]-2.*x0*x1*y[1]*y[2]*y[21]*y[24]*y[25]-2.\
*x0*x1*x2*y[1]*y[2]*y[21]*y[24]*y[25]+x1*y[1]*y[3]*y[21]*y[24]*y[25]+x0*x1*\
x2*y[1]*y[3]*y[21]*y[24]*y[25]-2.*y[1]*y[2]*y[13]*y[21]*y[24]*y[25]-2.*x0*x\
2*y[1]*y[2]*y[13]*y[21]*y[24]*y[25]-x1*x2*y[1]*y[2]*y[19]*y[21]*y[24]*y[25]\
-x0*x2*y[1]*y[2]*y[27]*y[34]*y[35]-2.*x0*x1*x2*y[1]*y[2]*y[27]*y[34]*y[35]+\
x0*x1*x2*y[1]*y[3]*y[27]*y[34]*y[35]-x0*x2*y[1]*y[2]*y[13]*y[27]*y[34]*y[35\
]-x2*y[1]*y[2]*y[19]*y[27]*y[34]*y[35]-x1*x2*y[1]*y[2]*y[19]*y[27]*y[34]*y[\
35])+pow(lambda,3)*(2.*x0*x1*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[21]*y[24]*y[25\
]*y[27]*y[34]*y[35]-x0*x1*x2*y[1]*y[3]*y[5]*y[17]*y[18]*y[21]*y[24]*y[25]*y\
[27]*y[34]*y[35]+2.*x0*x2*y[1]*y[2]*y[5]*y[13]*y[17]*y[18]*y[21]*y[24]*y[25\
]*y[27]*y[34]*y[35]+2.*x1*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[19]*y[21]*y[24]*y\
[25]*y[27]*y[34]*y[35]+x1*x2*y[1]*y[2]*y[19]*y[21]*y[24]*y[25]*y[36]*y[37]*\
y[38]+x2*y[1]*y[2]*y[19]*y[27]*y[34]*y[35]*y[36]*y[37]*y[38]+x1*x2*y[1]*y[2\
]*y[19]*y[27]*y[34]*y[35]*y[36]*y[37]*y[38]+x0*x2*y[1]*y[2]*y[5]*y[13]*y[17\
]*y[18]*y[39]*y[40]*y[41]+x0*x2*y[1]*y[2]*y[13]*y[27]*y[34]*y[35]*y[39]*y[4\
0]*y[41]))/(lambda*(y[1]*y[2]+x0*x2*y[1]*y[2]-x0*y[1]*y[3]-x1*y[1]*y[3]-x0*\
x1*x2*y[1]*y[3]+y[7]+y[8]+y[12]+y[1]*y[2]*y[13]+x0*x2*y[1]*y[2]*y[13]+x1*x2\
*y[1]*y[2]*y[19]+y[22]+y[29]+y[30]+lambda*lambda*(-2.*x0*x1*y[1]*y[2]*y[5]*\
y[17]*y[18]*y[21]*y[24]*y[25]-2.*x0*x1*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[21]*\
y[24]*y[25]+x0*x1*x2*y[1]*y[3]*y[5]*y[17]*y[18]*y[21]*y[24]*y[25]-2.*x0*x2*\
y[1]*y[2]*y[5]*y[13]*y[17]*y[18]*y[21]*y[24]*y[25]-2.*x1*x2*y[1]*y[2]*y[5]*\
y[17]*y[18]*y[19]*y[21]*y[24]*y[25]-x0*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[27]*\
y[34]*y[35]-2.*x0*x1*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[27]*y[34]*y[35]+x0*x1*\
x2*y[1]*y[3]*y[5]*y[17]*y[18]*y[27]*y[34]*y[35]-x0*x2*y[1]*y[2]*y[5]*y[13]*\
y[17]*y[18]*y[27]*y[34]*y[35]-2.*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[19]*y[27]*\
y[34]*y[35]-2.*x1*x2*y[1]*y[2]*y[5]*y[17]*y[18]*y[19]*y[27]*y[34]*y[35]-2.*\
x0*x1*x2*y[1]*y[2]*y[21]*y[24]*y[25]*y[27]*y[34]*y[35]+x0*x1*x2*y[1]*y[3]*y\
[21]*y[24]*y[25]*y[27]*y[34]*y[35]-2.*x0*x2*y[1]*y[2]*y[13]*y[21]*y[24]*y[2\
5]*y[27]*y[34]*y[35]-x1*x2*y[1]*y[2]*y[19]*y[21]*y[24]*y[25]*y[27]*y[34]*y[\
35]-y[1]*y[2]*y[19]*y[36]*y[37]*y[38]-x2*y[1]*y[2]*y[19]*y[36]*y[37]*y[38]-\
x1*x2*y[1]*y[2]*y[19]*y[36]*y[37]*y[38]-y[1]*y[2]*y[13]*y[39]*y[40]*y[41]-x\
0*x2*y[1]*y[2]*y[13]*y[39]*y[40]*y[41])+pow(lambda,4)*(x1*x2*y[1]*y[2]*y[19\
]*y[21]*y[24]*y[25]*y[27]*y[34]*y[35]*y[36]*y[37]*y[38]+x0*x2*y[1]*y[2]*y[5\
]*y[13]*y[17]*y[18]*y[27]*y[34]*y[35]*y[39]*y[40]*y[41])));
return (FOUT);
}
double Pt6t1(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[4];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=esx[0];
FOUT=(1.-x0)*x0*(2.*y[1]*y[2]+2.*x0*y[1]*y[2]+2.*x1*y[1]*y[2]+x2*y[1]*y[2]+2\
.*x0*x2*y[1]*y[2]+2.*x1*x2*y[1]*y[2]+2.*x0*x1*x2*y[1]*y[2]+x2*(x1*x1)*y[1]*\
y[2]-y[1]*y[3]-x1*x2*y[1]*y[3]);
return (FOUT);
}
double Pt6t2(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[4];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=esx[0];
FOUT=(1.-x1)*x1*(2.*y[1]*y[2]+2.*x0*y[1]*y[2]+2.*x1*y[1]*y[2]+2.*x0*x2*y[1]*\
y[2]+2.*x0*x1*x2*y[1]*y[2]+x2*(x0*x0)*y[1]*y[2]-y[1]*y[3]-x0*x2*y[1]*y[3]);
return (FOUT);
}
double Pt6t3(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[4];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x0*x0;
FOUT=(1.-x2)*x2*(-(x0*x1*esx[0]*y[1])+x0*y[1]*y[2]+2.*x0*x1*y[1]*y[2]+x0*(x1\
*x1)*y[1]*y[2]+y[1]*y[2]*y[3]+x1*y[1]*y[2]*y[3]);
return (FOUT);
}
