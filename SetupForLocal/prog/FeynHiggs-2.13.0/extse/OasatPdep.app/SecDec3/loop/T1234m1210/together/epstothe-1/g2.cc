#include "intfile.hh"

double Pr2(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[46];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=em[1];
y[4]=esx[0];
y[5]=-x0;
y[6]=1.+y[5];
y[7]=x1*x1;
y[8]=x1*y[1]*y[2];
y[9]=y[1]*y[2]*y[7];
y[10]=x2*y[1]*y[2];
y[11]=2.*x0*x2*y[1]*y[2];
y[12]=2.*x1*x2*y[1]*y[2];
y[13]=2.*x0*x1*x2*y[1]*y[2];
y[14]=x2*x2;
y[15]=2.*x0*y[1]*y[2]*y[14];
y[16]=y[1]*y[3];
y[17]=x1*y[1]*y[3];
y[18]=x2*y[1]*y[3];
y[19]=-(x1*y[1]*y[4]);
y[20]=-(x2*y[1]*y[4]);
y[21]=y[8]+y[9]+y[10]+y[11]+y[12]+y[13]+y[15]+y[16]+y[17]+y[18]+y[19]+y[20];
y[22]=lrs[0];
y[23]=x0*x0;
y[24]=-x1;
y[25]=1.+y[24];
y[26]=y[1]*y[2];
y[27]=x0*y[1]*y[2];
y[28]=2.*x1*y[1]*y[2];
y[29]=2.*x0*x1*y[1]*y[2];
y[30]=x2*y[1]*y[2]*y[23];
y[31]=x0*y[1]*y[3];
y[32]=-(y[1]*y[4]);
y[33]=-(x0*y[1]*y[4]);
y[34]=y[11]+y[16]+y[26]+y[27]+y[28]+y[29]+y[30]+y[31]+y[32]+y[33];
y[35]=lrs[1];
y[36]=-x2;
y[37]=1.+y[36];
y[38]=y[1]*y[2]*y[23];
y[39]=x1*y[1]*y[2]*y[23];
y[40]=2.*x2*y[1]*y[2]*y[23];
y[41]=y[27]+y[29]+y[31]+y[33]+y[38]+y[39]+y[40];
y[42]=lrs[2];
y[43]=pow(y[6],2);
y[44]=pow(y[21],2);
y[45]=pow(y[22],2);
FOUT=(x0*pow(y[25],2)*pow(y[34],2)*pow(y[35],2)*y[1]*y[2]*y[6]*y[7]*y[21]*y[\
22]+2.*pow(y[37],2)*pow(y[41],2)*pow(y[42],2)*y[1]*y[2]*y[6]*y[14]*y[21]*y[\
22]*y[23]+2.*x0*x1*x2*y[1]*y[2]*y[6]*y[21]*y[22]*y[25]*y[34]*y[35]*y[37]*y[\
41]*y[42]+2.*x1*x2*y[1]*y[2]*y[6]*y[21]*y[22]*y[23]*y[25]*y[34]*y[35]*y[37]\
*y[41]*y[42]+x1*x2*y[1]*y[2]*y[23]*y[25]*y[34]*y[35]*y[43]*y[44]*y[45]+x2*y\
[1]*y[2]*y[23]*y[37]*y[41]*y[42]*y[43]*y[44]*y[45]+x1*x2*y[1]*y[2]*y[23]*y[\
37]*y[41]*y[42]*y[43]*y[44]*y[45]+2.*y[1]*y[2]*y[14]*y[23]*y[37]*y[41]*y[42\
]*y[43]*y[44]*y[45])/(-(x0*x1*y[1]*y[2]*y[6]*y[21]*y[22])-x0*x2*y[1]*y[2]*y\
[6]*y[21]*y[22]-2.*x0*x1*x2*y[1]*y[2]*y[6]*y[21]*y[22]-x0*y[1]*y[3]*y[6]*y[\
21]*y[22]-x0*x1*y[1]*y[3]*y[6]*y[21]*y[22]-x0*x2*y[1]*y[3]*y[6]*y[21]*y[22]\
+x0*x1*y[1]*y[4]*y[6]*y[21]*y[22]+x0*x2*y[1]*y[4]*y[6]*y[21]*y[22]-x0*y[1]*\
y[2]*y[6]*y[7]*y[21]*y[22]-2.*x2*y[1]*y[2]*y[6]*y[21]*y[22]*y[23]-2.*x1*x2*\
y[1]*y[2]*y[6]*y[21]*y[22]*y[23]-2.*y[1]*y[2]*y[6]*y[14]*y[21]*y[22]*y[23]-\
x1*y[1]*y[2]*y[25]*y[34]*y[35]-x0*x1*y[1]*y[2]*y[25]*y[34]*y[35]-2.*x0*x1*x\
2*y[1]*y[2]*y[25]*y[34]*y[35]-x1*y[1]*y[3]*y[25]*y[34]*y[35]-x0*x1*y[1]*y[3\
]*y[25]*y[34]*y[35]+x1*y[1]*y[4]*y[25]*y[34]*y[35]+x0*x1*y[1]*y[4]*y[25]*y[\
34]*y[35]-2.*y[1]*y[2]*y[7]*y[25]*y[34]*y[35]-2.*x0*y[1]*y[2]*y[7]*y[25]*y[\
34]*y[35]-x1*x2*y[1]*y[2]*y[23]*y[25]*y[34]*y[35]-x0*x2*y[1]*y[2]*y[37]*y[4\
1]*y[42]-2.*x0*x1*x2*y[1]*y[2]*y[37]*y[41]*y[42]-x0*x2*y[1]*y[3]*y[37]*y[41\
]*y[42]+x0*x2*y[1]*y[4]*y[37]*y[41]*y[42]-x2*y[1]*y[2]*y[23]*y[37]*y[41]*y[\
42]-x1*x2*y[1]*y[2]*y[23]*y[37]*y[41]*y[42]-2.*y[1]*y[2]*y[14]*y[23]*y[37]*\
y[41]*y[42]);
return (FOUT);
}
double Pm2(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[52];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=em[1];
y[4]=esx[0];
y[5]=-x0;
y[6]=1.+y[5];
y[7]=x1*x1;
y[8]=x1*y[1]*y[2];
y[9]=y[1]*y[2]*y[7];
y[10]=x2*y[1]*y[2];
y[11]=2.*x0*x2*y[1]*y[2];
y[12]=2.*x1*x2*y[1]*y[2];
y[13]=2.*x0*x1*x2*y[1]*y[2];
y[14]=x2*x2;
y[15]=2.*x0*y[1]*y[2]*y[14];
y[16]=y[1]*y[3];
y[17]=x1*y[1]*y[3];
y[18]=x2*y[1]*y[3];
y[19]=-(x1*y[1]*y[4]);
y[20]=-(x2*y[1]*y[4]);
y[21]=y[8]+y[9]+y[10]+y[11]+y[12]+y[13]+y[15]+y[16]+y[17]+y[18]+y[19]+y[20];
y[22]=lrs[0];
y[23]=x0*x0;
y[24]=-x1;
y[25]=1.+y[24];
y[26]=y[1]*y[2];
y[27]=x0*y[1]*y[2];
y[28]=2.*x1*y[1]*y[2];
y[29]=2.*x0*x1*y[1]*y[2];
y[30]=x2*y[1]*y[2]*y[23];
y[31]=x0*y[1]*y[3];
y[32]=-(y[1]*y[4]);
y[33]=-(x0*y[1]*y[4]);
y[34]=y[11]+y[16]+y[26]+y[27]+y[28]+y[29]+y[30]+y[31]+y[32]+y[33];
y[35]=lrs[1];
y[36]=-x2;
y[37]=1.+y[36];
y[38]=y[1]*y[2]*y[23];
y[39]=x1*y[1]*y[2]*y[23];
y[40]=2.*x2*y[1]*y[2]*y[23];
y[41]=y[27]+y[29]+y[31]+y[33]+y[38]+y[39]+y[40];
y[42]=lrs[2];
y[43]=pow(y[6],2);
y[44]=pow(y[21],2);
y[45]=pow(y[22],2);
y[46]=pow(y[25],2);
y[47]=pow(y[34],2);
y[48]=pow(y[35],2);
y[49]=pow(y[37],2);
y[50]=pow(y[41],2);
y[51]=pow(y[42],2);
FOUT=pow(lambda*(-(x0*x1*y[1]*y[2]*y[6]*y[21]*y[22])-x0*x2*y[1]*y[2]*y[6]*y[\
21]*y[22]-2.*x0*x1*x2*y[1]*y[2]*y[6]*y[21]*y[22]-x0*y[1]*y[3]*y[6]*y[21]*y[\
22]-x0*x1*y[1]*y[3]*y[6]*y[21]*y[22]-x0*x2*y[1]*y[3]*y[6]*y[21]*y[22]+x0*x1\
*y[1]*y[4]*y[6]*y[21]*y[22]+x0*x2*y[1]*y[4]*y[6]*y[21]*y[22]-x0*y[1]*y[2]*y\
[6]*y[7]*y[21]*y[22]-2.*x2*y[1]*y[2]*y[6]*y[21]*y[22]*y[23]-2.*x1*x2*y[1]*y\
[2]*y[6]*y[21]*y[22]*y[23]-2.*y[1]*y[2]*y[6]*y[14]*y[21]*y[22]*y[23]-x1*y[1\
]*y[2]*y[25]*y[34]*y[35]-x0*x1*y[1]*y[2]*y[25]*y[34]*y[35]-2.*x0*x1*x2*y[1]\
*y[2]*y[25]*y[34]*y[35]-x1*y[1]*y[3]*y[25]*y[34]*y[35]-x0*x1*y[1]*y[3]*y[25\
]*y[34]*y[35]+x1*y[1]*y[4]*y[25]*y[34]*y[35]+x0*x1*y[1]*y[4]*y[25]*y[34]*y[\
35]-2.*y[1]*y[2]*y[7]*y[25]*y[34]*y[35]-2.*x0*y[1]*y[2]*y[7]*y[25]*y[34]*y[\
35]-x1*x2*y[1]*y[2]*y[23]*y[25]*y[34]*y[35]-x0*x2*y[1]*y[2]*y[37]*y[41]*y[4\
2]-2.*x0*x1*x2*y[1]*y[2]*y[37]*y[41]*y[42]-x0*x2*y[1]*y[3]*y[37]*y[41]*y[42\
]+x0*x2*y[1]*y[4]*y[37]*y[41]*y[42]-x2*y[1]*y[2]*y[23]*y[37]*y[41]*y[42]-x1\
*x2*y[1]*y[2]*y[23]*y[37]*y[41]*y[42]-2.*y[1]*y[2]*y[14]*y[23]*y[37]*y[41]*\
y[42])+pow(lambda,3)*(2.*x0*x1*x2*y[1]*y[2]*y[6]*y[21]*y[22]*y[25]*y[34]*y[\
35]*y[37]*y[41]*y[42]+2.*x1*x2*y[1]*y[2]*y[6]*y[21]*y[22]*y[23]*y[25]*y[34]\
*y[35]*y[37]*y[41]*y[42]+x1*x2*y[1]*y[2]*y[23]*y[25]*y[34]*y[35]*y[43]*y[44\
]*y[45]+x2*y[1]*y[2]*y[23]*y[37]*y[41]*y[42]*y[43]*y[44]*y[45]+x1*x2*y[1]*y\
[2]*y[23]*y[37]*y[41]*y[42]*y[43]*y[44]*y[45]+2.*y[1]*y[2]*y[14]*y[23]*y[37\
]*y[41]*y[42]*y[43]*y[44]*y[45]+x0*y[1]*y[2]*y[6]*y[7]*y[21]*y[22]*y[46]*y[\
47]*y[48]+2.*y[1]*y[2]*y[6]*y[14]*y[21]*y[22]*y[23]*y[49]*y[50]*y[51]),2)+p\
ow(x0*x1*y[1]*y[2]+x0*x2*y[1]*y[2]+x0*x1*y[1]*y[3]+x0*x2*y[1]*y[3]-x0*x1*y[\
1]*y[4]-x0*x2*y[1]*y[4]+x0*y[1]*y[2]*y[7]+y[8]+y[9]+y[13]+y[16]+y[17]+y[19]\
+x1*x2*y[1]*y[2]*y[23]+y[1]*y[2]*y[14]*y[23]+y[30]+y[31]+lambda*lambda*(-(x\
0*x1*y[1]*y[2]*y[6]*y[21]*y[22]*y[25]*y[34]*y[35])-2.*x0*x1*x2*y[1]*y[2]*y[\
6]*y[21]*y[22]*y[25]*y[34]*y[35]-x0*x1*y[1]*y[3]*y[6]*y[21]*y[22]*y[25]*y[3\
4]*y[35]+x0*x1*y[1]*y[4]*y[6]*y[21]*y[22]*y[25]*y[34]*y[35]-2.*x0*y[1]*y[2]\
*y[6]*y[7]*y[21]*y[22]*y[25]*y[34]*y[35]-2.*x1*x2*y[1]*y[2]*y[6]*y[21]*y[22\
]*y[23]*y[25]*y[34]*y[35]-x0*x2*y[1]*y[2]*y[6]*y[21]*y[22]*y[37]*y[41]*y[42\
]-2.*x0*x1*x2*y[1]*y[2]*y[6]*y[21]*y[22]*y[37]*y[41]*y[42]-x0*x2*y[1]*y[3]*\
y[6]*y[21]*y[22]*y[37]*y[41]*y[42]+x0*x2*y[1]*y[4]*y[6]*y[21]*y[22]*y[37]*y\
[41]*y[42]-2.*x2*y[1]*y[2]*y[6]*y[21]*y[22]*y[23]*y[37]*y[41]*y[42]-2.*x1*x\
2*y[1]*y[2]*y[6]*y[21]*y[22]*y[23]*y[37]*y[41]*y[42]-4.*y[1]*y[2]*y[6]*y[14\
]*y[21]*y[22]*y[23]*y[37]*y[41]*y[42]-2.*x0*x1*x2*y[1]*y[2]*y[25]*y[34]*y[3\
5]*y[37]*y[41]*y[42]-x1*x2*y[1]*y[2]*y[23]*y[25]*y[34]*y[35]*y[37]*y[41]*y[\
42]-x2*y[1]*y[2]*y[23]*y[43]*y[44]*y[45]-x1*x2*y[1]*y[2]*y[23]*y[43]*y[44]*\
y[45]-y[1]*y[2]*y[14]*y[23]*y[43]*y[44]*y[45]-y[1]*y[2]*y[7]*y[46]*y[47]*y[\
48]-x0*y[1]*y[2]*y[7]*y[46]*y[47]*y[48]-y[1]*y[2]*y[14]*y[23]*y[49]*y[50]*y\
[51])+pow(lambda,4)*(x1*x2*y[1]*y[2]*y[23]*y[25]*y[34]*y[35]*y[37]*y[41]*y[\
42]*y[43]*y[44]*y[45]+y[1]*y[2]*y[14]*y[23]*y[43]*y[44]*y[45]*y[49]*y[50]*y\
[51]),2);
return (FOUT);
}
double Ps2(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[46];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=em[1];
y[4]=esx[0];
y[5]=-x0;
y[6]=1.+y[5];
y[7]=x1*x1;
y[8]=x1*y[1]*y[2];
y[9]=y[1]*y[2]*y[7];
y[10]=x2*y[1]*y[2];
y[11]=2.*x0*x2*y[1]*y[2];
y[12]=2.*x1*x2*y[1]*y[2];
y[13]=2.*x0*x1*x2*y[1]*y[2];
y[14]=x2*x2;
y[15]=2.*x0*y[1]*y[2]*y[14];
y[16]=y[1]*y[3];
y[17]=x1*y[1]*y[3];
y[18]=x2*y[1]*y[3];
y[19]=-(x1*y[1]*y[4]);
y[20]=-(x2*y[1]*y[4]);
y[21]=y[8]+y[9]+y[10]+y[11]+y[12]+y[13]+y[15]+y[16]+y[17]+y[18]+y[19]+y[20];
y[22]=lrs[0];
y[23]=x0*x0;
y[24]=-x1;
y[25]=1.+y[24];
y[26]=y[1]*y[2];
y[27]=x0*y[1]*y[2];
y[28]=2.*x1*y[1]*y[2];
y[29]=2.*x0*x1*y[1]*y[2];
y[30]=x2*y[1]*y[2]*y[23];
y[31]=x0*y[1]*y[3];
y[32]=-(y[1]*y[4]);
y[33]=-(x0*y[1]*y[4]);
y[34]=y[11]+y[16]+y[26]+y[27]+y[28]+y[29]+y[30]+y[31]+y[32]+y[33];
y[35]=lrs[1];
y[36]=-x2;
y[37]=1.+y[36];
y[38]=y[1]*y[2]*y[23];
y[39]=x1*y[1]*y[2]*y[23];
y[40]=2.*x2*y[1]*y[2]*y[23];
y[41]=y[27]+y[29]+y[31]+y[33]+y[38]+y[39]+y[40];
y[42]=lrs[2];
y[43]=pow(y[6],2);
y[44]=pow(y[21],2);
y[45]=pow(y[22],2);
FOUT=lambda*(-(x0*x1*y[1]*y[2]*y[6]*y[21]*y[22])-x0*x2*y[1]*y[2]*y[6]*y[21]*\
y[22]-2.*x0*x1*x2*y[1]*y[2]*y[6]*y[21]*y[22]-x0*y[1]*y[3]*y[6]*y[21]*y[22]-\
x0*x1*y[1]*y[3]*y[6]*y[21]*y[22]-x0*x2*y[1]*y[3]*y[6]*y[21]*y[22]+x0*x1*y[1\
]*y[4]*y[6]*y[21]*y[22]+x0*x2*y[1]*y[4]*y[6]*y[21]*y[22]-x0*y[1]*y[2]*y[6]*\
y[7]*y[21]*y[22]-2.*x2*y[1]*y[2]*y[6]*y[21]*y[22]*y[23]-2.*x1*x2*y[1]*y[2]*\
y[6]*y[21]*y[22]*y[23]-2.*y[1]*y[2]*y[6]*y[14]*y[21]*y[22]*y[23]-x1*y[1]*y[\
2]*y[25]*y[34]*y[35]-x0*x1*y[1]*y[2]*y[25]*y[34]*y[35]-2.*x0*x1*x2*y[1]*y[2\
]*y[25]*y[34]*y[35]-x1*y[1]*y[3]*y[25]*y[34]*y[35]-x0*x1*y[1]*y[3]*y[25]*y[\
34]*y[35]+x1*y[1]*y[4]*y[25]*y[34]*y[35]+x0*x1*y[1]*y[4]*y[25]*y[34]*y[35]-\
2.*y[1]*y[2]*y[7]*y[25]*y[34]*y[35]-2.*x0*y[1]*y[2]*y[7]*y[25]*y[34]*y[35]-\
x1*x2*y[1]*y[2]*y[23]*y[25]*y[34]*y[35]-x0*x2*y[1]*y[2]*y[37]*y[41]*y[42]-2\
.*x0*x1*x2*y[1]*y[2]*y[37]*y[41]*y[42]-x0*x2*y[1]*y[3]*y[37]*y[41]*y[42]+x0\
*x2*y[1]*y[4]*y[37]*y[41]*y[42]-x2*y[1]*y[2]*y[23]*y[37]*y[41]*y[42]-x1*x2*\
y[1]*y[2]*y[23]*y[37]*y[41]*y[42]-2.*y[1]*y[2]*y[14]*y[23]*y[37]*y[41]*y[42\
])+pow(lambda,3)*(x0*pow(y[25],2)*pow(y[34],2)*pow(y[35],2)*y[1]*y[2]*y[6]*\
y[7]*y[21]*y[22]+2.*pow(y[37],2)*pow(y[41],2)*pow(y[42],2)*y[1]*y[2]*y[6]*y\
[14]*y[21]*y[22]*y[23]+2.*x0*x1*x2*y[1]*y[2]*y[6]*y[21]*y[22]*y[25]*y[34]*y\
[35]*y[37]*y[41]*y[42]+2.*x1*x2*y[1]*y[2]*y[6]*y[21]*y[22]*y[23]*y[25]*y[34\
]*y[35]*y[37]*y[41]*y[42]+x1*x2*y[1]*y[2]*y[23]*y[25]*y[34]*y[35]*y[43]*y[4\
4]*y[45]+x2*y[1]*y[2]*y[23]*y[37]*y[41]*y[42]*y[43]*y[44]*y[45]+x1*x2*y[1]*\
y[2]*y[23]*y[37]*y[41]*y[42]*y[43]*y[44]*y[45]+2.*y[1]*y[2]*y[14]*y[23]*y[3\
7]*y[41]*y[42]*y[43]*y[44]*y[45]);
return (FOUT);
}
double Pa2(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[52];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=em[1];
y[4]=esx[0];
y[5]=-x0;
y[6]=1.+y[5];
y[7]=x1*x1;
y[8]=x1*y[1]*y[2];
y[9]=y[1]*y[2]*y[7];
y[10]=x2*y[1]*y[2];
y[11]=2.*x0*x2*y[1]*y[2];
y[12]=2.*x1*x2*y[1]*y[2];
y[13]=2.*x0*x1*x2*y[1]*y[2];
y[14]=x2*x2;
y[15]=2.*x0*y[1]*y[2]*y[14];
y[16]=y[1]*y[3];
y[17]=x1*y[1]*y[3];
y[18]=x2*y[1]*y[3];
y[19]=-(x1*y[1]*y[4]);
y[20]=-(x2*y[1]*y[4]);
y[21]=y[8]+y[9]+y[10]+y[11]+y[12]+y[13]+y[15]+y[16]+y[17]+y[18]+y[19]+y[20];
y[22]=lrs[0];
y[23]=x0*x0;
y[24]=-x1;
y[25]=1.+y[24];
y[26]=y[1]*y[2];
y[27]=x0*y[1]*y[2];
y[28]=2.*x1*y[1]*y[2];
y[29]=2.*x0*x1*y[1]*y[2];
y[30]=x2*y[1]*y[2]*y[23];
y[31]=x0*y[1]*y[3];
y[32]=-(y[1]*y[4]);
y[33]=-(x0*y[1]*y[4]);
y[34]=y[11]+y[16]+y[26]+y[27]+y[28]+y[29]+y[30]+y[31]+y[32]+y[33];
y[35]=lrs[1];
y[36]=-x2;
y[37]=1.+y[36];
y[38]=y[1]*y[2]*y[23];
y[39]=x1*y[1]*y[2]*y[23];
y[40]=2.*x2*y[1]*y[2]*y[23];
y[41]=y[27]+y[29]+y[31]+y[33]+y[38]+y[39]+y[40];
y[42]=lrs[2];
y[43]=pow(y[6],2);
y[44]=pow(y[21],2);
y[45]=pow(y[22],2);
y[46]=pow(y[25],2);
y[47]=pow(y[34],2);
y[48]=pow(y[35],2);
y[49]=pow(y[37],2);
y[50]=pow(y[41],2);
y[51]=pow(y[42],2);
FOUT=(lambda*(-(x0*x1*y[1]*y[2]*y[6]*y[21]*y[22])-x0*x2*y[1]*y[2]*y[6]*y[21]\
*y[22]-2.*x0*x1*x2*y[1]*y[2]*y[6]*y[21]*y[22]-x0*y[1]*y[3]*y[6]*y[21]*y[22]\
-x0*x1*y[1]*y[3]*y[6]*y[21]*y[22]-x0*x2*y[1]*y[3]*y[6]*y[21]*y[22]+x0*x1*y[\
1]*y[4]*y[6]*y[21]*y[22]+x0*x2*y[1]*y[4]*y[6]*y[21]*y[22]-x0*y[1]*y[2]*y[6]\
*y[7]*y[21]*y[22]-2.*x2*y[1]*y[2]*y[6]*y[21]*y[22]*y[23]-2.*x1*x2*y[1]*y[2]\
*y[6]*y[21]*y[22]*y[23]-2.*y[1]*y[2]*y[6]*y[14]*y[21]*y[22]*y[23]-x1*y[1]*y\
[2]*y[25]*y[34]*y[35]-x0*x1*y[1]*y[2]*y[25]*y[34]*y[35]-2.*x0*x1*x2*y[1]*y[\
2]*y[25]*y[34]*y[35]-x1*y[1]*y[3]*y[25]*y[34]*y[35]-x0*x1*y[1]*y[3]*y[25]*y\
[34]*y[35]+x1*y[1]*y[4]*y[25]*y[34]*y[35]+x0*x1*y[1]*y[4]*y[25]*y[34]*y[35]\
-2.*y[1]*y[2]*y[7]*y[25]*y[34]*y[35]-2.*x0*y[1]*y[2]*y[7]*y[25]*y[34]*y[35]\
-x1*x2*y[1]*y[2]*y[23]*y[25]*y[34]*y[35]-x0*x2*y[1]*y[2]*y[37]*y[41]*y[42]-\
2.*x0*x1*x2*y[1]*y[2]*y[37]*y[41]*y[42]-x0*x2*y[1]*y[3]*y[37]*y[41]*y[42]+x\
0*x2*y[1]*y[4]*y[37]*y[41]*y[42]-x2*y[1]*y[2]*y[23]*y[37]*y[41]*y[42]-x1*x2\
*y[1]*y[2]*y[23]*y[37]*y[41]*y[42]-2.*y[1]*y[2]*y[14]*y[23]*y[37]*y[41]*y[4\
2])+pow(lambda,3)*(2.*x0*x1*x2*y[1]*y[2]*y[6]*y[21]*y[22]*y[25]*y[34]*y[35]\
*y[37]*y[41]*y[42]+2.*x1*x2*y[1]*y[2]*y[6]*y[21]*y[22]*y[23]*y[25]*y[34]*y[\
35]*y[37]*y[41]*y[42]+x1*x2*y[1]*y[2]*y[23]*y[25]*y[34]*y[35]*y[43]*y[44]*y\
[45]+x2*y[1]*y[2]*y[23]*y[37]*y[41]*y[42]*y[43]*y[44]*y[45]+x1*x2*y[1]*y[2]\
*y[23]*y[37]*y[41]*y[42]*y[43]*y[44]*y[45]+2.*y[1]*y[2]*y[14]*y[23]*y[37]*y\
[41]*y[42]*y[43]*y[44]*y[45]+x0*y[1]*y[2]*y[6]*y[7]*y[21]*y[22]*y[46]*y[47]\
*y[48]+2.*y[1]*y[2]*y[6]*y[14]*y[21]*y[22]*y[23]*y[49]*y[50]*y[51]))/(lambd\
a*(x0*x1*y[1]*y[2]+x0*x2*y[1]*y[2]+x0*x1*y[1]*y[3]+x0*x2*y[1]*y[3]-x0*x1*y[\
1]*y[4]-x0*x2*y[1]*y[4]+x0*y[1]*y[2]*y[7]+y[8]+y[9]+y[13]+y[16]+y[17]+y[19]\
+x1*x2*y[1]*y[2]*y[23]+y[1]*y[2]*y[14]*y[23]+y[30]+y[31]+lambda*lambda*(-(x\
0*x1*y[1]*y[2]*y[6]*y[21]*y[22]*y[25]*y[34]*y[35])-2.*x0*x1*x2*y[1]*y[2]*y[\
6]*y[21]*y[22]*y[25]*y[34]*y[35]-x0*x1*y[1]*y[3]*y[6]*y[21]*y[22]*y[25]*y[3\
4]*y[35]+x0*x1*y[1]*y[4]*y[6]*y[21]*y[22]*y[25]*y[34]*y[35]-2.*x0*y[1]*y[2]\
*y[6]*y[7]*y[21]*y[22]*y[25]*y[34]*y[35]-2.*x1*x2*y[1]*y[2]*y[6]*y[21]*y[22\
]*y[23]*y[25]*y[34]*y[35]-x0*x2*y[1]*y[2]*y[6]*y[21]*y[22]*y[37]*y[41]*y[42\
]-2.*x0*x1*x2*y[1]*y[2]*y[6]*y[21]*y[22]*y[37]*y[41]*y[42]-x0*x2*y[1]*y[3]*\
y[6]*y[21]*y[22]*y[37]*y[41]*y[42]+x0*x2*y[1]*y[4]*y[6]*y[21]*y[22]*y[37]*y\
[41]*y[42]-2.*x2*y[1]*y[2]*y[6]*y[21]*y[22]*y[23]*y[37]*y[41]*y[42]-2.*x1*x\
2*y[1]*y[2]*y[6]*y[21]*y[22]*y[23]*y[37]*y[41]*y[42]-4.*y[1]*y[2]*y[6]*y[14\
]*y[21]*y[22]*y[23]*y[37]*y[41]*y[42]-2.*x0*x1*x2*y[1]*y[2]*y[25]*y[34]*y[3\
5]*y[37]*y[41]*y[42]-x1*x2*y[1]*y[2]*y[23]*y[25]*y[34]*y[35]*y[37]*y[41]*y[\
42]-x2*y[1]*y[2]*y[23]*y[43]*y[44]*y[45]-x1*x2*y[1]*y[2]*y[23]*y[43]*y[44]*\
y[45]-y[1]*y[2]*y[14]*y[23]*y[43]*y[44]*y[45]-y[1]*y[2]*y[7]*y[46]*y[47]*y[\
48]-x0*y[1]*y[2]*y[7]*y[46]*y[47]*y[48]-y[1]*y[2]*y[14]*y[23]*y[49]*y[50]*y\
[51])+pow(lambda,4)*(x1*x2*y[1]*y[2]*y[23]*y[25]*y[34]*y[35]*y[37]*y[41]*y[\
42]*y[43]*y[44]*y[45]+y[1]*y[2]*y[14]*y[23]*y[43]*y[44]*y[45]*y[49]*y[50]*y\
[51])));
return (FOUT);
}
double Pt2t1(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[5];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=em[1];
y[4]=esx[0];
FOUT=(1.-x0)*x0*(x1*y[1]*y[2]+x2*y[1]*y[2]+2.*x0*x2*y[1]*y[2]+2.*x1*x2*y[1]*\
y[2]+2.*x0*x1*x2*y[1]*y[2]+x1*x1*y[1]*y[2]+2.*x0*(x2*x2)*y[1]*y[2]+y[1]*y[3\
]+x1*y[1]*y[3]+x2*y[1]*y[3]-x1*y[1]*y[4]-x2*y[1]*y[4]);
return (FOUT);
}
double Pt2t2(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[5];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=em[1];
y[4]=esx[0];
FOUT=(1.-x1)*x1*(y[1]*y[2]+x0*y[1]*y[2]+2.*x1*y[1]*y[2]+2.*x0*x1*y[1]*y[2]+2\
.*x0*x2*y[1]*y[2]+x2*(x0*x0)*y[1]*y[2]+y[1]*y[3]+x0*y[1]*y[3]-y[1]*y[4]-x0*\
y[1]*y[4]);
return (FOUT);
}
double Pt2t3(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[4];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x0*x0;
FOUT=(1.-x2)*x2*(x0*em[1]*y[1]-x0*esx[0]*y[1]+x0*y[1]*y[2]+2.*x0*x1*y[1]*y[2\
]+y[1]*y[2]*y[3]+x1*y[1]*y[2]*y[3]+2.*x2*y[1]*y[2]*y[3]);
return (FOUT);
}
