#include "intfile.hh"

double Pr4(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[45];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=em[1];
y[4]=esx[0];
y[5]=-x0;
y[6]=1.+y[5];
y[7]=y[1]*y[2];
y[8]=x1*y[1]*y[2];
y[9]=x2*y[1]*y[2];
y[10]=x1*x2*y[1]*y[2];
y[11]=y[1]*y[3];
y[12]=2.*x0*y[1]*y[3];
y[13]=x1*y[1]*y[3];
y[14]=2.*x0*x1*y[1]*y[3];
y[15]=x1*x2*y[1]*y[3];
y[16]=-(y[1]*y[4]);
y[17]=-(x1*y[1]*y[4]);
y[18]=-(x1*x2*y[1]*y[4]);
y[19]=y[7]+y[8]+y[9]+y[10]+y[11]+y[12]+y[13]+y[14]+y[15]+y[16]+y[17]+y[18];
y[20]=lrs[0];
y[21]=x0*x0;
y[22]=-x1;
y[23]=1.+y[22];
y[24]=x0*y[1]*y[2];
y[25]=2.*x2*y[1]*y[2];
y[26]=x0*x2*y[1]*y[2];
y[27]=x2*x2;
y[28]=y[1]*y[2]*y[27];
y[29]=x0*y[1]*y[3];
y[30]=y[1]*y[3]*y[21];
y[31]=x0*x2*y[1]*y[3];
y[32]=-(x0*y[1]*y[4]);
y[33]=-(x0*x2*y[1]*y[4]);
y[34]=y[7]+y[24]+y[25]+y[26]+y[28]+y[29]+y[30]+y[31]+y[32]+y[33];
y[35]=lrs[1];
y[36]=-x2;
y[37]=1.+y[36];
y[38]=2.*x1*y[1]*y[2];
y[39]=x0*x1*y[1]*y[2];
y[40]=2.*x1*x2*y[1]*y[2];
y[41]=x0*x1*y[1]*y[3];
y[42]=-(x0*x1*y[1]*y[4]);
y[43]=y[7]+y[24]+y[38]+y[39]+y[40]+y[41]+y[42];
y[44]=lrs[2];
FOUT=(x1*pow(y[6],2)*pow(y[19],2)*pow(y[20],2)*y[1]*y[3]*y[21]*y[23]*y[34]*y\
[35]+x1*pow(y[37],2)*pow(y[43],2)*pow(y[44],2)*y[1]*y[2]*y[23]*y[27]*y[34]*\
y[35]+x0*x1*x2*y[1]*y[2]*y[6]*y[19]*y[20]*y[23]*y[34]*y[35]*y[37]*y[43]*y[4\
4]+x0*x1*x2*y[1]*y[3]*y[6]*y[19]*y[20]*y[23]*y[34]*y[35]*y[37]*y[43]*y[44]-\
x0*x1*x2*y[1]*y[4]*y[6]*y[19]*y[20]*y[23]*y[34]*y[35]*y[37]*y[43]*y[44])/(-\
(x0*y[1]*y[2]*y[6]*y[19]*y[20])-x0*x1*y[1]*y[2]*y[6]*y[19]*y[20]-x0*x2*y[1]\
*y[2]*y[6]*y[19]*y[20]-x0*x1*x2*y[1]*y[2]*y[6]*y[19]*y[20]-x0*y[1]*y[3]*y[6\
]*y[19]*y[20]-x0*x1*y[1]*y[3]*y[6]*y[19]*y[20]-x0*x1*x2*y[1]*y[3]*y[6]*y[19\
]*y[20]+x0*y[1]*y[4]*y[6]*y[19]*y[20]+x0*x1*y[1]*y[4]*y[6]*y[19]*y[20]+x0*x\
1*x2*y[1]*y[4]*y[6]*y[19]*y[20]-2.*y[1]*y[3]*y[6]*y[19]*y[20]*y[21]-2.*x1*y\
[1]*y[3]*y[6]*y[19]*y[20]*y[21]-x1*y[1]*y[2]*y[23]*y[34]*y[35]-x0*x1*y[1]*y\
[2]*y[23]*y[34]*y[35]-2.*x1*x2*y[1]*y[2]*y[23]*y[34]*y[35]-x0*x1*x2*y[1]*y[\
2]*y[23]*y[34]*y[35]-x0*x1*y[1]*y[3]*y[23]*y[34]*y[35]-x0*x1*x2*y[1]*y[3]*y\
[23]*y[34]*y[35]+x0*x1*y[1]*y[4]*y[23]*y[34]*y[35]+x0*x1*x2*y[1]*y[4]*y[23]\
*y[34]*y[35]-x1*y[1]*y[3]*y[21]*y[23]*y[34]*y[35]-x1*y[1]*y[2]*y[23]*y[27]*\
y[34]*y[35]-x2*y[1]*y[2]*y[37]*y[43]*y[44]-x0*x2*y[1]*y[2]*y[37]*y[43]*y[44\
]-2.*x1*x2*y[1]*y[2]*y[37]*y[43]*y[44]-x0*x1*x2*y[1]*y[2]*y[37]*y[43]*y[44]\
-x0*x1*x2*y[1]*y[3]*y[37]*y[43]*y[44]+x0*x1*x2*y[1]*y[4]*y[37]*y[43]*y[44]-\
2.*x1*y[1]*y[2]*y[27]*y[37]*y[43]*y[44]);
return (FOUT);
}
double Pm4(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[51];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=em[1];
y[4]=x0*x0;
y[5]=esx[0];
y[6]=y[1]*y[2];
y[7]=x1*y[1]*y[2];
y[8]=x2*y[1]*y[2];
y[9]=-x0;
y[10]=1.+y[9];
y[11]=pow(y[10],2);
y[12]=x1*x2*y[1]*y[2];
y[13]=y[1]*y[3];
y[14]=2.*x0*y[1]*y[3];
y[15]=x1*y[1]*y[3];
y[16]=2.*x0*x1*y[1]*y[3];
y[17]=x1*x2*y[1]*y[3];
y[18]=-(y[1]*y[5]);
y[19]=-(x1*y[1]*y[5]);
y[20]=-(x1*x2*y[1]*y[5]);
y[21]=y[6]+y[7]+y[8]+y[12]+y[13]+y[14]+y[15]+y[16]+y[17]+y[18]+y[19]+y[20];
y[22]=pow(y[21],2);
y[23]=lrs[0];
y[24]=pow(y[23],2);
y[25]=x0*y[1]*y[2];
y[26]=x0*x2*y[1]*y[2];
y[27]=x2*x2;
y[28]=x0*y[1]*y[3];
y[29]=y[1]*y[3]*y[4];
y[30]=-(x0*y[1]*y[5]);
y[31]=-x1;
y[32]=1.+y[31];
y[33]=2.*x2*y[1]*y[2];
y[34]=y[1]*y[2]*y[27];
y[35]=x0*x2*y[1]*y[3];
y[36]=-(x0*x2*y[1]*y[5]);
y[37]=y[6]+y[25]+y[26]+y[28]+y[29]+y[30]+y[33]+y[34]+y[35]+y[36];
y[38]=lrs[1];
y[39]=x0*x1*y[1]*y[2];
y[40]=2.*x1*x2*y[1]*y[2];
y[41]=x0*x1*y[1]*y[3];
y[42]=-(x0*x1*y[1]*y[5]);
y[43]=-x2;
y[44]=1.+y[43];
y[45]=2.*x1*y[1]*y[2];
y[46]=y[6]+y[25]+y[39]+y[40]+y[41]+y[42]+y[45];
y[47]=lrs[2];
y[48]=pow(y[44],2);
y[49]=pow(y[46],2);
y[50]=pow(y[47],2);
FOUT=pow(x0*x1*x2*y[1]*y[2]+x0*x1*x2*y[1]*y[3]+x1*y[1]*y[3]*y[4]-x0*x1*x2*y[\
1]*y[5]+y[6]+y[7]+y[8]+y[25]+y[26]+x1*y[1]*y[2]*y[27]+y[28]+y[29]+y[30]+y[3\
9]+y[40]+y[41]+y[42]+lambda*lambda*(-(y[1]*y[3]*y[4]*y[11]*y[22]*y[24])-x1*\
y[1]*y[3]*y[4]*y[11]*y[22]*y[24]-x0*x1*y[1]*y[2]*y[10]*y[21]*y[23]*y[32]*y[\
37]*y[38]-x0*x1*x2*y[1]*y[2]*y[10]*y[21]*y[23]*y[32]*y[37]*y[38]-x0*x1*y[1]\
*y[3]*y[10]*y[21]*y[23]*y[32]*y[37]*y[38]-x0*x1*x2*y[1]*y[3]*y[10]*y[21]*y[\
23]*y[32]*y[37]*y[38]-2.*x1*y[1]*y[3]*y[4]*y[10]*y[21]*y[23]*y[32]*y[37]*y[\
38]+x0*x1*y[1]*y[5]*y[10]*y[21]*y[23]*y[32]*y[37]*y[38]+x0*x1*x2*y[1]*y[5]*\
y[10]*y[21]*y[23]*y[32]*y[37]*y[38]-x0*x2*y[1]*y[2]*y[10]*y[21]*y[23]*y[44]\
*y[46]*y[47]-x0*x1*x2*y[1]*y[2]*y[10]*y[21]*y[23]*y[44]*y[46]*y[47]-x0*x1*x\
2*y[1]*y[3]*y[10]*y[21]*y[23]*y[44]*y[46]*y[47]+x0*x1*x2*y[1]*y[5]*y[10]*y[\
21]*y[23]*y[44]*y[46]*y[47]-2.*x1*x2*y[1]*y[2]*y[32]*y[37]*y[38]*y[44]*y[46\
]*y[47]-x0*x1*x2*y[1]*y[2]*y[32]*y[37]*y[38]*y[44]*y[46]*y[47]-x0*x1*x2*y[1\
]*y[3]*y[32]*y[37]*y[38]*y[44]*y[46]*y[47]+x0*x1*x2*y[1]*y[5]*y[32]*y[37]*y\
[38]*y[44]*y[46]*y[47]-2.*x1*y[1]*y[2]*y[27]*y[32]*y[37]*y[38]*y[44]*y[46]*\
y[47]-x1*y[1]*y[2]*y[27]*y[48]*y[49]*y[50]),2)+pow(lambda*(-(x0*y[1]*y[2]*y\
[10]*y[21]*y[23])-x0*x1*y[1]*y[2]*y[10]*y[21]*y[23]-x0*x2*y[1]*y[2]*y[10]*y\
[21]*y[23]-x0*x1*x2*y[1]*y[2]*y[10]*y[21]*y[23]-x0*y[1]*y[3]*y[10]*y[21]*y[\
23]-x0*x1*y[1]*y[3]*y[10]*y[21]*y[23]-x0*x1*x2*y[1]*y[3]*y[10]*y[21]*y[23]-\
2.*y[1]*y[3]*y[4]*y[10]*y[21]*y[23]-2.*x1*y[1]*y[3]*y[4]*y[10]*y[21]*y[23]+\
x0*y[1]*y[5]*y[10]*y[21]*y[23]+x0*x1*y[1]*y[5]*y[10]*y[21]*y[23]+x0*x1*x2*y\
[1]*y[5]*y[10]*y[21]*y[23]-x1*y[1]*y[2]*y[32]*y[37]*y[38]-x0*x1*y[1]*y[2]*y\
[32]*y[37]*y[38]-2.*x1*x2*y[1]*y[2]*y[32]*y[37]*y[38]-x0*x1*x2*y[1]*y[2]*y[\
32]*y[37]*y[38]-x0*x1*y[1]*y[3]*y[32]*y[37]*y[38]-x0*x1*x2*y[1]*y[3]*y[32]*\
y[37]*y[38]-x1*y[1]*y[3]*y[4]*y[32]*y[37]*y[38]+x0*x1*y[1]*y[5]*y[32]*y[37]\
*y[38]+x0*x1*x2*y[1]*y[5]*y[32]*y[37]*y[38]-x1*y[1]*y[2]*y[27]*y[32]*y[37]*\
y[38]-x2*y[1]*y[2]*y[44]*y[46]*y[47]-x0*x2*y[1]*y[2]*y[44]*y[46]*y[47]-2.*x\
1*x2*y[1]*y[2]*y[44]*y[46]*y[47]-x0*x1*x2*y[1]*y[2]*y[44]*y[46]*y[47]-x0*x1\
*x2*y[1]*y[3]*y[44]*y[46]*y[47]+x0*x1*x2*y[1]*y[5]*y[44]*y[46]*y[47]-2.*x1*\
y[1]*y[2]*y[27]*y[44]*y[46]*y[47])+pow(lambda,3)*(x1*y[1]*y[3]*y[4]*y[11]*y\
[22]*y[24]*y[32]*y[37]*y[38]+x0*x1*x2*y[1]*y[2]*y[10]*y[21]*y[23]*y[32]*y[3\
7]*y[38]*y[44]*y[46]*y[47]+x0*x1*x2*y[1]*y[3]*y[10]*y[21]*y[23]*y[32]*y[37]\
*y[38]*y[44]*y[46]*y[47]-x0*x1*x2*y[1]*y[5]*y[10]*y[21]*y[23]*y[32]*y[37]*y\
[38]*y[44]*y[46]*y[47]+x1*y[1]*y[2]*y[27]*y[32]*y[37]*y[38]*y[48]*y[49]*y[5\
0]),2);
return (FOUT);
}
double Ps4(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[45];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=em[1];
y[4]=esx[0];
y[5]=-x0;
y[6]=1.+y[5];
y[7]=y[1]*y[2];
y[8]=x1*y[1]*y[2];
y[9]=x2*y[1]*y[2];
y[10]=x1*x2*y[1]*y[2];
y[11]=y[1]*y[3];
y[12]=2.*x0*y[1]*y[3];
y[13]=x1*y[1]*y[3];
y[14]=2.*x0*x1*y[1]*y[3];
y[15]=x1*x2*y[1]*y[3];
y[16]=-(y[1]*y[4]);
y[17]=-(x1*y[1]*y[4]);
y[18]=-(x1*x2*y[1]*y[4]);
y[19]=y[7]+y[8]+y[9]+y[10]+y[11]+y[12]+y[13]+y[14]+y[15]+y[16]+y[17]+y[18];
y[20]=lrs[0];
y[21]=x0*x0;
y[22]=-x1;
y[23]=1.+y[22];
y[24]=x0*y[1]*y[2];
y[25]=2.*x2*y[1]*y[2];
y[26]=x0*x2*y[1]*y[2];
y[27]=x2*x2;
y[28]=y[1]*y[2]*y[27];
y[29]=x0*y[1]*y[3];
y[30]=y[1]*y[3]*y[21];
y[31]=x0*x2*y[1]*y[3];
y[32]=-(x0*y[1]*y[4]);
y[33]=-(x0*x2*y[1]*y[4]);
y[34]=y[7]+y[24]+y[25]+y[26]+y[28]+y[29]+y[30]+y[31]+y[32]+y[33];
y[35]=lrs[1];
y[36]=-x2;
y[37]=1.+y[36];
y[38]=2.*x1*y[1]*y[2];
y[39]=x0*x1*y[1]*y[2];
y[40]=2.*x1*x2*y[1]*y[2];
y[41]=x0*x1*y[1]*y[3];
y[42]=-(x0*x1*y[1]*y[4]);
y[43]=y[7]+y[24]+y[38]+y[39]+y[40]+y[41]+y[42];
y[44]=lrs[2];
FOUT=lambda*(-(x0*y[1]*y[2]*y[6]*y[19]*y[20])-x0*x1*y[1]*y[2]*y[6]*y[19]*y[2\
0]-x0*x2*y[1]*y[2]*y[6]*y[19]*y[20]-x0*x1*x2*y[1]*y[2]*y[6]*y[19]*y[20]-x0*\
y[1]*y[3]*y[6]*y[19]*y[20]-x0*x1*y[1]*y[3]*y[6]*y[19]*y[20]-x0*x1*x2*y[1]*y\
[3]*y[6]*y[19]*y[20]+x0*y[1]*y[4]*y[6]*y[19]*y[20]+x0*x1*y[1]*y[4]*y[6]*y[1\
9]*y[20]+x0*x1*x2*y[1]*y[4]*y[6]*y[19]*y[20]-2.*y[1]*y[3]*y[6]*y[19]*y[20]*\
y[21]-2.*x1*y[1]*y[3]*y[6]*y[19]*y[20]*y[21]-x1*y[1]*y[2]*y[23]*y[34]*y[35]\
-x0*x1*y[1]*y[2]*y[23]*y[34]*y[35]-2.*x1*x2*y[1]*y[2]*y[23]*y[34]*y[35]-x0*\
x1*x2*y[1]*y[2]*y[23]*y[34]*y[35]-x0*x1*y[1]*y[3]*y[23]*y[34]*y[35]-x0*x1*x\
2*y[1]*y[3]*y[23]*y[34]*y[35]+x0*x1*y[1]*y[4]*y[23]*y[34]*y[35]+x0*x1*x2*y[\
1]*y[4]*y[23]*y[34]*y[35]-x1*y[1]*y[3]*y[21]*y[23]*y[34]*y[35]-x1*y[1]*y[2]\
*y[23]*y[27]*y[34]*y[35]-x2*y[1]*y[2]*y[37]*y[43]*y[44]-x0*x2*y[1]*y[2]*y[3\
7]*y[43]*y[44]-2.*x1*x2*y[1]*y[2]*y[37]*y[43]*y[44]-x0*x1*x2*y[1]*y[2]*y[37\
]*y[43]*y[44]-x0*x1*x2*y[1]*y[3]*y[37]*y[43]*y[44]+x0*x1*x2*y[1]*y[4]*y[37]\
*y[43]*y[44]-2.*x1*y[1]*y[2]*y[27]*y[37]*y[43]*y[44])+pow(lambda,3)*(x1*pow\
(y[6],2)*pow(y[19],2)*pow(y[20],2)*y[1]*y[3]*y[21]*y[23]*y[34]*y[35]+x1*pow\
(y[37],2)*pow(y[43],2)*pow(y[44],2)*y[1]*y[2]*y[23]*y[27]*y[34]*y[35]+x0*x1\
*x2*y[1]*y[2]*y[6]*y[19]*y[20]*y[23]*y[34]*y[35]*y[37]*y[43]*y[44]+x0*x1*x2\
*y[1]*y[3]*y[6]*y[19]*y[20]*y[23]*y[34]*y[35]*y[37]*y[43]*y[44]-x0*x1*x2*y[\
1]*y[4]*y[6]*y[19]*y[20]*y[23]*y[34]*y[35]*y[37]*y[43]*y[44]);
return (FOUT);
}
double Pa4(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[51];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=em[1];
y[4]=x0*x0;
y[5]=esx[0];
y[6]=y[1]*y[2];
y[7]=x1*y[1]*y[2];
y[8]=x2*y[1]*y[2];
y[9]=-x0;
y[10]=1.+y[9];
y[11]=pow(y[10],2);
y[12]=x1*x2*y[1]*y[2];
y[13]=y[1]*y[3];
y[14]=2.*x0*y[1]*y[3];
y[15]=x1*y[1]*y[3];
y[16]=2.*x0*x1*y[1]*y[3];
y[17]=x1*x2*y[1]*y[3];
y[18]=-(y[1]*y[5]);
y[19]=-(x1*y[1]*y[5]);
y[20]=-(x1*x2*y[1]*y[5]);
y[21]=y[6]+y[7]+y[8]+y[12]+y[13]+y[14]+y[15]+y[16]+y[17]+y[18]+y[19]+y[20];
y[22]=pow(y[21],2);
y[23]=lrs[0];
y[24]=pow(y[23],2);
y[25]=x0*y[1]*y[2];
y[26]=x0*x2*y[1]*y[2];
y[27]=x2*x2;
y[28]=x0*y[1]*y[3];
y[29]=y[1]*y[3]*y[4];
y[30]=-(x0*y[1]*y[5]);
y[31]=-x1;
y[32]=1.+y[31];
y[33]=2.*x2*y[1]*y[2];
y[34]=y[1]*y[2]*y[27];
y[35]=x0*x2*y[1]*y[3];
y[36]=-(x0*x2*y[1]*y[5]);
y[37]=y[6]+y[25]+y[26]+y[28]+y[29]+y[30]+y[33]+y[34]+y[35]+y[36];
y[38]=lrs[1];
y[39]=x0*x1*y[1]*y[2];
y[40]=2.*x1*x2*y[1]*y[2];
y[41]=x0*x1*y[1]*y[3];
y[42]=-(x0*x1*y[1]*y[5]);
y[43]=-x2;
y[44]=1.+y[43];
y[45]=2.*x1*y[1]*y[2];
y[46]=y[6]+y[25]+y[39]+y[40]+y[41]+y[42]+y[45];
y[47]=lrs[2];
y[48]=pow(y[44],2);
y[49]=pow(y[46],2);
y[50]=pow(y[47],2);
FOUT=(lambda*(-(x0*y[1]*y[2]*y[10]*y[21]*y[23])-x0*x1*y[1]*y[2]*y[10]*y[21]*\
y[23]-x0*x2*y[1]*y[2]*y[10]*y[21]*y[23]-x0*x1*x2*y[1]*y[2]*y[10]*y[21]*y[23\
]-x0*y[1]*y[3]*y[10]*y[21]*y[23]-x0*x1*y[1]*y[3]*y[10]*y[21]*y[23]-x0*x1*x2\
*y[1]*y[3]*y[10]*y[21]*y[23]-2.*y[1]*y[3]*y[4]*y[10]*y[21]*y[23]-2.*x1*y[1]\
*y[3]*y[4]*y[10]*y[21]*y[23]+x0*y[1]*y[5]*y[10]*y[21]*y[23]+x0*x1*y[1]*y[5]\
*y[10]*y[21]*y[23]+x0*x1*x2*y[1]*y[5]*y[10]*y[21]*y[23]-x1*y[1]*y[2]*y[32]*\
y[37]*y[38]-x0*x1*y[1]*y[2]*y[32]*y[37]*y[38]-2.*x1*x2*y[1]*y[2]*y[32]*y[37\
]*y[38]-x0*x1*x2*y[1]*y[2]*y[32]*y[37]*y[38]-x0*x1*y[1]*y[3]*y[32]*y[37]*y[\
38]-x0*x1*x2*y[1]*y[3]*y[32]*y[37]*y[38]-x1*y[1]*y[3]*y[4]*y[32]*y[37]*y[38\
]+x0*x1*y[1]*y[5]*y[32]*y[37]*y[38]+x0*x1*x2*y[1]*y[5]*y[32]*y[37]*y[38]-x1\
*y[1]*y[2]*y[27]*y[32]*y[37]*y[38]-x2*y[1]*y[2]*y[44]*y[46]*y[47]-x0*x2*y[1\
]*y[2]*y[44]*y[46]*y[47]-2.*x1*x2*y[1]*y[2]*y[44]*y[46]*y[47]-x0*x1*x2*y[1]\
*y[2]*y[44]*y[46]*y[47]-x0*x1*x2*y[1]*y[3]*y[44]*y[46]*y[47]+x0*x1*x2*y[1]*\
y[5]*y[44]*y[46]*y[47]-2.*x1*y[1]*y[2]*y[27]*y[44]*y[46]*y[47])+pow(lambda,\
3)*(x1*y[1]*y[3]*y[4]*y[11]*y[22]*y[24]*y[32]*y[37]*y[38]+x0*x1*x2*y[1]*y[2\
]*y[10]*y[21]*y[23]*y[32]*y[37]*y[38]*y[44]*y[46]*y[47]+x0*x1*x2*y[1]*y[3]*\
y[10]*y[21]*y[23]*y[32]*y[37]*y[38]*y[44]*y[46]*y[47]-x0*x1*x2*y[1]*y[5]*y[\
10]*y[21]*y[23]*y[32]*y[37]*y[38]*y[44]*y[46]*y[47]+x1*y[1]*y[2]*y[27]*y[32\
]*y[37]*y[38]*y[48]*y[49]*y[50]))/(lambda*(x0*x1*x2*y[1]*y[2]+x0*x1*x2*y[1]\
*y[3]+x1*y[1]*y[3]*y[4]-x0*x1*x2*y[1]*y[5]+y[6]+y[7]+y[8]+y[25]+y[26]+x1*y[\
1]*y[2]*y[27]+y[28]+y[29]+y[30]+y[39]+y[40]+y[41]+y[42]+lambda*lambda*(-(y[\
1]*y[3]*y[4]*y[11]*y[22]*y[24])-x1*y[1]*y[3]*y[4]*y[11]*y[22]*y[24]-x0*x1*y\
[1]*y[2]*y[10]*y[21]*y[23]*y[32]*y[37]*y[38]-x0*x1*x2*y[1]*y[2]*y[10]*y[21]\
*y[23]*y[32]*y[37]*y[38]-x0*x1*y[1]*y[3]*y[10]*y[21]*y[23]*y[32]*y[37]*y[38\
]-x0*x1*x2*y[1]*y[3]*y[10]*y[21]*y[23]*y[32]*y[37]*y[38]-2.*x1*y[1]*y[3]*y[\
4]*y[10]*y[21]*y[23]*y[32]*y[37]*y[38]+x0*x1*y[1]*y[5]*y[10]*y[21]*y[23]*y[\
32]*y[37]*y[38]+x0*x1*x2*y[1]*y[5]*y[10]*y[21]*y[23]*y[32]*y[37]*y[38]-x0*x\
2*y[1]*y[2]*y[10]*y[21]*y[23]*y[44]*y[46]*y[47]-x0*x1*x2*y[1]*y[2]*y[10]*y[\
21]*y[23]*y[44]*y[46]*y[47]-x0*x1*x2*y[1]*y[3]*y[10]*y[21]*y[23]*y[44]*y[46\
]*y[47]+x0*x1*x2*y[1]*y[5]*y[10]*y[21]*y[23]*y[44]*y[46]*y[47]-2.*x1*x2*y[1\
]*y[2]*y[32]*y[37]*y[38]*y[44]*y[46]*y[47]-x0*x1*x2*y[1]*y[2]*y[32]*y[37]*y\
[38]*y[44]*y[46]*y[47]-x0*x1*x2*y[1]*y[3]*y[32]*y[37]*y[38]*y[44]*y[46]*y[4\
7]+x0*x1*x2*y[1]*y[5]*y[32]*y[37]*y[38]*y[44]*y[46]*y[47]-2.*x1*y[1]*y[2]*y\
[27]*y[32]*y[37]*y[38]*y[44]*y[46]*y[47]-x1*y[1]*y[2]*y[27]*y[48]*y[49]*y[5\
0])));
return (FOUT);
}
double Pt4t1(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[5];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=em[1];
y[4]=esx[0];
FOUT=(1.-x0)*x0*(y[1]*y[2]+x1*y[1]*y[2]+x2*y[1]*y[2]+x1*x2*y[1]*y[2]+y[1]*y[\
3]+2.*x0*y[1]*y[3]+x1*y[1]*y[3]+2.*x0*x1*y[1]*y[3]+x1*x2*y[1]*y[3]-y[1]*y[4\
]-x1*y[1]*y[4]-x1*x2*y[1]*y[4]);
return (FOUT);
}
double Pt4t2(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[5];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=em[1];
y[4]=esx[0];
FOUT=(1.-x1)*x1*(y[1]*y[2]+x0*y[1]*y[2]+2.*x2*y[1]*y[2]+x0*x2*y[1]*y[2]+x2*x\
2*y[1]*y[2]+x0*y[1]*y[3]+x0*x2*y[1]*y[3]+x0*x0*y[1]*y[3]-x0*y[1]*y[4]-x0*x2\
*y[1]*y[4]);
return (FOUT);
}
double Pt4t3(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[3];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
FOUT=(1.-x2)*x2*(x0*x1*em[1]*y[1]-x0*x1*esx[0]*y[1]+y[1]*y[2]+x0*y[1]*y[2]+2\
.*x1*y[1]*y[2]+x0*x1*y[1]*y[2]+2.*x1*x2*y[1]*y[2]);
return (FOUT);
}
