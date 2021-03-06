#include "intfile.hh"

double Pr7(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[37];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=esx[0];
y[4]=-x0;
y[5]=1.+y[4];
y[6]=y[1]*y[2];
y[7]=x1*y[1]*y[2];
y[8]=x2*y[1]*y[2];
y[9]=2.*x0*x2*y[1]*y[2];
y[10]=2.*x1*x2*y[1]*y[2];
y[11]=2.*x0*x1*x2*y[1]*y[2];
y[12]=-(y[1]*y[3]);
y[13]=-(x1*y[1]*y[3]);
y[14]=-(x1*x2*y[1]*y[3]);
y[15]=y[6]+y[7]+y[8]+y[9]+y[10]+y[11]+y[12]+y[13]+y[14];
y[16]=lrs[0];
y[17]=x0*x0;
y[18]=-x1;
y[19]=1.+y[18];
y[20]=x0*y[1]*y[2];
y[21]=x2*y[1]*y[2]*y[17];
y[22]=-(x0*y[1]*y[3]);
y[23]=-(x0*x2*y[1]*y[3]);
y[24]=y[6]+y[8]+y[9]+y[20]+y[21]+y[22]+y[23];
y[25]=lrs[1];
y[26]=-x2;
y[27]=1.+y[26];
y[28]=y[1]*y[2]*y[17];
y[29]=2.*x0*x1*y[1]*y[2];
y[30]=x1*y[1]*y[2]*y[17];
y[31]=-(x0*x1*y[1]*y[3]);
y[32]=y[7]+y[20]+y[28]+y[29]+y[30]+y[31];
y[33]=lrs[2];
y[34]=pow(y[5],2);
y[35]=pow(y[15],2);
y[36]=pow(y[16],2);
FOUT=(2.*x0*x1*x2*y[1]*y[2]*y[5]*y[15]*y[16]*y[19]*y[24]*y[25]*y[27]*y[32]*y\
[33]-x0*x1*x2*y[1]*y[3]*y[5]*y[15]*y[16]*y[19]*y[24]*y[25]*y[27]*y[32]*y[33\
]+2.*x1*x2*y[1]*y[2]*y[5]*y[15]*y[16]*y[17]*y[19]*y[24]*y[25]*y[27]*y[32]*y\
[33]+x1*x2*y[1]*y[2]*y[17]*y[19]*y[24]*y[25]*y[34]*y[35]*y[36]+x2*y[1]*y[2]\
*y[17]*y[27]*y[32]*y[33]*y[34]*y[35]*y[36]+x1*x2*y[1]*y[2]*y[17]*y[27]*y[32\
]*y[33]*y[34]*y[35]*y[36])/(-(x0*y[1]*y[2]*y[5]*y[15]*y[16])-x0*x1*y[1]*y[2\
]*y[5]*y[15]*y[16]-x0*x2*y[1]*y[2]*y[5]*y[15]*y[16]-2.*x0*x1*x2*y[1]*y[2]*y\
[5]*y[15]*y[16]+x0*y[1]*y[3]*y[5]*y[15]*y[16]+x0*x1*y[1]*y[3]*y[5]*y[15]*y[\
16]+x0*x1*x2*y[1]*y[3]*y[5]*y[15]*y[16]-2.*x2*y[1]*y[2]*y[5]*y[15]*y[16]*y[\
17]-2.*x1*x2*y[1]*y[2]*y[5]*y[15]*y[16]*y[17]-x1*y[1]*y[2]*y[19]*y[24]*y[25\
]-x0*x1*y[1]*y[2]*y[19]*y[24]*y[25]-x1*x2*y[1]*y[2]*y[19]*y[24]*y[25]-2.*x0\
*x1*x2*y[1]*y[2]*y[19]*y[24]*y[25]+x0*x1*y[1]*y[3]*y[19]*y[24]*y[25]+x0*x1*\
x2*y[1]*y[3]*y[19]*y[24]*y[25]-x1*x2*y[1]*y[2]*y[17]*y[19]*y[24]*y[25]-x0*x\
2*y[1]*y[2]*y[27]*y[32]*y[33]-x1*x2*y[1]*y[2]*y[27]*y[32]*y[33]-2.*x0*x1*x2\
*y[1]*y[2]*y[27]*y[32]*y[33]+x0*x1*x2*y[1]*y[3]*y[27]*y[32]*y[33]-x2*y[1]*y\
[2]*y[17]*y[27]*y[32]*y[33]-x1*x2*y[1]*y[2]*y[17]*y[27]*y[32]*y[33]);
return (FOUT);
}
double Pm7(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[37];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x0*x0;
y[4]=esx[0];
y[5]=x0*y[1]*y[2];
y[6]=x1*y[1]*y[2];
y[7]=-(x0*x1*y[1]*y[4]);
y[8]=y[1]*y[2];
y[9]=x2*y[1]*y[2]*y[3];
y[10]=-(x0*y[1]*y[4]);
y[11]=x2*y[1]*y[2];
y[12]=2.*x0*x2*y[1]*y[2];
y[13]=2.*x0*x1*x2*y[1]*y[2];
y[14]=-x0;
y[15]=1.+y[14];
y[16]=pow(y[15],2);
y[17]=2.*x1*x2*y[1]*y[2];
y[18]=-(y[1]*y[4]);
y[19]=-(x1*y[1]*y[4]);
y[20]=-(x1*x2*y[1]*y[4]);
y[21]=y[6]+y[8]+y[11]+y[12]+y[13]+y[17]+y[18]+y[19]+y[20];
y[22]=pow(y[21],2);
y[23]=lrs[0];
y[24]=pow(y[23],2);
y[25]=-x1;
y[26]=1.+y[25];
y[27]=-(x0*x2*y[1]*y[4]);
y[28]=y[5]+y[8]+y[9]+y[10]+y[11]+y[12]+y[27];
y[29]=lrs[1];
y[30]=-x2;
y[31]=1.+y[30];
y[32]=y[1]*y[2]*y[3];
y[33]=2.*x0*x1*y[1]*y[2];
y[34]=x1*y[1]*y[2]*y[3];
y[35]=y[5]+y[6]+y[7]+y[32]+y[33]+y[34];
y[36]=lrs[2];
FOUT=pow(x0*x1*y[1]*y[2]+x0*x2*y[1]*y[2]+x1*x2*y[1]*y[2]+x1*x2*y[1]*y[2]*y[3\
]-x0*x1*x2*y[1]*y[4]+y[5]+y[6]+y[7]+y[8]+y[9]+y[10]+y[13]+x1*x2*pow(lambda,\
4)*y[1]*y[2]*y[3]*y[16]*y[22]*y[24]*y[26]*y[28]*y[29]*y[31]*y[35]*y[36]+lam\
bda*lambda*(-(x2*y[1]*y[2]*y[3]*y[16]*y[22]*y[24])-x1*x2*y[1]*y[2]*y[3]*y[1\
6]*y[22]*y[24]-x0*x1*y[1]*y[2]*y[15]*y[21]*y[23]*y[26]*y[28]*y[29]-2.*x0*x1\
*x2*y[1]*y[2]*y[15]*y[21]*y[23]*y[26]*y[28]*y[29]-2.*x1*x2*y[1]*y[2]*y[3]*y\
[15]*y[21]*y[23]*y[26]*y[28]*y[29]+x0*x1*y[1]*y[4]*y[15]*y[21]*y[23]*y[26]*\
y[28]*y[29]+x0*x1*x2*y[1]*y[4]*y[15]*y[21]*y[23]*y[26]*y[28]*y[29]-x0*x2*y[\
1]*y[2]*y[15]*y[21]*y[23]*y[31]*y[35]*y[36]-2.*x0*x1*x2*y[1]*y[2]*y[15]*y[2\
1]*y[23]*y[31]*y[35]*y[36]-2.*x2*y[1]*y[2]*y[3]*y[15]*y[21]*y[23]*y[31]*y[3\
5]*y[36]-2.*x1*x2*y[1]*y[2]*y[3]*y[15]*y[21]*y[23]*y[31]*y[35]*y[36]+x0*x1*\
x2*y[1]*y[4]*y[15]*y[21]*y[23]*y[31]*y[35]*y[36]-x1*x2*y[1]*y[2]*y[26]*y[28\
]*y[29]*y[31]*y[35]*y[36]-2.*x0*x1*x2*y[1]*y[2]*y[26]*y[28]*y[29]*y[31]*y[3\
5]*y[36]-x1*x2*y[1]*y[2]*y[3]*y[26]*y[28]*y[29]*y[31]*y[35]*y[36]+x0*x1*x2*\
y[1]*y[4]*y[26]*y[28]*y[29]*y[31]*y[35]*y[36]),2)+pow(lambda*(-(x0*y[1]*y[2\
]*y[15]*y[21]*y[23])-x0*x1*y[1]*y[2]*y[15]*y[21]*y[23]-x0*x2*y[1]*y[2]*y[15\
]*y[21]*y[23]-2.*x0*x1*x2*y[1]*y[2]*y[15]*y[21]*y[23]-2.*x2*y[1]*y[2]*y[3]*\
y[15]*y[21]*y[23]-2.*x1*x2*y[1]*y[2]*y[3]*y[15]*y[21]*y[23]+x0*y[1]*y[4]*y[\
15]*y[21]*y[23]+x0*x1*y[1]*y[4]*y[15]*y[21]*y[23]+x0*x1*x2*y[1]*y[4]*y[15]*\
y[21]*y[23]-x1*y[1]*y[2]*y[26]*y[28]*y[29]-x0*x1*y[1]*y[2]*y[26]*y[28]*y[29\
]-x1*x2*y[1]*y[2]*y[26]*y[28]*y[29]-2.*x0*x1*x2*y[1]*y[2]*y[26]*y[28]*y[29]\
-x1*x2*y[1]*y[2]*y[3]*y[26]*y[28]*y[29]+x0*x1*y[1]*y[4]*y[26]*y[28]*y[29]+x\
0*x1*x2*y[1]*y[4]*y[26]*y[28]*y[29]-x0*x2*y[1]*y[2]*y[31]*y[35]*y[36]-x1*x2\
*y[1]*y[2]*y[31]*y[35]*y[36]-2.*x0*x1*x2*y[1]*y[2]*y[31]*y[35]*y[36]-x2*y[1\
]*y[2]*y[3]*y[31]*y[35]*y[36]-x1*x2*y[1]*y[2]*y[3]*y[31]*y[35]*y[36]+x0*x1*\
x2*y[1]*y[4]*y[31]*y[35]*y[36])+pow(lambda,3)*(x1*x2*y[1]*y[2]*y[3]*y[16]*y\
[22]*y[24]*y[26]*y[28]*y[29]+x2*y[1]*y[2]*y[3]*y[16]*y[22]*y[24]*y[31]*y[35\
]*y[36]+x1*x2*y[1]*y[2]*y[3]*y[16]*y[22]*y[24]*y[31]*y[35]*y[36]+2.*x0*x1*x\
2*y[1]*y[2]*y[15]*y[21]*y[23]*y[26]*y[28]*y[29]*y[31]*y[35]*y[36]+2.*x1*x2*\
y[1]*y[2]*y[3]*y[15]*y[21]*y[23]*y[26]*y[28]*y[29]*y[31]*y[35]*y[36]-x0*x1*\
x2*y[1]*y[4]*y[15]*y[21]*y[23]*y[26]*y[28]*y[29]*y[31]*y[35]*y[36]),2);
return (FOUT);
}
double Ps7(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[37];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=esx[0];
y[4]=-x0;
y[5]=1.+y[4];
y[6]=y[1]*y[2];
y[7]=x1*y[1]*y[2];
y[8]=x2*y[1]*y[2];
y[9]=2.*x0*x2*y[1]*y[2];
y[10]=2.*x1*x2*y[1]*y[2];
y[11]=2.*x0*x1*x2*y[1]*y[2];
y[12]=-(y[1]*y[3]);
y[13]=-(x1*y[1]*y[3]);
y[14]=-(x1*x2*y[1]*y[3]);
y[15]=y[6]+y[7]+y[8]+y[9]+y[10]+y[11]+y[12]+y[13]+y[14];
y[16]=lrs[0];
y[17]=x0*x0;
y[18]=-x1;
y[19]=1.+y[18];
y[20]=x0*y[1]*y[2];
y[21]=x2*y[1]*y[2]*y[17];
y[22]=-(x0*y[1]*y[3]);
y[23]=-(x0*x2*y[1]*y[3]);
y[24]=y[6]+y[8]+y[9]+y[20]+y[21]+y[22]+y[23];
y[25]=lrs[1];
y[26]=-x2;
y[27]=1.+y[26];
y[28]=y[1]*y[2]*y[17];
y[29]=2.*x0*x1*y[1]*y[2];
y[30]=x1*y[1]*y[2]*y[17];
y[31]=-(x0*x1*y[1]*y[3]);
y[32]=y[7]+y[20]+y[28]+y[29]+y[30]+y[31];
y[33]=lrs[2];
y[34]=pow(y[5],2);
y[35]=pow(y[15],2);
y[36]=pow(y[16],2);
FOUT=lambda*(-(x0*y[1]*y[2]*y[5]*y[15]*y[16])-x0*x1*y[1]*y[2]*y[5]*y[15]*y[1\
6]-x0*x2*y[1]*y[2]*y[5]*y[15]*y[16]-2.*x0*x1*x2*y[1]*y[2]*y[5]*y[15]*y[16]+\
x0*y[1]*y[3]*y[5]*y[15]*y[16]+x0*x1*y[1]*y[3]*y[5]*y[15]*y[16]+x0*x1*x2*y[1\
]*y[3]*y[5]*y[15]*y[16]-2.*x2*y[1]*y[2]*y[5]*y[15]*y[16]*y[17]-2.*x1*x2*y[1\
]*y[2]*y[5]*y[15]*y[16]*y[17]-x1*y[1]*y[2]*y[19]*y[24]*y[25]-x0*x1*y[1]*y[2\
]*y[19]*y[24]*y[25]-x1*x2*y[1]*y[2]*y[19]*y[24]*y[25]-2.*x0*x1*x2*y[1]*y[2]\
*y[19]*y[24]*y[25]+x0*x1*y[1]*y[3]*y[19]*y[24]*y[25]+x0*x1*x2*y[1]*y[3]*y[1\
9]*y[24]*y[25]-x1*x2*y[1]*y[2]*y[17]*y[19]*y[24]*y[25]-x0*x2*y[1]*y[2]*y[27\
]*y[32]*y[33]-x1*x2*y[1]*y[2]*y[27]*y[32]*y[33]-2.*x0*x1*x2*y[1]*y[2]*y[27]\
*y[32]*y[33]+x0*x1*x2*y[1]*y[3]*y[27]*y[32]*y[33]-x2*y[1]*y[2]*y[17]*y[27]*\
y[32]*y[33]-x1*x2*y[1]*y[2]*y[17]*y[27]*y[32]*y[33])+pow(lambda,3)*(2.*x0*x\
1*x2*y[1]*y[2]*y[5]*y[15]*y[16]*y[19]*y[24]*y[25]*y[27]*y[32]*y[33]-x0*x1*x\
2*y[1]*y[3]*y[5]*y[15]*y[16]*y[19]*y[24]*y[25]*y[27]*y[32]*y[33]+2.*x1*x2*y\
[1]*y[2]*y[5]*y[15]*y[16]*y[17]*y[19]*y[24]*y[25]*y[27]*y[32]*y[33]+x1*x2*y\
[1]*y[2]*y[17]*y[19]*y[24]*y[25]*y[34]*y[35]*y[36]+x2*y[1]*y[2]*y[17]*y[27]\
*y[32]*y[33]*y[34]*y[35]*y[36]+x1*x2*y[1]*y[2]*y[17]*y[27]*y[32]*y[33]*y[34\
]*y[35]*y[36]);
return (FOUT);
}
double Pa7(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[37];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x0*x0;
y[4]=esx[0];
y[5]=x0*y[1]*y[2];
y[6]=x1*y[1]*y[2];
y[7]=-(x0*x1*y[1]*y[4]);
y[8]=y[1]*y[2];
y[9]=x2*y[1]*y[2]*y[3];
y[10]=-(x0*y[1]*y[4]);
y[11]=x2*y[1]*y[2];
y[12]=2.*x0*x2*y[1]*y[2];
y[13]=2.*x0*x1*x2*y[1]*y[2];
y[14]=-x0;
y[15]=1.+y[14];
y[16]=pow(y[15],2);
y[17]=2.*x1*x2*y[1]*y[2];
y[18]=-(y[1]*y[4]);
y[19]=-(x1*y[1]*y[4]);
y[20]=-(x1*x2*y[1]*y[4]);
y[21]=y[6]+y[8]+y[11]+y[12]+y[13]+y[17]+y[18]+y[19]+y[20];
y[22]=pow(y[21],2);
y[23]=lrs[0];
y[24]=pow(y[23],2);
y[25]=-x1;
y[26]=1.+y[25];
y[27]=-(x0*x2*y[1]*y[4]);
y[28]=y[5]+y[8]+y[9]+y[10]+y[11]+y[12]+y[27];
y[29]=lrs[1];
y[30]=-x2;
y[31]=1.+y[30];
y[32]=y[1]*y[2]*y[3];
y[33]=2.*x0*x1*y[1]*y[2];
y[34]=x1*y[1]*y[2]*y[3];
y[35]=y[5]+y[6]+y[7]+y[32]+y[33]+y[34];
y[36]=lrs[2];
FOUT=(lambda*(-(x0*y[1]*y[2]*y[15]*y[21]*y[23])-x0*x1*y[1]*y[2]*y[15]*y[21]*\
y[23]-x0*x2*y[1]*y[2]*y[15]*y[21]*y[23]-2.*x0*x1*x2*y[1]*y[2]*y[15]*y[21]*y\
[23]-2.*x2*y[1]*y[2]*y[3]*y[15]*y[21]*y[23]-2.*x1*x2*y[1]*y[2]*y[3]*y[15]*y\
[21]*y[23]+x0*y[1]*y[4]*y[15]*y[21]*y[23]+x0*x1*y[1]*y[4]*y[15]*y[21]*y[23]\
+x0*x1*x2*y[1]*y[4]*y[15]*y[21]*y[23]-x1*y[1]*y[2]*y[26]*y[28]*y[29]-x0*x1*\
y[1]*y[2]*y[26]*y[28]*y[29]-x1*x2*y[1]*y[2]*y[26]*y[28]*y[29]-2.*x0*x1*x2*y\
[1]*y[2]*y[26]*y[28]*y[29]-x1*x2*y[1]*y[2]*y[3]*y[26]*y[28]*y[29]+x0*x1*y[1\
]*y[4]*y[26]*y[28]*y[29]+x0*x1*x2*y[1]*y[4]*y[26]*y[28]*y[29]-x0*x2*y[1]*y[\
2]*y[31]*y[35]*y[36]-x1*x2*y[1]*y[2]*y[31]*y[35]*y[36]-2.*x0*x1*x2*y[1]*y[2\
]*y[31]*y[35]*y[36]-x2*y[1]*y[2]*y[3]*y[31]*y[35]*y[36]-x1*x2*y[1]*y[2]*y[3\
]*y[31]*y[35]*y[36]+x0*x1*x2*y[1]*y[4]*y[31]*y[35]*y[36])+pow(lambda,3)*(x1\
*x2*y[1]*y[2]*y[3]*y[16]*y[22]*y[24]*y[26]*y[28]*y[29]+x2*y[1]*y[2]*y[3]*y[\
16]*y[22]*y[24]*y[31]*y[35]*y[36]+x1*x2*y[1]*y[2]*y[3]*y[16]*y[22]*y[24]*y[\
31]*y[35]*y[36]+2.*x0*x1*x2*y[1]*y[2]*y[15]*y[21]*y[23]*y[26]*y[28]*y[29]*y\
[31]*y[35]*y[36]+2.*x1*x2*y[1]*y[2]*y[3]*y[15]*y[21]*y[23]*y[26]*y[28]*y[29\
]*y[31]*y[35]*y[36]-x0*x1*x2*y[1]*y[4]*y[15]*y[21]*y[23]*y[26]*y[28]*y[29]*\
y[31]*y[35]*y[36]))/(lambda*(x0*x1*y[1]*y[2]+x0*x2*y[1]*y[2]+x1*x2*y[1]*y[2\
]+x1*x2*y[1]*y[2]*y[3]-x0*x1*x2*y[1]*y[4]+y[5]+y[6]+y[7]+y[8]+y[9]+y[10]+y[\
13]+x1*x2*pow(lambda,4)*y[1]*y[2]*y[3]*y[16]*y[22]*y[24]*y[26]*y[28]*y[29]*\
y[31]*y[35]*y[36]+lambda*lambda*(-(x2*y[1]*y[2]*y[3]*y[16]*y[22]*y[24])-x1*\
x2*y[1]*y[2]*y[3]*y[16]*y[22]*y[24]-x0*x1*y[1]*y[2]*y[15]*y[21]*y[23]*y[26]\
*y[28]*y[29]-2.*x0*x1*x2*y[1]*y[2]*y[15]*y[21]*y[23]*y[26]*y[28]*y[29]-2.*x\
1*x2*y[1]*y[2]*y[3]*y[15]*y[21]*y[23]*y[26]*y[28]*y[29]+x0*x1*y[1]*y[4]*y[1\
5]*y[21]*y[23]*y[26]*y[28]*y[29]+x0*x1*x2*y[1]*y[4]*y[15]*y[21]*y[23]*y[26]\
*y[28]*y[29]-x0*x2*y[1]*y[2]*y[15]*y[21]*y[23]*y[31]*y[35]*y[36]-2.*x0*x1*x\
2*y[1]*y[2]*y[15]*y[21]*y[23]*y[31]*y[35]*y[36]-2.*x2*y[1]*y[2]*y[3]*y[15]*\
y[21]*y[23]*y[31]*y[35]*y[36]-2.*x1*x2*y[1]*y[2]*y[3]*y[15]*y[21]*y[23]*y[3\
1]*y[35]*y[36]+x0*x1*x2*y[1]*y[4]*y[15]*y[21]*y[23]*y[31]*y[35]*y[36]-x1*x2\
*y[1]*y[2]*y[26]*y[28]*y[29]*y[31]*y[35]*y[36]-2.*x0*x1*x2*y[1]*y[2]*y[26]*\
y[28]*y[29]*y[31]*y[35]*y[36]-x1*x2*y[1]*y[2]*y[3]*y[26]*y[28]*y[29]*y[31]*\
y[35]*y[36]+x0*x1*x2*y[1]*y[4]*y[26]*y[28]*y[29]*y[31]*y[35]*y[36])));
return (FOUT);
}
double Pt7t1(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[4];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=esx[0];
FOUT=(1.-x0)*x0*(y[1]*y[2]+x1*y[1]*y[2]+x2*y[1]*y[2]+2.*x0*x2*y[1]*y[2]+2.*x\
1*x2*y[1]*y[2]+2.*x0*x1*x2*y[1]*y[2]-y[1]*y[3]-x1*y[1]*y[3]-x1*x2*y[1]*y[3]\
);
return (FOUT);
}
double Pt7t2(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[4];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=esx[0];
FOUT=(1.-x1)*x1*(y[1]*y[2]+x0*y[1]*y[2]+x2*y[1]*y[2]+2.*x0*x2*y[1]*y[2]+x2*(\
x0*x0)*y[1]*y[2]-x0*y[1]*y[3]-x0*x2*y[1]*y[3]);
return (FOUT);
}
double Pt7t3(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[4];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x0*x0;
FOUT=(1.-x2)*x2*(-(x0*x1*esx[0]*y[1])+x0*y[1]*y[2]+x1*y[1]*y[2]+2.*x0*x1*y[1\
]*y[2]+y[1]*y[2]*y[3]+x1*y[1]*y[2]*y[3]);
return (FOUT);
}
