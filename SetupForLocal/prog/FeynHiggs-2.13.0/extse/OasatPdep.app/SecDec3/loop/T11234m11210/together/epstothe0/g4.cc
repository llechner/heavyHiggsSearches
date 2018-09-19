#include "intfile.hh"

double Pr4(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
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
y[7]=y[1]*y[2];
y[8]=2.*x0*y[1]*y[2];
y[9]=x1*y[1]*y[2];
y[10]=2.*x0*x1*y[1]*y[2];
y[11]=2.*x1*x2*y[1]*y[2];
y[12]=x1*x1;
y[13]=x2*y[1]*y[2]*y[12];
y[14]=y[1]*y[3];
y[15]=x1*y[1]*y[3];
y[16]=-(y[1]*y[4]);
y[17]=-(x1*y[1]*y[4]);
y[18]=y[7]+y[8]+y[9]+y[10]+y[11]+y[13]+y[14]+y[15]+y[16]+y[17];
y[19]=lrs[0];
y[20]=x0*x0;
y[21]=-x1;
y[22]=1.+y[21];
y[23]=x0*y[1]*y[2];
y[24]=y[1]*y[2]*y[20];
y[25]=x2*y[1]*y[2];
y[26]=2.*x0*x2*y[1]*y[2];
y[27]=2.*x0*x1*x2*y[1]*y[2];
y[28]=x2*x2;
y[29]=2.*x1*y[1]*y[2]*y[28];
y[30]=x0*y[1]*y[3];
y[31]=x2*y[1]*y[3];
y[32]=-(x0*y[1]*y[4]);
y[33]=-(x2*y[1]*y[4]);
y[34]=y[11]+y[14]+y[23]+y[24]+y[25]+y[26]+y[27]+y[29]+y[30]+y[31]+y[32]+y[33\
];
y[35]=lrs[1];
y[36]=-x2;
y[37]=1.+y[36];
y[38]=y[1]*y[2]*y[12];
y[39]=x0*y[1]*y[2]*y[12];
y[40]=2.*x2*y[1]*y[2]*y[12];
y[41]=y[9]+y[10]+y[15]+y[17]+y[38]+y[39]+y[40];
y[42]=lrs[2];
y[43]=pow(y[22],2);
y[44]=pow(y[34],2);
y[45]=pow(y[35],2);
FOUT=(x1*pow(y[6],2)*pow(y[18],2)*pow(y[19],2)*y[1]*y[2]*y[20]*y[22]*y[34]*y\
[35]+2.*pow(y[37],2)*pow(y[41],2)*pow(y[42],2)*y[1]*y[2]*y[12]*y[22]*y[28]*\
y[34]*y[35]+2.*x0*x1*x2*y[1]*y[2]*y[6]*y[18]*y[19]*y[22]*y[34]*y[35]*y[37]*\
y[41]*y[42]+2.*x0*x2*y[1]*y[2]*y[6]*y[12]*y[18]*y[19]*y[22]*y[34]*y[35]*y[3\
7]*y[41]*y[42]+x0*x2*y[1]*y[2]*y[6]*y[12]*y[18]*y[19]*y[43]*y[44]*y[45]+x2*\
y[1]*y[2]*y[12]*y[37]*y[41]*y[42]*y[43]*y[44]*y[45]+x0*x2*y[1]*y[2]*y[12]*y\
[37]*y[41]*y[42]*y[43]*y[44]*y[45]+2.*y[1]*y[2]*y[12]*y[28]*y[37]*y[41]*y[4\
2]*y[43]*y[44]*y[45])/(-(x0*y[1]*y[2]*y[6]*y[18]*y[19])-x0*x1*y[1]*y[2]*y[6\
]*y[18]*y[19]-2.*x0*x1*x2*y[1]*y[2]*y[6]*y[18]*y[19]-x0*y[1]*y[3]*y[6]*y[18\
]*y[19]-x0*x1*y[1]*y[3]*y[6]*y[18]*y[19]+x0*y[1]*y[4]*y[6]*y[18]*y[19]+x0*x\
1*y[1]*y[4]*y[6]*y[18]*y[19]-x0*x2*y[1]*y[2]*y[6]*y[12]*y[18]*y[19]-2.*y[1]\
*y[2]*y[6]*y[18]*y[19]*y[20]-2.*x1*y[1]*y[2]*y[6]*y[18]*y[19]*y[20]-x0*x1*y\
[1]*y[2]*y[22]*y[34]*y[35]-x1*x2*y[1]*y[2]*y[22]*y[34]*y[35]-2.*x0*x1*x2*y[\
1]*y[2]*y[22]*y[34]*y[35]-x1*y[1]*y[3]*y[22]*y[34]*y[35]-x0*x1*y[1]*y[3]*y[\
22]*y[34]*y[35]-x1*x2*y[1]*y[3]*y[22]*y[34]*y[35]+x0*x1*y[1]*y[4]*y[22]*y[3\
4]*y[35]+x1*x2*y[1]*y[4]*y[22]*y[34]*y[35]-2.*x2*y[1]*y[2]*y[12]*y[22]*y[34\
]*y[35]-2.*x0*x2*y[1]*y[2]*y[12]*y[22]*y[34]*y[35]-x1*y[1]*y[2]*y[20]*y[22]\
*y[34]*y[35]-2.*y[1]*y[2]*y[12]*y[22]*y[28]*y[34]*y[35]-x1*x2*y[1]*y[2]*y[3\
7]*y[41]*y[42]-2.*x0*x1*x2*y[1]*y[2]*y[37]*y[41]*y[42]-x1*x2*y[1]*y[3]*y[37\
]*y[41]*y[42]+x1*x2*y[1]*y[4]*y[37]*y[41]*y[42]-x2*y[1]*y[2]*y[12]*y[37]*y[\
41]*y[42]-x0*x2*y[1]*y[2]*y[12]*y[37]*y[41]*y[42]-2.*y[1]*y[2]*y[12]*y[28]*\
y[37]*y[41]*y[42]);
return (FOUT);
}
double Pm4(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
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
y[7]=y[1]*y[2];
y[8]=2.*x0*y[1]*y[2];
y[9]=x1*y[1]*y[2];
y[10]=2.*x0*x1*y[1]*y[2];
y[11]=2.*x1*x2*y[1]*y[2];
y[12]=x1*x1;
y[13]=x2*y[1]*y[2]*y[12];
y[14]=y[1]*y[3];
y[15]=x1*y[1]*y[3];
y[16]=-(y[1]*y[4]);
y[17]=-(x1*y[1]*y[4]);
y[18]=y[7]+y[8]+y[9]+y[10]+y[11]+y[13]+y[14]+y[15]+y[16]+y[17];
y[19]=lrs[0];
y[20]=x0*x0;
y[21]=-x1;
y[22]=1.+y[21];
y[23]=x0*y[1]*y[2];
y[24]=y[1]*y[2]*y[20];
y[25]=x2*y[1]*y[2];
y[26]=2.*x0*x2*y[1]*y[2];
y[27]=2.*x0*x1*x2*y[1]*y[2];
y[28]=x2*x2;
y[29]=2.*x1*y[1]*y[2]*y[28];
y[30]=x0*y[1]*y[3];
y[31]=x2*y[1]*y[3];
y[32]=-(x0*y[1]*y[4]);
y[33]=-(x2*y[1]*y[4]);
y[34]=y[11]+y[14]+y[23]+y[24]+y[25]+y[26]+y[27]+y[29]+y[30]+y[31]+y[32]+y[33\
];
y[35]=lrs[1];
y[36]=-x2;
y[37]=1.+y[36];
y[38]=y[1]*y[2]*y[12];
y[39]=x0*y[1]*y[2]*y[12];
y[40]=2.*x2*y[1]*y[2]*y[12];
y[41]=y[9]+y[10]+y[15]+y[17]+y[38]+y[39]+y[40];
y[42]=lrs[2];
y[43]=pow(y[22],2);
y[44]=pow(y[34],2);
y[45]=pow(y[35],2);
y[46]=pow(y[6],2);
y[47]=pow(y[18],2);
y[48]=pow(y[19],2);
y[49]=pow(y[37],2);
y[50]=pow(y[41],2);
y[51]=pow(y[42],2);
FOUT=pow(lambda*(-(x0*y[1]*y[2]*y[6]*y[18]*y[19])-x0*x1*y[1]*y[2]*y[6]*y[18]\
*y[19]-2.*x0*x1*x2*y[1]*y[2]*y[6]*y[18]*y[19]-x0*y[1]*y[3]*y[6]*y[18]*y[19]\
-x0*x1*y[1]*y[3]*y[6]*y[18]*y[19]+x0*y[1]*y[4]*y[6]*y[18]*y[19]+x0*x1*y[1]*\
y[4]*y[6]*y[18]*y[19]-x0*x2*y[1]*y[2]*y[6]*y[12]*y[18]*y[19]-2.*y[1]*y[2]*y\
[6]*y[18]*y[19]*y[20]-2.*x1*y[1]*y[2]*y[6]*y[18]*y[19]*y[20]-x0*x1*y[1]*y[2\
]*y[22]*y[34]*y[35]-x1*x2*y[1]*y[2]*y[22]*y[34]*y[35]-2.*x0*x1*x2*y[1]*y[2]\
*y[22]*y[34]*y[35]-x1*y[1]*y[3]*y[22]*y[34]*y[35]-x0*x1*y[1]*y[3]*y[22]*y[3\
4]*y[35]-x1*x2*y[1]*y[3]*y[22]*y[34]*y[35]+x0*x1*y[1]*y[4]*y[22]*y[34]*y[35\
]+x1*x2*y[1]*y[4]*y[22]*y[34]*y[35]-2.*x2*y[1]*y[2]*y[12]*y[22]*y[34]*y[35]\
-2.*x0*x2*y[1]*y[2]*y[12]*y[22]*y[34]*y[35]-x1*y[1]*y[2]*y[20]*y[22]*y[34]*\
y[35]-2.*y[1]*y[2]*y[12]*y[22]*y[28]*y[34]*y[35]-x1*x2*y[1]*y[2]*y[37]*y[41\
]*y[42]-2.*x0*x1*x2*y[1]*y[2]*y[37]*y[41]*y[42]-x1*x2*y[1]*y[3]*y[37]*y[41]\
*y[42]+x1*x2*y[1]*y[4]*y[37]*y[41]*y[42]-x2*y[1]*y[2]*y[12]*y[37]*y[41]*y[4\
2]-x0*x2*y[1]*y[2]*y[12]*y[37]*y[41]*y[42]-2.*y[1]*y[2]*y[12]*y[28]*y[37]*y\
[41]*y[42])+pow(lambda,3)*(2.*x0*x1*x2*y[1]*y[2]*y[6]*y[18]*y[19]*y[22]*y[3\
4]*y[35]*y[37]*y[41]*y[42]+2.*x0*x2*y[1]*y[2]*y[6]*y[12]*y[18]*y[19]*y[22]*\
y[34]*y[35]*y[37]*y[41]*y[42]+x0*x2*y[1]*y[2]*y[6]*y[12]*y[18]*y[19]*y[43]*\
y[44]*y[45]+x2*y[1]*y[2]*y[12]*y[37]*y[41]*y[42]*y[43]*y[44]*y[45]+x0*x2*y[\
1]*y[2]*y[12]*y[37]*y[41]*y[42]*y[43]*y[44]*y[45]+2.*y[1]*y[2]*y[12]*y[28]*\
y[37]*y[41]*y[42]*y[43]*y[44]*y[45]+x1*y[1]*y[2]*y[20]*y[22]*y[34]*y[35]*y[\
46]*y[47]*y[48]+2.*y[1]*y[2]*y[12]*y[22]*y[28]*y[34]*y[35]*y[49]*y[50]*y[51\
]),2)+pow(x0*x1*y[1]*y[2]+x1*x2*y[1]*y[2]+x0*x1*y[1]*y[3]+x1*x2*y[1]*y[3]-x\
0*x1*y[1]*y[4]-x1*x2*y[1]*y[4]+x0*x2*y[1]*y[2]*y[12]+y[13]+y[14]+y[15]+x1*y\
[1]*y[2]*y[20]+y[23]+y[24]+y[27]+y[1]*y[2]*y[12]*y[28]+y[30]+y[32]+lambda*l\
ambda*(-(x0*x1*y[1]*y[2]*y[6]*y[18]*y[19]*y[22]*y[34]*y[35])-2.*x0*x1*x2*y[\
1]*y[2]*y[6]*y[18]*y[19]*y[22]*y[34]*y[35]-x0*x1*y[1]*y[3]*y[6]*y[18]*y[19]\
*y[22]*y[34]*y[35]+x0*x1*y[1]*y[4]*y[6]*y[18]*y[19]*y[22]*y[34]*y[35]-2.*x0\
*x2*y[1]*y[2]*y[6]*y[12]*y[18]*y[19]*y[22]*y[34]*y[35]-2.*x1*y[1]*y[2]*y[6]\
*y[18]*y[19]*y[20]*y[22]*y[34]*y[35]-2.*x0*x1*x2*y[1]*y[2]*y[6]*y[18]*y[19]\
*y[37]*y[41]*y[42]-x0*x2*y[1]*y[2]*y[6]*y[12]*y[18]*y[19]*y[37]*y[41]*y[42]\
-x1*x2*y[1]*y[2]*y[22]*y[34]*y[35]*y[37]*y[41]*y[42]-2.*x0*x1*x2*y[1]*y[2]*\
y[22]*y[34]*y[35]*y[37]*y[41]*y[42]-x1*x2*y[1]*y[3]*y[22]*y[34]*y[35]*y[37]\
*y[41]*y[42]+x1*x2*y[1]*y[4]*y[22]*y[34]*y[35]*y[37]*y[41]*y[42]-2.*x2*y[1]\
*y[2]*y[12]*y[22]*y[34]*y[35]*y[37]*y[41]*y[42]-2.*x0*x2*y[1]*y[2]*y[12]*y[\
22]*y[34]*y[35]*y[37]*y[41]*y[42]-4.*y[1]*y[2]*y[12]*y[22]*y[28]*y[34]*y[35\
]*y[37]*y[41]*y[42]-x2*y[1]*y[2]*y[12]*y[43]*y[44]*y[45]-x0*x2*y[1]*y[2]*y[\
12]*y[43]*y[44]*y[45]-y[1]*y[2]*y[12]*y[28]*y[43]*y[44]*y[45]-y[1]*y[2]*y[2\
0]*y[46]*y[47]*y[48]-x1*y[1]*y[2]*y[20]*y[46]*y[47]*y[48]-y[1]*y[2]*y[12]*y\
[28]*y[49]*y[50]*y[51])+pow(lambda,4)*(x0*x2*y[1]*y[2]*y[6]*y[12]*y[18]*y[1\
9]*y[37]*y[41]*y[42]*y[43]*y[44]*y[45]+y[1]*y[2]*y[12]*y[28]*y[43]*y[44]*y[\
45]*y[49]*y[50]*y[51]),2);
return (FOUT);
}
double Ps4(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
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
y[7]=y[1]*y[2];
y[8]=2.*x0*y[1]*y[2];
y[9]=x1*y[1]*y[2];
y[10]=2.*x0*x1*y[1]*y[2];
y[11]=2.*x1*x2*y[1]*y[2];
y[12]=x1*x1;
y[13]=x2*y[1]*y[2]*y[12];
y[14]=y[1]*y[3];
y[15]=x1*y[1]*y[3];
y[16]=-(y[1]*y[4]);
y[17]=-(x1*y[1]*y[4]);
y[18]=y[7]+y[8]+y[9]+y[10]+y[11]+y[13]+y[14]+y[15]+y[16]+y[17];
y[19]=lrs[0];
y[20]=x0*x0;
y[21]=-x1;
y[22]=1.+y[21];
y[23]=x0*y[1]*y[2];
y[24]=y[1]*y[2]*y[20];
y[25]=x2*y[1]*y[2];
y[26]=2.*x0*x2*y[1]*y[2];
y[27]=2.*x0*x1*x2*y[1]*y[2];
y[28]=x2*x2;
y[29]=2.*x1*y[1]*y[2]*y[28];
y[30]=x0*y[1]*y[3];
y[31]=x2*y[1]*y[3];
y[32]=-(x0*y[1]*y[4]);
y[33]=-(x2*y[1]*y[4]);
y[34]=y[11]+y[14]+y[23]+y[24]+y[25]+y[26]+y[27]+y[29]+y[30]+y[31]+y[32]+y[33\
];
y[35]=lrs[1];
y[36]=-x2;
y[37]=1.+y[36];
y[38]=y[1]*y[2]*y[12];
y[39]=x0*y[1]*y[2]*y[12];
y[40]=2.*x2*y[1]*y[2]*y[12];
y[41]=y[9]+y[10]+y[15]+y[17]+y[38]+y[39]+y[40];
y[42]=lrs[2];
y[43]=pow(y[22],2);
y[44]=pow(y[34],2);
y[45]=pow(y[35],2);
FOUT=lambda*(-(x0*y[1]*y[2]*y[6]*y[18]*y[19])-x0*x1*y[1]*y[2]*y[6]*y[18]*y[1\
9]-2.*x0*x1*x2*y[1]*y[2]*y[6]*y[18]*y[19]-x0*y[1]*y[3]*y[6]*y[18]*y[19]-x0*\
x1*y[1]*y[3]*y[6]*y[18]*y[19]+x0*y[1]*y[4]*y[6]*y[18]*y[19]+x0*x1*y[1]*y[4]\
*y[6]*y[18]*y[19]-x0*x2*y[1]*y[2]*y[6]*y[12]*y[18]*y[19]-2.*y[1]*y[2]*y[6]*\
y[18]*y[19]*y[20]-2.*x1*y[1]*y[2]*y[6]*y[18]*y[19]*y[20]-x0*x1*y[1]*y[2]*y[\
22]*y[34]*y[35]-x1*x2*y[1]*y[2]*y[22]*y[34]*y[35]-2.*x0*x1*x2*y[1]*y[2]*y[2\
2]*y[34]*y[35]-x1*y[1]*y[3]*y[22]*y[34]*y[35]-x0*x1*y[1]*y[3]*y[22]*y[34]*y\
[35]-x1*x2*y[1]*y[3]*y[22]*y[34]*y[35]+x0*x1*y[1]*y[4]*y[22]*y[34]*y[35]+x1\
*x2*y[1]*y[4]*y[22]*y[34]*y[35]-2.*x2*y[1]*y[2]*y[12]*y[22]*y[34]*y[35]-2.*\
x0*x2*y[1]*y[2]*y[12]*y[22]*y[34]*y[35]-x1*y[1]*y[2]*y[20]*y[22]*y[34]*y[35\
]-2.*y[1]*y[2]*y[12]*y[22]*y[28]*y[34]*y[35]-x1*x2*y[1]*y[2]*y[37]*y[41]*y[\
42]-2.*x0*x1*x2*y[1]*y[2]*y[37]*y[41]*y[42]-x1*x2*y[1]*y[3]*y[37]*y[41]*y[4\
2]+x1*x2*y[1]*y[4]*y[37]*y[41]*y[42]-x2*y[1]*y[2]*y[12]*y[37]*y[41]*y[42]-x\
0*x2*y[1]*y[2]*y[12]*y[37]*y[41]*y[42]-2.*y[1]*y[2]*y[12]*y[28]*y[37]*y[41]\
*y[42])+pow(lambda,3)*(x1*pow(y[6],2)*pow(y[18],2)*pow(y[19],2)*y[1]*y[2]*y\
[20]*y[22]*y[34]*y[35]+2.*pow(y[37],2)*pow(y[41],2)*pow(y[42],2)*y[1]*y[2]*\
y[12]*y[22]*y[28]*y[34]*y[35]+2.*x0*x1*x2*y[1]*y[2]*y[6]*y[18]*y[19]*y[22]*\
y[34]*y[35]*y[37]*y[41]*y[42]+2.*x0*x2*y[1]*y[2]*y[6]*y[12]*y[18]*y[19]*y[2\
2]*y[34]*y[35]*y[37]*y[41]*y[42]+x0*x2*y[1]*y[2]*y[6]*y[12]*y[18]*y[19]*y[4\
3]*y[44]*y[45]+x2*y[1]*y[2]*y[12]*y[37]*y[41]*y[42]*y[43]*y[44]*y[45]+x0*x2\
*y[1]*y[2]*y[12]*y[37]*y[41]*y[42]*y[43]*y[44]*y[45]+2.*y[1]*y[2]*y[12]*y[2\
8]*y[37]*y[41]*y[42]*y[43]*y[44]*y[45]);
return (FOUT);
}
double Pa4(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
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
y[7]=y[1]*y[2];
y[8]=2.*x0*y[1]*y[2];
y[9]=x1*y[1]*y[2];
y[10]=2.*x0*x1*y[1]*y[2];
y[11]=2.*x1*x2*y[1]*y[2];
y[12]=x1*x1;
y[13]=x2*y[1]*y[2]*y[12];
y[14]=y[1]*y[3];
y[15]=x1*y[1]*y[3];
y[16]=-(y[1]*y[4]);
y[17]=-(x1*y[1]*y[4]);
y[18]=y[7]+y[8]+y[9]+y[10]+y[11]+y[13]+y[14]+y[15]+y[16]+y[17];
y[19]=lrs[0];
y[20]=x0*x0;
y[21]=-x1;
y[22]=1.+y[21];
y[23]=x0*y[1]*y[2];
y[24]=y[1]*y[2]*y[20];
y[25]=x2*y[1]*y[2];
y[26]=2.*x0*x2*y[1]*y[2];
y[27]=2.*x0*x1*x2*y[1]*y[2];
y[28]=x2*x2;
y[29]=2.*x1*y[1]*y[2]*y[28];
y[30]=x0*y[1]*y[3];
y[31]=x2*y[1]*y[3];
y[32]=-(x0*y[1]*y[4]);
y[33]=-(x2*y[1]*y[4]);
y[34]=y[11]+y[14]+y[23]+y[24]+y[25]+y[26]+y[27]+y[29]+y[30]+y[31]+y[32]+y[33\
];
y[35]=lrs[1];
y[36]=-x2;
y[37]=1.+y[36];
y[38]=y[1]*y[2]*y[12];
y[39]=x0*y[1]*y[2]*y[12];
y[40]=2.*x2*y[1]*y[2]*y[12];
y[41]=y[9]+y[10]+y[15]+y[17]+y[38]+y[39]+y[40];
y[42]=lrs[2];
y[43]=pow(y[22],2);
y[44]=pow(y[34],2);
y[45]=pow(y[35],2);
y[46]=pow(y[6],2);
y[47]=pow(y[18],2);
y[48]=pow(y[19],2);
y[49]=pow(y[37],2);
y[50]=pow(y[41],2);
y[51]=pow(y[42],2);
FOUT=(lambda*(-(x0*y[1]*y[2]*y[6]*y[18]*y[19])-x0*x1*y[1]*y[2]*y[6]*y[18]*y[\
19]-2.*x0*x1*x2*y[1]*y[2]*y[6]*y[18]*y[19]-x0*y[1]*y[3]*y[6]*y[18]*y[19]-x0\
*x1*y[1]*y[3]*y[6]*y[18]*y[19]+x0*y[1]*y[4]*y[6]*y[18]*y[19]+x0*x1*y[1]*y[4\
]*y[6]*y[18]*y[19]-x0*x2*y[1]*y[2]*y[6]*y[12]*y[18]*y[19]-2.*y[1]*y[2]*y[6]\
*y[18]*y[19]*y[20]-2.*x1*y[1]*y[2]*y[6]*y[18]*y[19]*y[20]-x0*x1*y[1]*y[2]*y\
[22]*y[34]*y[35]-x1*x2*y[1]*y[2]*y[22]*y[34]*y[35]-2.*x0*x1*x2*y[1]*y[2]*y[\
22]*y[34]*y[35]-x1*y[1]*y[3]*y[22]*y[34]*y[35]-x0*x1*y[1]*y[3]*y[22]*y[34]*\
y[35]-x1*x2*y[1]*y[3]*y[22]*y[34]*y[35]+x0*x1*y[1]*y[4]*y[22]*y[34]*y[35]+x\
1*x2*y[1]*y[4]*y[22]*y[34]*y[35]-2.*x2*y[1]*y[2]*y[12]*y[22]*y[34]*y[35]-2.\
*x0*x2*y[1]*y[2]*y[12]*y[22]*y[34]*y[35]-x1*y[1]*y[2]*y[20]*y[22]*y[34]*y[3\
5]-2.*y[1]*y[2]*y[12]*y[22]*y[28]*y[34]*y[35]-x1*x2*y[1]*y[2]*y[37]*y[41]*y\
[42]-2.*x0*x1*x2*y[1]*y[2]*y[37]*y[41]*y[42]-x1*x2*y[1]*y[3]*y[37]*y[41]*y[\
42]+x1*x2*y[1]*y[4]*y[37]*y[41]*y[42]-x2*y[1]*y[2]*y[12]*y[37]*y[41]*y[42]-\
x0*x2*y[1]*y[2]*y[12]*y[37]*y[41]*y[42]-2.*y[1]*y[2]*y[12]*y[28]*y[37]*y[41\
]*y[42])+pow(lambda,3)*(2.*x0*x1*x2*y[1]*y[2]*y[6]*y[18]*y[19]*y[22]*y[34]*\
y[35]*y[37]*y[41]*y[42]+2.*x0*x2*y[1]*y[2]*y[6]*y[12]*y[18]*y[19]*y[22]*y[3\
4]*y[35]*y[37]*y[41]*y[42]+x0*x2*y[1]*y[2]*y[6]*y[12]*y[18]*y[19]*y[43]*y[4\
4]*y[45]+x2*y[1]*y[2]*y[12]*y[37]*y[41]*y[42]*y[43]*y[44]*y[45]+x0*x2*y[1]*\
y[2]*y[12]*y[37]*y[41]*y[42]*y[43]*y[44]*y[45]+2.*y[1]*y[2]*y[12]*y[28]*y[3\
7]*y[41]*y[42]*y[43]*y[44]*y[45]+x1*y[1]*y[2]*y[20]*y[22]*y[34]*y[35]*y[46]\
*y[47]*y[48]+2.*y[1]*y[2]*y[12]*y[22]*y[28]*y[34]*y[35]*y[49]*y[50]*y[51]))\
/(lambda*(x0*x1*y[1]*y[2]+x1*x2*y[1]*y[2]+x0*x1*y[1]*y[3]+x1*x2*y[1]*y[3]-x\
0*x1*y[1]*y[4]-x1*x2*y[1]*y[4]+x0*x2*y[1]*y[2]*y[12]+y[13]+y[14]+y[15]+x1*y\
[1]*y[2]*y[20]+y[23]+y[24]+y[27]+y[1]*y[2]*y[12]*y[28]+y[30]+y[32]+lambda*l\
ambda*(-(x0*x1*y[1]*y[2]*y[6]*y[18]*y[19]*y[22]*y[34]*y[35])-2.*x0*x1*x2*y[\
1]*y[2]*y[6]*y[18]*y[19]*y[22]*y[34]*y[35]-x0*x1*y[1]*y[3]*y[6]*y[18]*y[19]\
*y[22]*y[34]*y[35]+x0*x1*y[1]*y[4]*y[6]*y[18]*y[19]*y[22]*y[34]*y[35]-2.*x0\
*x2*y[1]*y[2]*y[6]*y[12]*y[18]*y[19]*y[22]*y[34]*y[35]-2.*x1*y[1]*y[2]*y[6]\
*y[18]*y[19]*y[20]*y[22]*y[34]*y[35]-2.*x0*x1*x2*y[1]*y[2]*y[6]*y[18]*y[19]\
*y[37]*y[41]*y[42]-x0*x2*y[1]*y[2]*y[6]*y[12]*y[18]*y[19]*y[37]*y[41]*y[42]\
-x1*x2*y[1]*y[2]*y[22]*y[34]*y[35]*y[37]*y[41]*y[42]-2.*x0*x1*x2*y[1]*y[2]*\
y[22]*y[34]*y[35]*y[37]*y[41]*y[42]-x1*x2*y[1]*y[3]*y[22]*y[34]*y[35]*y[37]\
*y[41]*y[42]+x1*x2*y[1]*y[4]*y[22]*y[34]*y[35]*y[37]*y[41]*y[42]-2.*x2*y[1]\
*y[2]*y[12]*y[22]*y[34]*y[35]*y[37]*y[41]*y[42]-2.*x0*x2*y[1]*y[2]*y[12]*y[\
22]*y[34]*y[35]*y[37]*y[41]*y[42]-4.*y[1]*y[2]*y[12]*y[22]*y[28]*y[34]*y[35\
]*y[37]*y[41]*y[42]-x2*y[1]*y[2]*y[12]*y[43]*y[44]*y[45]-x0*x2*y[1]*y[2]*y[\
12]*y[43]*y[44]*y[45]-y[1]*y[2]*y[12]*y[28]*y[43]*y[44]*y[45]-y[1]*y[2]*y[2\
0]*y[46]*y[47]*y[48]-x1*y[1]*y[2]*y[20]*y[46]*y[47]*y[48]-y[1]*y[2]*y[12]*y\
[28]*y[49]*y[50]*y[51])+pow(lambda,4)*(x0*x2*y[1]*y[2]*y[6]*y[12]*y[18]*y[1\
9]*y[37]*y[41]*y[42]*y[43]*y[44]*y[45]+y[1]*y[2]*y[12]*y[28]*y[43]*y[44]*y[\
45]*y[49]*y[50]*y[51])));
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
FOUT=(1.-x0)*x0*(y[1]*y[2]+2.*x0*y[1]*y[2]+x1*y[1]*y[2]+2.*x0*x1*y[1]*y[2]+2\
.*x1*x2*y[1]*y[2]+x2*(x1*x1)*y[1]*y[2]+y[1]*y[3]+x1*y[1]*y[3]-y[1]*y[4]-x1*\
y[1]*y[4]);
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
FOUT=(1.-x1)*x1*(x0*y[1]*y[2]+x2*y[1]*y[2]+2.*x0*x2*y[1]*y[2]+2.*x1*x2*y[1]*\
y[2]+2.*x0*x1*x2*y[1]*y[2]+x0*x0*y[1]*y[2]+2.*x1*(x2*x2)*y[1]*y[2]+y[1]*y[3\
]+x0*y[1]*y[3]+x2*y[1]*y[3]-x0*y[1]*y[4]-x2*y[1]*y[4]);
return (FOUT);
}
double Pt4t3(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[4];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x1*x1;
FOUT=(1.-x2)*x2*(x1*em[1]*y[1]-x1*esx[0]*y[1]+x1*y[1]*y[2]+2.*x0*x1*y[1]*y[2\
]+y[1]*y[2]*y[3]+x0*y[1]*y[2]*y[3]+2.*x2*y[1]*y[2]*y[3]);
return (FOUT);
}
