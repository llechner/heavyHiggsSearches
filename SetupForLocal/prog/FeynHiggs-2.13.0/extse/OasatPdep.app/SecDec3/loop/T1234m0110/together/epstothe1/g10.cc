#include "intfile.hh"

double Pr10(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[46];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x2*x2;
y[4]=esx[0];
y[5]=-x0;
y[6]=1.+y[5];
y[7]=x1*y[1]*y[2];
y[8]=x2*y[1]*y[2];
y[9]=2.*x1*x2*y[1]*y[2];
y[10]=2.*x0*x1*x2*y[1]*y[2];
y[11]=y[1]*y[2]*y[3];
y[12]=2.*x0*x1*y[1]*y[2]*y[3];
y[13]=-(x2*y[1]*y[4]);
y[14]=-(x1*x2*y[1]*y[4]);
y[15]=-2.*x0*x1*x2*y[1]*y[4];
y[16]=y[7]+y[8]+y[9]+y[10]+y[11]+y[12]+y[13]+y[14]+y[15];
y[17]=lrs[0];
y[18]=x0*x0;
y[19]=-x1;
y[20]=1.+y[19];
y[21]=y[1]*y[2];
y[22]=x0*y[1]*y[2];
y[23]=2.*x0*x2*y[1]*y[2];
y[24]=x2*y[1]*y[2]*y[18];
y[25]=y[1]*y[2]*y[3]*y[18];
y[26]=-(x0*x2*y[1]*y[4]);
y[27]=-(x2*y[1]*y[4]*y[18]);
y[28]=y[21]+y[22]+y[23]+y[24]+y[25]+y[26]+y[27];
y[29]=lrs[1];
y[30]=-x2;
y[31]=1.+y[30];
y[32]=2.*x0*x1*y[1]*y[2];
y[33]=x1*y[1]*y[2]*y[18];
y[34]=2.*x1*x2*y[1]*y[2]*y[18];
y[35]=-(x0*y[1]*y[4]);
y[36]=-(x0*x1*y[1]*y[4]);
y[37]=-(x1*y[1]*y[4]*y[18]);
y[38]=y[21]+y[22]+y[23]+y[32]+y[33]+y[34]+y[35]+y[36]+y[37];
y[39]=lrs[2];
y[40]=pow(y[6],2);
y[41]=pow(y[16],2);
y[42]=pow(y[17],2);
y[43]=pow(y[31],2);
y[44]=pow(y[38],2);
y[45]=pow(y[39],2);
FOUT=(2.*x0*x1*x2*y[1]*y[2]*y[6]*y[16]*y[17]*y[20]*y[28]*y[29]*y[31]*y[38]*y\
[39]-x0*x1*x2*y[1]*y[4]*y[6]*y[16]*y[17]*y[20]*y[28]*y[29]*y[31]*y[38]*y[39\
]+2.*x1*x2*y[1]*y[2]*y[6]*y[16]*y[17]*y[18]*y[20]*y[28]*y[29]*y[31]*y[38]*y\
[39]+4.*x1*y[1]*y[2]*y[3]*y[6]*y[16]*y[17]*y[18]*y[20]*y[28]*y[29]*y[31]*y[\
38]*y[39]-2.*x1*x2*y[1]*y[4]*y[6]*y[16]*y[17]*y[18]*y[20]*y[28]*y[29]*y[31]\
*y[38]*y[39]+x1*x2*y[1]*y[2]*y[18]*y[20]*y[28]*y[29]*y[40]*y[41]*y[42]+x1*y\
[1]*y[2]*y[3]*y[18]*y[20]*y[28]*y[29]*y[40]*y[41]*y[42]-x1*x2*y[1]*y[4]*y[1\
8]*y[20]*y[28]*y[29]*y[40]*y[41]*y[42]+x1*x2*y[1]*y[2]*y[18]*y[31]*y[38]*y[\
39]*y[40]*y[41]*y[42]+2.*x1*y[1]*y[2]*y[3]*y[18]*y[31]*y[38]*y[39]*y[40]*y[\
41]*y[42]-x1*x2*y[1]*y[4]*y[18]*y[31]*y[38]*y[39]*y[40]*y[41]*y[42]+x0*y[1]\
*y[2]*y[3]*y[6]*y[16]*y[17]*y[43]*y[44]*y[45]+2.*x1*y[1]*y[2]*y[3]*y[6]*y[1\
6]*y[17]*y[18]*y[43]*y[44]*y[45]+x1*y[1]*y[2]*y[3]*y[18]*y[20]*y[28]*y[29]*\
y[43]*y[44]*y[45])/(-(x0*x1*y[1]*y[2]*y[6]*y[16]*y[17])-x0*x2*y[1]*y[2]*y[6\
]*y[16]*y[17]-2.*x0*x1*x2*y[1]*y[2]*y[6]*y[16]*y[17]-x0*y[1]*y[2]*y[3]*y[6]\
*y[16]*y[17]+x0*x2*y[1]*y[4]*y[6]*y[16]*y[17]+x0*x1*x2*y[1]*y[4]*y[6]*y[16]\
*y[17]-2.*x1*x2*y[1]*y[2]*y[6]*y[16]*y[17]*y[18]-2.*x1*y[1]*y[2]*y[3]*y[6]*\
y[16]*y[17]*y[18]+2.*x1*x2*y[1]*y[4]*y[6]*y[16]*y[17]*y[18]-x1*y[1]*y[2]*y[\
20]*y[28]*y[29]-x0*x1*y[1]*y[2]*y[20]*y[28]*y[29]-2.*x0*x1*x2*y[1]*y[2]*y[2\
0]*y[28]*y[29]+x0*x1*x2*y[1]*y[4]*y[20]*y[28]*y[29]-x1*x2*y[1]*y[2]*y[18]*y\
[20]*y[28]*y[29]-x1*y[1]*y[2]*y[3]*y[18]*y[20]*y[28]*y[29]+x1*x2*y[1]*y[4]*\
y[18]*y[20]*y[28]*y[29]-x2*y[1]*y[2]*y[31]*y[38]*y[39]-x0*x2*y[1]*y[2]*y[31\
]*y[38]*y[39]-2.*x0*x1*x2*y[1]*y[2]*y[31]*y[38]*y[39]-2.*x0*y[1]*y[2]*y[3]*\
y[31]*y[38]*y[39]+x0*x2*y[1]*y[4]*y[31]*y[38]*y[39]+x0*x1*x2*y[1]*y[4]*y[31\
]*y[38]*y[39]-x1*x2*y[1]*y[2]*y[18]*y[31]*y[38]*y[39]-2.*x1*y[1]*y[2]*y[3]*\
y[18]*y[31]*y[38]*y[39]+x1*x2*y[1]*y[4]*y[18]*y[31]*y[38]*y[39]);
return (FOUT);
}
double Pm10(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[46];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x0*x0;
y[4]=esx[0];
y[5]=y[1]*y[2];
y[6]=x0*y[1]*y[2];
y[7]=2.*x0*x2*y[1]*y[2];
y[8]=x2*x2;
y[9]=-x0;
y[10]=1.+y[9];
y[11]=x1*y[1]*y[2];
y[12]=x2*y[1]*y[2];
y[13]=2.*x1*x2*y[1]*y[2];
y[14]=2.*x0*x1*x2*y[1]*y[2];
y[15]=y[1]*y[2]*y[8];
y[16]=2.*x0*x1*y[1]*y[2]*y[8];
y[17]=-(x2*y[1]*y[4]);
y[18]=-(x1*x2*y[1]*y[4]);
y[19]=-2.*x0*x1*x2*y[1]*y[4];
y[20]=y[11]+y[12]+y[13]+y[14]+y[15]+y[16]+y[17]+y[18]+y[19];
y[21]=lrs[0];
y[22]=-x1;
y[23]=1.+y[22];
y[24]=x2*y[1]*y[2]*y[3];
y[25]=y[1]*y[2]*y[3]*y[8];
y[26]=-(x0*x2*y[1]*y[4]);
y[27]=-(x2*y[1]*y[3]*y[4]);
y[28]=y[5]+y[6]+y[7]+y[24]+y[25]+y[26]+y[27];
y[29]=lrs[1];
y[30]=-x2;
y[31]=1.+y[30];
y[32]=2.*x0*x1*y[1]*y[2];
y[33]=x1*y[1]*y[2]*y[3];
y[34]=2.*x1*x2*y[1]*y[2]*y[3];
y[35]=-(x0*y[1]*y[4]);
y[36]=-(x0*x1*y[1]*y[4]);
y[37]=-(x1*y[1]*y[3]*y[4]);
y[38]=y[5]+y[6]+y[7]+y[32]+y[33]+y[34]+y[35]+y[36]+y[37];
y[39]=lrs[2];
y[40]=pow(y[10],2);
y[41]=pow(y[20],2);
y[42]=pow(y[21],2);
y[43]=pow(y[31],2);
y[44]=pow(y[38],2);
y[45]=pow(y[39],2);
FOUT=pow(lambda*(-(x0*x1*y[1]*y[2]*y[10]*y[20]*y[21])-x0*x2*y[1]*y[2]*y[10]*\
y[20]*y[21]-2.*x0*x1*x2*y[1]*y[2]*y[10]*y[20]*y[21]-2.*x1*x2*y[1]*y[2]*y[3]\
*y[10]*y[20]*y[21]+x0*x2*y[1]*y[4]*y[10]*y[20]*y[21]+x0*x1*x2*y[1]*y[4]*y[1\
0]*y[20]*y[21]+2.*x1*x2*y[1]*y[3]*y[4]*y[10]*y[20]*y[21]-x0*y[1]*y[2]*y[8]*\
y[10]*y[20]*y[21]-2.*x1*y[1]*y[2]*y[3]*y[8]*y[10]*y[20]*y[21]-x1*y[1]*y[2]*\
y[23]*y[28]*y[29]-x0*x1*y[1]*y[2]*y[23]*y[28]*y[29]-2.*x0*x1*x2*y[1]*y[2]*y\
[23]*y[28]*y[29]-x1*x2*y[1]*y[2]*y[3]*y[23]*y[28]*y[29]+x0*x1*x2*y[1]*y[4]*\
y[23]*y[28]*y[29]+x1*x2*y[1]*y[3]*y[4]*y[23]*y[28]*y[29]-x1*y[1]*y[2]*y[3]*\
y[8]*y[23]*y[28]*y[29]-x2*y[1]*y[2]*y[31]*y[38]*y[39]-x0*x2*y[1]*y[2]*y[31]\
*y[38]*y[39]-2.*x0*x1*x2*y[1]*y[2]*y[31]*y[38]*y[39]-x1*x2*y[1]*y[2]*y[3]*y\
[31]*y[38]*y[39]+x0*x2*y[1]*y[4]*y[31]*y[38]*y[39]+x0*x1*x2*y[1]*y[4]*y[31]\
*y[38]*y[39]+x1*x2*y[1]*y[3]*y[4]*y[31]*y[38]*y[39]-2.*x0*y[1]*y[2]*y[8]*y[\
31]*y[38]*y[39]-2.*x1*y[1]*y[2]*y[3]*y[8]*y[31]*y[38]*y[39])-x1*pow(lambda,\
5)*y[1]*y[2]*y[3]*y[8]*y[23]*y[28]*y[29]*y[40]*y[41]*y[42]*y[43]*y[44]*y[45\
]+pow(lambda,3)*(2.*x0*x1*x2*y[1]*y[2]*y[10]*y[20]*y[21]*y[23]*y[28]*y[29]*\
y[31]*y[38]*y[39]+2.*x1*x2*y[1]*y[2]*y[3]*y[10]*y[20]*y[21]*y[23]*y[28]*y[2\
9]*y[31]*y[38]*y[39]-x0*x1*x2*y[1]*y[4]*y[10]*y[20]*y[21]*y[23]*y[28]*y[29]\
*y[31]*y[38]*y[39]-2.*x1*x2*y[1]*y[3]*y[4]*y[10]*y[20]*y[21]*y[23]*y[28]*y[\
29]*y[31]*y[38]*y[39]+4.*x1*y[1]*y[2]*y[3]*y[8]*y[10]*y[20]*y[21]*y[23]*y[2\
8]*y[29]*y[31]*y[38]*y[39]+x1*x2*y[1]*y[2]*y[3]*y[23]*y[28]*y[29]*y[40]*y[4\
1]*y[42]-x1*x2*y[1]*y[3]*y[4]*y[23]*y[28]*y[29]*y[40]*y[41]*y[42]+x1*y[1]*y\
[2]*y[3]*y[8]*y[23]*y[28]*y[29]*y[40]*y[41]*y[42]+x1*x2*y[1]*y[2]*y[3]*y[31\
]*y[38]*y[39]*y[40]*y[41]*y[42]-x1*x2*y[1]*y[3]*y[4]*y[31]*y[38]*y[39]*y[40\
]*y[41]*y[42]+2.*x1*y[1]*y[2]*y[3]*y[8]*y[31]*y[38]*y[39]*y[40]*y[41]*y[42]\
+x0*y[1]*y[2]*y[8]*y[10]*y[20]*y[21]*y[43]*y[44]*y[45]+2.*x1*y[1]*y[2]*y[3]\
*y[8]*y[10]*y[20]*y[21]*y[43]*y[44]*y[45]+x1*y[1]*y[2]*y[3]*y[8]*y[23]*y[28\
]*y[29]*y[43]*y[44]*y[45]),2)+pow(x0*x1*y[1]*y[2]+x0*x2*y[1]*y[2]+x1*x2*y[1\
]*y[2]*y[3]-x0*x1*x2*y[1]*y[4]-x1*x2*y[1]*y[3]*y[4]+y[5]+x0*y[1]*y[2]*y[8]+\
x1*y[1]*y[2]*y[3]*y[8]+y[11]+y[12]+y[14]+y[26]+lambda*lambda*(-(x0*x1*y[1]*\
y[2]*y[10]*y[20]*y[21]*y[23]*y[28]*y[29])-2.*x0*x1*x2*y[1]*y[2]*y[10]*y[20]\
*y[21]*y[23]*y[28]*y[29]-2.*x1*x2*y[1]*y[2]*y[3]*y[10]*y[20]*y[21]*y[23]*y[\
28]*y[29]+x0*x1*x2*y[1]*y[4]*y[10]*y[20]*y[21]*y[23]*y[28]*y[29]+2.*x1*x2*y\
[1]*y[3]*y[4]*y[10]*y[20]*y[21]*y[23]*y[28]*y[29]-2.*x1*y[1]*y[2]*y[3]*y[8]\
*y[10]*y[20]*y[21]*y[23]*y[28]*y[29]-x0*x2*y[1]*y[2]*y[10]*y[20]*y[21]*y[31\
]*y[38]*y[39]-2.*x0*x1*x2*y[1]*y[2]*y[10]*y[20]*y[21]*y[31]*y[38]*y[39]-2.*\
x1*x2*y[1]*y[2]*y[3]*y[10]*y[20]*y[21]*y[31]*y[38]*y[39]+x0*x2*y[1]*y[4]*y[\
10]*y[20]*y[21]*y[31]*y[38]*y[39]+x0*x1*x2*y[1]*y[4]*y[10]*y[20]*y[21]*y[31\
]*y[38]*y[39]+2.*x1*x2*y[1]*y[3]*y[4]*y[10]*y[20]*y[21]*y[31]*y[38]*y[39]-2\
.*x0*y[1]*y[2]*y[8]*y[10]*y[20]*y[21]*y[31]*y[38]*y[39]-4.*x1*y[1]*y[2]*y[3\
]*y[8]*y[10]*y[20]*y[21]*y[31]*y[38]*y[39]-2.*x0*x1*x2*y[1]*y[2]*y[23]*y[28\
]*y[29]*y[31]*y[38]*y[39]-x1*x2*y[1]*y[2]*y[3]*y[23]*y[28]*y[29]*y[31]*y[38\
]*y[39]+x0*x1*x2*y[1]*y[4]*y[23]*y[28]*y[29]*y[31]*y[38]*y[39]+x1*x2*y[1]*y\
[3]*y[4]*y[23]*y[28]*y[29]*y[31]*y[38]*y[39]-2.*x1*y[1]*y[2]*y[3]*y[8]*y[23\
]*y[28]*y[29]*y[31]*y[38]*y[39]-x1*x2*y[1]*y[2]*y[3]*y[40]*y[41]*y[42]+x1*x\
2*y[1]*y[3]*y[4]*y[40]*y[41]*y[42]-x1*y[1]*y[2]*y[3]*y[8]*y[40]*y[41]*y[42]\
-x0*y[1]*y[2]*y[8]*y[43]*y[44]*y[45]-x1*y[1]*y[2]*y[3]*y[8]*y[43]*y[44]*y[4\
5])+pow(lambda,4)*(x1*x2*y[1]*y[2]*y[3]*y[23]*y[28]*y[29]*y[31]*y[38]*y[39]\
*y[40]*y[41]*y[42]-x1*x2*y[1]*y[3]*y[4]*y[23]*y[28]*y[29]*y[31]*y[38]*y[39]\
*y[40]*y[41]*y[42]+2.*x1*y[1]*y[2]*y[3]*y[8]*y[23]*y[28]*y[29]*y[31]*y[38]*\
y[39]*y[40]*y[41]*y[42]+2.*x1*y[1]*y[2]*y[3]*y[8]*y[10]*y[20]*y[21]*y[23]*y\
[28]*y[29]*y[43]*y[44]*y[45]+x1*y[1]*y[2]*y[3]*y[8]*y[40]*y[41]*y[42]*y[43]\
*y[44]*y[45]),2);
return (FOUT);
}
double Ps10(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[46];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x0*x0;
y[4]=esx[0];
y[5]=y[1]*y[2];
y[6]=x0*y[1]*y[2];
y[7]=2.*x0*x2*y[1]*y[2];
y[8]=x2*x2;
y[9]=-x0;
y[10]=1.+y[9];
y[11]=x1*y[1]*y[2];
y[12]=x2*y[1]*y[2];
y[13]=2.*x1*x2*y[1]*y[2];
y[14]=2.*x0*x1*x2*y[1]*y[2];
y[15]=y[1]*y[2]*y[8];
y[16]=2.*x0*x1*y[1]*y[2]*y[8];
y[17]=-(x2*y[1]*y[4]);
y[18]=-(x1*x2*y[1]*y[4]);
y[19]=-2.*x0*x1*x2*y[1]*y[4];
y[20]=y[11]+y[12]+y[13]+y[14]+y[15]+y[16]+y[17]+y[18]+y[19];
y[21]=lrs[0];
y[22]=-x1;
y[23]=1.+y[22];
y[24]=x2*y[1]*y[2]*y[3];
y[25]=y[1]*y[2]*y[3]*y[8];
y[26]=-(x0*x2*y[1]*y[4]);
y[27]=-(x2*y[1]*y[3]*y[4]);
y[28]=y[5]+y[6]+y[7]+y[24]+y[25]+y[26]+y[27];
y[29]=lrs[1];
y[30]=-x2;
y[31]=1.+y[30];
y[32]=2.*x0*x1*y[1]*y[2];
y[33]=x1*y[1]*y[2]*y[3];
y[34]=2.*x1*x2*y[1]*y[2]*y[3];
y[35]=-(x0*y[1]*y[4]);
y[36]=-(x0*x1*y[1]*y[4]);
y[37]=-(x1*y[1]*y[3]*y[4]);
y[38]=y[5]+y[6]+y[7]+y[32]+y[33]+y[34]+y[35]+y[36]+y[37];
y[39]=lrs[2];
y[40]=pow(y[10],2);
y[41]=pow(y[20],2);
y[42]=pow(y[21],2);
y[43]=pow(y[31],2);
y[44]=pow(y[38],2);
y[45]=pow(y[39],2);
FOUT=lambda*(-(x0*x1*y[1]*y[2]*y[10]*y[20]*y[21])-x0*x2*y[1]*y[2]*y[10]*y[20\
]*y[21]-2.*x0*x1*x2*y[1]*y[2]*y[10]*y[20]*y[21]-2.*x1*x2*y[1]*y[2]*y[3]*y[1\
0]*y[20]*y[21]+x0*x2*y[1]*y[4]*y[10]*y[20]*y[21]+x0*x1*x2*y[1]*y[4]*y[10]*y\
[20]*y[21]+2.*x1*x2*y[1]*y[3]*y[4]*y[10]*y[20]*y[21]-x0*y[1]*y[2]*y[8]*y[10\
]*y[20]*y[21]-2.*x1*y[1]*y[2]*y[3]*y[8]*y[10]*y[20]*y[21]-x1*y[1]*y[2]*y[23\
]*y[28]*y[29]-x0*x1*y[1]*y[2]*y[23]*y[28]*y[29]-2.*x0*x1*x2*y[1]*y[2]*y[23]\
*y[28]*y[29]-x1*x2*y[1]*y[2]*y[3]*y[23]*y[28]*y[29]+x0*x1*x2*y[1]*y[4]*y[23\
]*y[28]*y[29]+x1*x2*y[1]*y[3]*y[4]*y[23]*y[28]*y[29]-x1*y[1]*y[2]*y[3]*y[8]\
*y[23]*y[28]*y[29]-x2*y[1]*y[2]*y[31]*y[38]*y[39]-x0*x2*y[1]*y[2]*y[31]*y[3\
8]*y[39]-2.*x0*x1*x2*y[1]*y[2]*y[31]*y[38]*y[39]-x1*x2*y[1]*y[2]*y[3]*y[31]\
*y[38]*y[39]+x0*x2*y[1]*y[4]*y[31]*y[38]*y[39]+x0*x1*x2*y[1]*y[4]*y[31]*y[3\
8]*y[39]+x1*x2*y[1]*y[3]*y[4]*y[31]*y[38]*y[39]-2.*x0*y[1]*y[2]*y[8]*y[31]*\
y[38]*y[39]-2.*x1*y[1]*y[2]*y[3]*y[8]*y[31]*y[38]*y[39])-x1*pow(lambda,5)*y\
[1]*y[2]*y[3]*y[8]*y[23]*y[28]*y[29]*y[40]*y[41]*y[42]*y[43]*y[44]*y[45]+po\
w(lambda,3)*(2.*x0*x1*x2*y[1]*y[2]*y[10]*y[20]*y[21]*y[23]*y[28]*y[29]*y[31\
]*y[38]*y[39]+2.*x1*x2*y[1]*y[2]*y[3]*y[10]*y[20]*y[21]*y[23]*y[28]*y[29]*y\
[31]*y[38]*y[39]-x0*x1*x2*y[1]*y[4]*y[10]*y[20]*y[21]*y[23]*y[28]*y[29]*y[3\
1]*y[38]*y[39]-2.*x1*x2*y[1]*y[3]*y[4]*y[10]*y[20]*y[21]*y[23]*y[28]*y[29]*\
y[31]*y[38]*y[39]+4.*x1*y[1]*y[2]*y[3]*y[8]*y[10]*y[20]*y[21]*y[23]*y[28]*y\
[29]*y[31]*y[38]*y[39]+x1*x2*y[1]*y[2]*y[3]*y[23]*y[28]*y[29]*y[40]*y[41]*y\
[42]-x1*x2*y[1]*y[3]*y[4]*y[23]*y[28]*y[29]*y[40]*y[41]*y[42]+x1*y[1]*y[2]*\
y[3]*y[8]*y[23]*y[28]*y[29]*y[40]*y[41]*y[42]+x1*x2*y[1]*y[2]*y[3]*y[31]*y[\
38]*y[39]*y[40]*y[41]*y[42]-x1*x2*y[1]*y[3]*y[4]*y[31]*y[38]*y[39]*y[40]*y[\
41]*y[42]+2.*x1*y[1]*y[2]*y[3]*y[8]*y[31]*y[38]*y[39]*y[40]*y[41]*y[42]+x0*\
y[1]*y[2]*y[8]*y[10]*y[20]*y[21]*y[43]*y[44]*y[45]+2.*x1*y[1]*y[2]*y[3]*y[8\
]*y[10]*y[20]*y[21]*y[43]*y[44]*y[45]+x1*y[1]*y[2]*y[3]*y[8]*y[23]*y[28]*y[\
29]*y[43]*y[44]*y[45]);
return (FOUT);
}
double Pa10(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[46];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x0*x0;
y[4]=esx[0];
y[5]=y[1]*y[2];
y[6]=x0*y[1]*y[2];
y[7]=2.*x0*x2*y[1]*y[2];
y[8]=x2*x2;
y[9]=-x0;
y[10]=1.+y[9];
y[11]=x1*y[1]*y[2];
y[12]=x2*y[1]*y[2];
y[13]=2.*x1*x2*y[1]*y[2];
y[14]=2.*x0*x1*x2*y[1]*y[2];
y[15]=y[1]*y[2]*y[8];
y[16]=2.*x0*x1*y[1]*y[2]*y[8];
y[17]=-(x2*y[1]*y[4]);
y[18]=-(x1*x2*y[1]*y[4]);
y[19]=-2.*x0*x1*x2*y[1]*y[4];
y[20]=y[11]+y[12]+y[13]+y[14]+y[15]+y[16]+y[17]+y[18]+y[19];
y[21]=lrs[0];
y[22]=-x1;
y[23]=1.+y[22];
y[24]=x2*y[1]*y[2]*y[3];
y[25]=y[1]*y[2]*y[3]*y[8];
y[26]=-(x0*x2*y[1]*y[4]);
y[27]=-(x2*y[1]*y[3]*y[4]);
y[28]=y[5]+y[6]+y[7]+y[24]+y[25]+y[26]+y[27];
y[29]=lrs[1];
y[30]=-x2;
y[31]=1.+y[30];
y[32]=2.*x0*x1*y[1]*y[2];
y[33]=x1*y[1]*y[2]*y[3];
y[34]=2.*x1*x2*y[1]*y[2]*y[3];
y[35]=-(x0*y[1]*y[4]);
y[36]=-(x0*x1*y[1]*y[4]);
y[37]=-(x1*y[1]*y[3]*y[4]);
y[38]=y[5]+y[6]+y[7]+y[32]+y[33]+y[34]+y[35]+y[36]+y[37];
y[39]=lrs[2];
y[40]=pow(y[10],2);
y[41]=pow(y[20],2);
y[42]=pow(y[21],2);
y[43]=pow(y[31],2);
y[44]=pow(y[38],2);
y[45]=pow(y[39],2);
FOUT=(lambda*(-(x0*x1*y[1]*y[2]*y[10]*y[20]*y[21])-x0*x2*y[1]*y[2]*y[10]*y[2\
0]*y[21]-2.*x0*x1*x2*y[1]*y[2]*y[10]*y[20]*y[21]-2.*x1*x2*y[1]*y[2]*y[3]*y[\
10]*y[20]*y[21]+x0*x2*y[1]*y[4]*y[10]*y[20]*y[21]+x0*x1*x2*y[1]*y[4]*y[10]*\
y[20]*y[21]+2.*x1*x2*y[1]*y[3]*y[4]*y[10]*y[20]*y[21]-x0*y[1]*y[2]*y[8]*y[1\
0]*y[20]*y[21]-2.*x1*y[1]*y[2]*y[3]*y[8]*y[10]*y[20]*y[21]-x1*y[1]*y[2]*y[2\
3]*y[28]*y[29]-x0*x1*y[1]*y[2]*y[23]*y[28]*y[29]-2.*x0*x1*x2*y[1]*y[2]*y[23\
]*y[28]*y[29]-x1*x2*y[1]*y[2]*y[3]*y[23]*y[28]*y[29]+x0*x1*x2*y[1]*y[4]*y[2\
3]*y[28]*y[29]+x1*x2*y[1]*y[3]*y[4]*y[23]*y[28]*y[29]-x1*y[1]*y[2]*y[3]*y[8\
]*y[23]*y[28]*y[29]-x2*y[1]*y[2]*y[31]*y[38]*y[39]-x0*x2*y[1]*y[2]*y[31]*y[\
38]*y[39]-2.*x0*x1*x2*y[1]*y[2]*y[31]*y[38]*y[39]-x1*x2*y[1]*y[2]*y[3]*y[31\
]*y[38]*y[39]+x0*x2*y[1]*y[4]*y[31]*y[38]*y[39]+x0*x1*x2*y[1]*y[4]*y[31]*y[\
38]*y[39]+x1*x2*y[1]*y[3]*y[4]*y[31]*y[38]*y[39]-2.*x0*y[1]*y[2]*y[8]*y[31]\
*y[38]*y[39]-2.*x1*y[1]*y[2]*y[3]*y[8]*y[31]*y[38]*y[39])-x1*pow(lambda,5)*\
y[1]*y[2]*y[3]*y[8]*y[23]*y[28]*y[29]*y[40]*y[41]*y[42]*y[43]*y[44]*y[45]+p\
ow(lambda,3)*(2.*x0*x1*x2*y[1]*y[2]*y[10]*y[20]*y[21]*y[23]*y[28]*y[29]*y[3\
1]*y[38]*y[39]+2.*x1*x2*y[1]*y[2]*y[3]*y[10]*y[20]*y[21]*y[23]*y[28]*y[29]*\
y[31]*y[38]*y[39]-x0*x1*x2*y[1]*y[4]*y[10]*y[20]*y[21]*y[23]*y[28]*y[29]*y[\
31]*y[38]*y[39]-2.*x1*x2*y[1]*y[3]*y[4]*y[10]*y[20]*y[21]*y[23]*y[28]*y[29]\
*y[31]*y[38]*y[39]+4.*x1*y[1]*y[2]*y[3]*y[8]*y[10]*y[20]*y[21]*y[23]*y[28]*\
y[29]*y[31]*y[38]*y[39]+x1*x2*y[1]*y[2]*y[3]*y[23]*y[28]*y[29]*y[40]*y[41]*\
y[42]-x1*x2*y[1]*y[3]*y[4]*y[23]*y[28]*y[29]*y[40]*y[41]*y[42]+x1*y[1]*y[2]\
*y[3]*y[8]*y[23]*y[28]*y[29]*y[40]*y[41]*y[42]+x1*x2*y[1]*y[2]*y[3]*y[31]*y\
[38]*y[39]*y[40]*y[41]*y[42]-x1*x2*y[1]*y[3]*y[4]*y[31]*y[38]*y[39]*y[40]*y\
[41]*y[42]+2.*x1*y[1]*y[2]*y[3]*y[8]*y[31]*y[38]*y[39]*y[40]*y[41]*y[42]+x0\
*y[1]*y[2]*y[8]*y[10]*y[20]*y[21]*y[43]*y[44]*y[45]+2.*x1*y[1]*y[2]*y[3]*y[\
8]*y[10]*y[20]*y[21]*y[43]*y[44]*y[45]+x1*y[1]*y[2]*y[3]*y[8]*y[23]*y[28]*y\
[29]*y[43]*y[44]*y[45]))/(lambda*(x0*x1*y[1]*y[2]+x0*x2*y[1]*y[2]+x1*x2*y[1\
]*y[2]*y[3]-x0*x1*x2*y[1]*y[4]-x1*x2*y[1]*y[3]*y[4]+y[5]+x0*y[1]*y[2]*y[8]+\
x1*y[1]*y[2]*y[3]*y[8]+y[11]+y[12]+y[14]+y[26]+lambda*lambda*(-(x0*x1*y[1]*\
y[2]*y[10]*y[20]*y[21]*y[23]*y[28]*y[29])-2.*x0*x1*x2*y[1]*y[2]*y[10]*y[20]\
*y[21]*y[23]*y[28]*y[29]-2.*x1*x2*y[1]*y[2]*y[3]*y[10]*y[20]*y[21]*y[23]*y[\
28]*y[29]+x0*x1*x2*y[1]*y[4]*y[10]*y[20]*y[21]*y[23]*y[28]*y[29]+2.*x1*x2*y\
[1]*y[3]*y[4]*y[10]*y[20]*y[21]*y[23]*y[28]*y[29]-2.*x1*y[1]*y[2]*y[3]*y[8]\
*y[10]*y[20]*y[21]*y[23]*y[28]*y[29]-x0*x2*y[1]*y[2]*y[10]*y[20]*y[21]*y[31\
]*y[38]*y[39]-2.*x0*x1*x2*y[1]*y[2]*y[10]*y[20]*y[21]*y[31]*y[38]*y[39]-2.*\
x1*x2*y[1]*y[2]*y[3]*y[10]*y[20]*y[21]*y[31]*y[38]*y[39]+x0*x2*y[1]*y[4]*y[\
10]*y[20]*y[21]*y[31]*y[38]*y[39]+x0*x1*x2*y[1]*y[4]*y[10]*y[20]*y[21]*y[31\
]*y[38]*y[39]+2.*x1*x2*y[1]*y[3]*y[4]*y[10]*y[20]*y[21]*y[31]*y[38]*y[39]-2\
.*x0*y[1]*y[2]*y[8]*y[10]*y[20]*y[21]*y[31]*y[38]*y[39]-4.*x1*y[1]*y[2]*y[3\
]*y[8]*y[10]*y[20]*y[21]*y[31]*y[38]*y[39]-2.*x0*x1*x2*y[1]*y[2]*y[23]*y[28\
]*y[29]*y[31]*y[38]*y[39]-x1*x2*y[1]*y[2]*y[3]*y[23]*y[28]*y[29]*y[31]*y[38\
]*y[39]+x0*x1*x2*y[1]*y[4]*y[23]*y[28]*y[29]*y[31]*y[38]*y[39]+x1*x2*y[1]*y\
[3]*y[4]*y[23]*y[28]*y[29]*y[31]*y[38]*y[39]-2.*x1*y[1]*y[2]*y[3]*y[8]*y[23\
]*y[28]*y[29]*y[31]*y[38]*y[39]-x1*x2*y[1]*y[2]*y[3]*y[40]*y[41]*y[42]+x1*x\
2*y[1]*y[3]*y[4]*y[40]*y[41]*y[42]-x1*y[1]*y[2]*y[3]*y[8]*y[40]*y[41]*y[42]\
-x0*y[1]*y[2]*y[8]*y[43]*y[44]*y[45]-x1*y[1]*y[2]*y[3]*y[8]*y[43]*y[44]*y[4\
5])+pow(lambda,4)*(x1*x2*y[1]*y[2]*y[3]*y[23]*y[28]*y[29]*y[31]*y[38]*y[39]\
*y[40]*y[41]*y[42]-x1*x2*y[1]*y[3]*y[4]*y[23]*y[28]*y[29]*y[31]*y[38]*y[39]\
*y[40]*y[41]*y[42]+2.*x1*y[1]*y[2]*y[3]*y[8]*y[23]*y[28]*y[29]*y[31]*y[38]*\
y[39]*y[40]*y[41]*y[42]+2.*x1*y[1]*y[2]*y[3]*y[8]*y[10]*y[20]*y[21]*y[23]*y\
[28]*y[29]*y[43]*y[44]*y[45]+x1*y[1]*y[2]*y[3]*y[8]*y[40]*y[41]*y[42]*y[43]\
*y[44]*y[45])));
return (FOUT);
}
double Pt10t1(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[5];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x2*x2;
y[4]=esx[0];
FOUT=(1.-x0)*x0*(x1*y[1]*y[2]+x2*y[1]*y[2]+2.*x1*x2*y[1]*y[2]+2.*x0*x1*x2*y[\
1]*y[2]+y[1]*y[2]*y[3]+2.*x0*x1*y[1]*y[2]*y[3]-x2*y[1]*y[4]-x1*x2*y[1]*y[4]\
-2.*x0*x1*x2*y[1]*y[4]);
return (FOUT);
}
double Pt10t2(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[5];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x0*x0;
y[4]=esx[0];
FOUT=(1.-x1)*x1*(y[1]*y[2]+x0*y[1]*y[2]+2.*x0*x2*y[1]*y[2]+x2*y[1]*y[2]*y[3]\
+x2*x2*y[1]*y[2]*y[3]-x0*x2*y[1]*y[4]-x2*y[1]*y[3]*y[4]);
return (FOUT);
}
double Pt10t3(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[5];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x0*x0;
y[4]=esx[0];
FOUT=(1.-x2)*x2*(y[1]*y[2]+x0*y[1]*y[2]+2.*x0*x1*y[1]*y[2]+2.*x0*x2*y[1]*y[2\
]+x1*y[1]*y[2]*y[3]+2.*x1*x2*y[1]*y[2]*y[3]-x0*y[1]*y[4]-x0*x1*y[1]*y[4]-x1\
*y[1]*y[3]*y[4]);
return (FOUT);
}
