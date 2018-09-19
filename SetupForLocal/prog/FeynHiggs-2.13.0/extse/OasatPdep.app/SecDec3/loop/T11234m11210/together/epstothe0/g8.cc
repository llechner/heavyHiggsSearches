#include "intfile.hh"

double Pr8(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[59];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=em[1];
y[4]=x2*x2;
y[5]=esx[0];
y[6]=-x0;
y[7]=1.+y[6];
y[8]=y[1]*y[2];
y[9]=2.*x1*y[1]*y[2];
y[10]=2.*x0*x1*y[1]*y[2];
y[11]=x2*y[1]*y[2];
y[12]=x1*x2*y[1]*y[2];
y[13]=2.*x0*x1*x2*y[1]*y[2];
y[14]=x2*y[1]*y[3];
y[15]=x1*x2*y[1]*y[3];
y[16]=2.*x0*x1*x2*y[1]*y[3];
y[17]=y[1]*y[3]*y[4];
y[18]=2.*x0*x1*y[1]*y[3]*y[4];
y[19]=-(x2*y[1]*y[5]);
y[20]=-(x1*x2*y[1]*y[5]);
y[21]=-2.*x0*x1*x2*y[1]*y[5];
y[22]=y[8]+y[9]+y[10]+y[11]+y[12]+y[13]+y[14]+y[15]+y[16]+y[17]+y[18]+y[19]+\
y[20]+y[21];
y[23]=lrs[0];
y[24]=x0*x0;
y[25]=-x1;
y[26]=1.+y[25];
y[27]=2.*x0*y[1]*y[2];
y[28]=y[1]*y[2]*y[24];
y[29]=x0*x2*y[1]*y[2];
y[30]=x2*y[1]*y[2]*y[24];
y[31]=x0*x2*y[1]*y[3];
y[32]=x2*y[1]*y[3]*y[24];
y[33]=y[1]*y[3]*y[4]*y[24];
y[34]=-(x0*x2*y[1]*y[5]);
y[35]=-(x2*y[1]*y[5]*y[24]);
y[36]=y[8]+y[27]+y[28]+y[29]+y[30]+y[31]+y[32]+y[33]+y[34]+y[35];
y[37]=lrs[1];
y[38]=-x2;
y[39]=1.+y[38];
y[40]=x0*y[1]*y[2];
y[41]=x0*x1*y[1]*y[2];
y[42]=x1*y[1]*y[2]*y[24];
y[43]=x0*y[1]*y[3];
y[44]=x0*x1*y[1]*y[3];
y[45]=x1*y[1]*y[3]*y[24];
y[46]=2.*x0*x2*y[1]*y[3];
y[47]=2.*x1*x2*y[1]*y[3]*y[24];
y[48]=-(x0*y[1]*y[5]);
y[49]=-(x0*x1*y[1]*y[5]);
y[50]=-(x1*y[1]*y[5]*y[24]);
y[51]=y[8]+y[40]+y[41]+y[42]+y[43]+y[44]+y[45]+y[46]+y[47]+y[48]+y[49]+y[50]\
;
y[52]=lrs[2];
y[53]=pow(y[7],2);
y[54]=pow(y[22],2);
y[55]=pow(y[23],2);
y[56]=pow(y[39],2);
y[57]=pow(y[51],2);
y[58]=pow(y[52],2);
FOUT=(x0*x1*x2*y[1]*y[2]*y[7]*y[22]*y[23]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52\
]+x0*x1*x2*y[1]*y[3]*y[7]*y[22]*y[23]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52]-x\
0*x1*x2*y[1]*y[5]*y[7]*y[22]*y[23]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52]+2.*x\
1*x2*y[1]*y[2]*y[7]*y[22]*y[23]*y[24]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52]+2\
.*x1*x2*y[1]*y[3]*y[7]*y[22]*y[23]*y[24]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52\
]+4.*x1*y[1]*y[3]*y[4]*y[7]*y[22]*y[23]*y[24]*y[26]*y[36]*y[37]*y[39]*y[51]\
*y[52]-2.*x1*x2*y[1]*y[5]*y[7]*y[22]*y[23]*y[24]*y[26]*y[36]*y[37]*y[39]*y[\
51]*y[52]+x1*y[1]*y[2]*y[24]*y[26]*y[36]*y[37]*y[53]*y[54]*y[55]+x1*x2*y[1]\
*y[2]*y[24]*y[26]*y[36]*y[37]*y[53]*y[54]*y[55]+x1*x2*y[1]*y[3]*y[24]*y[26]\
*y[36]*y[37]*y[53]*y[54]*y[55]+x1*y[1]*y[3]*y[4]*y[24]*y[26]*y[36]*y[37]*y[\
53]*y[54]*y[55]-x1*x2*y[1]*y[5]*y[24]*y[26]*y[36]*y[37]*y[53]*y[54]*y[55]+x\
1*x2*y[1]*y[2]*y[24]*y[39]*y[51]*y[52]*y[53]*y[54]*y[55]+x1*x2*y[1]*y[3]*y[\
24]*y[39]*y[51]*y[52]*y[53]*y[54]*y[55]+2.*x1*y[1]*y[3]*y[4]*y[24]*y[39]*y[\
51]*y[52]*y[53]*y[54]*y[55]-x1*x2*y[1]*y[5]*y[24]*y[39]*y[51]*y[52]*y[53]*y\
[54]*y[55]+x0*y[1]*y[3]*y[4]*y[7]*y[22]*y[23]*y[56]*y[57]*y[58]+2.*x1*y[1]*\
y[3]*y[4]*y[7]*y[22]*y[23]*y[24]*y[56]*y[57]*y[58]+x1*y[1]*y[3]*y[4]*y[24]*\
y[26]*y[36]*y[37]*y[56]*y[57]*y[58])/(-(x0*y[1]*y[2]*y[7]*y[22]*y[23])-2.*x\
0*x1*y[1]*y[2]*y[7]*y[22]*y[23]-x0*x2*y[1]*y[2]*y[7]*y[22]*y[23]-x0*x1*x2*y\
[1]*y[2]*y[7]*y[22]*y[23]-x0*x2*y[1]*y[3]*y[7]*y[22]*y[23]-x0*x1*x2*y[1]*y[\
3]*y[7]*y[22]*y[23]-x0*y[1]*y[3]*y[4]*y[7]*y[22]*y[23]+x0*x2*y[1]*y[5]*y[7]\
*y[22]*y[23]+x0*x1*x2*y[1]*y[5]*y[7]*y[22]*y[23]-2.*x1*y[1]*y[2]*y[7]*y[22]\
*y[23]*y[24]-2.*x1*x2*y[1]*y[2]*y[7]*y[22]*y[23]*y[24]-2.*x1*x2*y[1]*y[3]*y\
[7]*y[22]*y[23]*y[24]-2.*x1*y[1]*y[3]*y[4]*y[7]*y[22]*y[23]*y[24]+2.*x1*x2*\
y[1]*y[5]*y[7]*y[22]*y[23]*y[24]-x1*y[1]*y[2]*y[26]*y[36]*y[37]-2.*x0*x1*y[\
1]*y[2]*y[26]*y[36]*y[37]-x0*x1*x2*y[1]*y[2]*y[26]*y[36]*y[37]-x0*x1*x2*y[1\
]*y[3]*y[26]*y[36]*y[37]+x0*x1*x2*y[1]*y[5]*y[26]*y[36]*y[37]-x1*y[1]*y[2]*\
y[24]*y[26]*y[36]*y[37]-x1*x2*y[1]*y[2]*y[24]*y[26]*y[36]*y[37]-x1*x2*y[1]*\
y[3]*y[24]*y[26]*y[36]*y[37]-x1*y[1]*y[3]*y[4]*y[24]*y[26]*y[36]*y[37]+x1*x\
2*y[1]*y[5]*y[24]*y[26]*y[36]*y[37]-x2*y[1]*y[2]*y[39]*y[51]*y[52]-x0*x2*y[\
1]*y[2]*y[39]*y[51]*y[52]-x0*x1*x2*y[1]*y[2]*y[39]*y[51]*y[52]-x0*x2*y[1]*y\
[3]*y[39]*y[51]*y[52]-x0*x1*x2*y[1]*y[3]*y[39]*y[51]*y[52]-2.*x0*y[1]*y[3]*\
y[4]*y[39]*y[51]*y[52]+x0*x2*y[1]*y[5]*y[39]*y[51]*y[52]+x0*x1*x2*y[1]*y[5]\
*y[39]*y[51]*y[52]-x1*x2*y[1]*y[2]*y[24]*y[39]*y[51]*y[52]-x1*x2*y[1]*y[3]*\
y[24]*y[39]*y[51]*y[52]-2.*x1*y[1]*y[3]*y[4]*y[24]*y[39]*y[51]*y[52]+x1*x2*\
y[1]*y[5]*y[24]*y[39]*y[51]*y[52]);
return (FOUT);
}
double Pm8(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[59];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x0*x0;
y[4]=em[1];
y[5]=esx[0];
y[6]=y[1]*y[2];
y[7]=x2*x2;
y[8]=-x0;
y[9]=1.+y[8];
y[10]=2.*x1*y[1]*y[2];
y[11]=2.*x0*x1*y[1]*y[2];
y[12]=x2*y[1]*y[2];
y[13]=x1*x2*y[1]*y[2];
y[14]=2.*x0*x1*x2*y[1]*y[2];
y[15]=x2*y[1]*y[4];
y[16]=x1*x2*y[1]*y[4];
y[17]=2.*x0*x1*x2*y[1]*y[4];
y[18]=y[1]*y[4]*y[7];
y[19]=2.*x0*x1*y[1]*y[4]*y[7];
y[20]=-(x2*y[1]*y[5]);
y[21]=-(x1*x2*y[1]*y[5]);
y[22]=-2.*x0*x1*x2*y[1]*y[5];
y[23]=y[6]+y[10]+y[11]+y[12]+y[13]+y[14]+y[15]+y[16]+y[17]+y[18]+y[19]+y[20]\
+y[21]+y[22];
y[24]=lrs[0];
y[25]=-x1;
y[26]=1.+y[25];
y[27]=2.*x0*y[1]*y[2];
y[28]=y[1]*y[2]*y[3];
y[29]=x0*x2*y[1]*y[2];
y[30]=x2*y[1]*y[2]*y[3];
y[31]=x0*x2*y[1]*y[4];
y[32]=x2*y[1]*y[3]*y[4];
y[33]=y[1]*y[3]*y[4]*y[7];
y[34]=-(x0*x2*y[1]*y[5]);
y[35]=-(x2*y[1]*y[3]*y[5]);
y[36]=y[6]+y[27]+y[28]+y[29]+y[30]+y[31]+y[32]+y[33]+y[34]+y[35];
y[37]=lrs[1];
y[38]=-x2;
y[39]=1.+y[38];
y[40]=x0*y[1]*y[2];
y[41]=x0*x1*y[1]*y[2];
y[42]=x1*y[1]*y[2]*y[3];
y[43]=x0*y[1]*y[4];
y[44]=x0*x1*y[1]*y[4];
y[45]=x1*y[1]*y[3]*y[4];
y[46]=2.*x0*x2*y[1]*y[4];
y[47]=2.*x1*x2*y[1]*y[3]*y[4];
y[48]=-(x0*y[1]*y[5]);
y[49]=-(x0*x1*y[1]*y[5]);
y[50]=-(x1*y[1]*y[3]*y[5]);
y[51]=y[6]+y[40]+y[41]+y[42]+y[43]+y[44]+y[45]+y[46]+y[47]+y[48]+y[49]+y[50]\
;
y[52]=lrs[2];
y[53]=pow(y[9],2);
y[54]=pow(y[23],2);
y[55]=pow(y[24],2);
y[56]=pow(y[39],2);
y[57]=pow(y[51],2);
y[58]=pow(y[52],2);
FOUT=pow(lambda*(-(x0*y[1]*y[2]*y[9]*y[23]*y[24])-2.*x0*x1*y[1]*y[2]*y[9]*y[\
23]*y[24]-x0*x2*y[1]*y[2]*y[9]*y[23]*y[24]-x0*x1*x2*y[1]*y[2]*y[9]*y[23]*y[\
24]-2.*x1*y[1]*y[2]*y[3]*y[9]*y[23]*y[24]-2.*x1*x2*y[1]*y[2]*y[3]*y[9]*y[23\
]*y[24]-x0*x2*y[1]*y[4]*y[9]*y[23]*y[24]-x0*x1*x2*y[1]*y[4]*y[9]*y[23]*y[24\
]-2.*x1*x2*y[1]*y[3]*y[4]*y[9]*y[23]*y[24]+x0*x2*y[1]*y[5]*y[9]*y[23]*y[24]\
+x0*x1*x2*y[1]*y[5]*y[9]*y[23]*y[24]+2.*x1*x2*y[1]*y[3]*y[5]*y[9]*y[23]*y[2\
4]-x0*y[1]*y[4]*y[7]*y[9]*y[23]*y[24]-2.*x1*y[1]*y[3]*y[4]*y[7]*y[9]*y[23]*\
y[24]-x1*y[1]*y[2]*y[26]*y[36]*y[37]-2.*x0*x1*y[1]*y[2]*y[26]*y[36]*y[37]-x\
0*x1*x2*y[1]*y[2]*y[26]*y[36]*y[37]-x1*y[1]*y[2]*y[3]*y[26]*y[36]*y[37]-x1*\
x2*y[1]*y[2]*y[3]*y[26]*y[36]*y[37]-x0*x1*x2*y[1]*y[4]*y[26]*y[36]*y[37]-x1\
*x2*y[1]*y[3]*y[4]*y[26]*y[36]*y[37]+x0*x1*x2*y[1]*y[5]*y[26]*y[36]*y[37]+x\
1*x2*y[1]*y[3]*y[5]*y[26]*y[36]*y[37]-x1*y[1]*y[3]*y[4]*y[7]*y[26]*y[36]*y[\
37]-x2*y[1]*y[2]*y[39]*y[51]*y[52]-x0*x2*y[1]*y[2]*y[39]*y[51]*y[52]-x0*x1*\
x2*y[1]*y[2]*y[39]*y[51]*y[52]-x1*x2*y[1]*y[2]*y[3]*y[39]*y[51]*y[52]-x0*x2\
*y[1]*y[4]*y[39]*y[51]*y[52]-x0*x1*x2*y[1]*y[4]*y[39]*y[51]*y[52]-x1*x2*y[1\
]*y[3]*y[4]*y[39]*y[51]*y[52]+x0*x2*y[1]*y[5]*y[39]*y[51]*y[52]+x0*x1*x2*y[\
1]*y[5]*y[39]*y[51]*y[52]+x1*x2*y[1]*y[3]*y[5]*y[39]*y[51]*y[52]-2.*x0*y[1]\
*y[4]*y[7]*y[39]*y[51]*y[52]-2.*x1*y[1]*y[3]*y[4]*y[7]*y[39]*y[51]*y[52])-x\
1*pow(lambda,5)*y[1]*y[3]*y[4]*y[7]*y[26]*y[36]*y[37]*y[53]*y[54]*y[55]*y[5\
6]*y[57]*y[58]+pow(lambda,3)*(x0*x1*x2*y[1]*y[2]*y[9]*y[23]*y[24]*y[26]*y[3\
6]*y[37]*y[39]*y[51]*y[52]+2.*x1*x2*y[1]*y[2]*y[3]*y[9]*y[23]*y[24]*y[26]*y\
[36]*y[37]*y[39]*y[51]*y[52]+x0*x1*x2*y[1]*y[4]*y[9]*y[23]*y[24]*y[26]*y[36\
]*y[37]*y[39]*y[51]*y[52]+2.*x1*x2*y[1]*y[3]*y[4]*y[9]*y[23]*y[24]*y[26]*y[\
36]*y[37]*y[39]*y[51]*y[52]-x0*x1*x2*y[1]*y[5]*y[9]*y[23]*y[24]*y[26]*y[36]\
*y[37]*y[39]*y[51]*y[52]-2.*x1*x2*y[1]*y[3]*y[5]*y[9]*y[23]*y[24]*y[26]*y[3\
6]*y[37]*y[39]*y[51]*y[52]+4.*x1*y[1]*y[3]*y[4]*y[7]*y[9]*y[23]*y[24]*y[26]\
*y[36]*y[37]*y[39]*y[51]*y[52]+x1*y[1]*y[2]*y[3]*y[26]*y[36]*y[37]*y[53]*y[\
54]*y[55]+x1*x2*y[1]*y[2]*y[3]*y[26]*y[36]*y[37]*y[53]*y[54]*y[55]+x1*x2*y[\
1]*y[3]*y[4]*y[26]*y[36]*y[37]*y[53]*y[54]*y[55]-x1*x2*y[1]*y[3]*y[5]*y[26]\
*y[36]*y[37]*y[53]*y[54]*y[55]+x1*y[1]*y[3]*y[4]*y[7]*y[26]*y[36]*y[37]*y[5\
3]*y[54]*y[55]+x1*x2*y[1]*y[2]*y[3]*y[39]*y[51]*y[52]*y[53]*y[54]*y[55]+x1*\
x2*y[1]*y[3]*y[4]*y[39]*y[51]*y[52]*y[53]*y[54]*y[55]-x1*x2*y[1]*y[3]*y[5]*\
y[39]*y[51]*y[52]*y[53]*y[54]*y[55]+2.*x1*y[1]*y[3]*y[4]*y[7]*y[39]*y[51]*y\
[52]*y[53]*y[54]*y[55]+x0*y[1]*y[4]*y[7]*y[9]*y[23]*y[24]*y[56]*y[57]*y[58]\
+2.*x1*y[1]*y[3]*y[4]*y[7]*y[9]*y[23]*y[24]*y[56]*y[57]*y[58]+x1*y[1]*y[3]*\
y[4]*y[7]*y[26]*y[36]*y[37]*y[56]*y[57]*y[58]),2)+pow(x1*y[1]*y[2]+x0*x1*x2\
*y[1]*y[2]+x1*x2*y[1]*y[2]*y[3]+x0*x1*x2*y[1]*y[4]+x1*x2*y[1]*y[3]*y[4]-x0*\
x1*x2*y[1]*y[5]-x1*x2*y[1]*y[3]*y[5]+y[6]+x0*y[1]*y[4]*y[7]+x1*y[1]*y[3]*y[\
4]*y[7]+y[11]+y[12]+y[29]+y[31]+y[34]+y[40]+y[42]+lambda*lambda*(-2.*x0*x1*\
y[1]*y[2]*y[9]*y[23]*y[24]*y[26]*y[36]*y[37]-x0*x1*x2*y[1]*y[2]*y[9]*y[23]*\
y[24]*y[26]*y[36]*y[37]-2.*x1*y[1]*y[2]*y[3]*y[9]*y[23]*y[24]*y[26]*y[36]*y\
[37]-2.*x1*x2*y[1]*y[2]*y[3]*y[9]*y[23]*y[24]*y[26]*y[36]*y[37]-x0*x1*x2*y[\
1]*y[4]*y[9]*y[23]*y[24]*y[26]*y[36]*y[37]-2.*x1*x2*y[1]*y[3]*y[4]*y[9]*y[2\
3]*y[24]*y[26]*y[36]*y[37]+x0*x1*x2*y[1]*y[5]*y[9]*y[23]*y[24]*y[26]*y[36]*\
y[37]+2.*x1*x2*y[1]*y[3]*y[5]*y[9]*y[23]*y[24]*y[26]*y[36]*y[37]-2.*x1*y[1]\
*y[3]*y[4]*y[7]*y[9]*y[23]*y[24]*y[26]*y[36]*y[37]-x0*x2*y[1]*y[2]*y[9]*y[2\
3]*y[24]*y[39]*y[51]*y[52]-x0*x1*x2*y[1]*y[2]*y[9]*y[23]*y[24]*y[39]*y[51]*\
y[52]-2.*x1*x2*y[1]*y[2]*y[3]*y[9]*y[23]*y[24]*y[39]*y[51]*y[52]-x0*x2*y[1]\
*y[4]*y[9]*y[23]*y[24]*y[39]*y[51]*y[52]-x0*x1*x2*y[1]*y[4]*y[9]*y[23]*y[24\
]*y[39]*y[51]*y[52]-2.*x1*x2*y[1]*y[3]*y[4]*y[9]*y[23]*y[24]*y[39]*y[51]*y[\
52]+x0*x2*y[1]*y[5]*y[9]*y[23]*y[24]*y[39]*y[51]*y[52]+x0*x1*x2*y[1]*y[5]*y\
[9]*y[23]*y[24]*y[39]*y[51]*y[52]+2.*x1*x2*y[1]*y[3]*y[5]*y[9]*y[23]*y[24]*\
y[39]*y[51]*y[52]-2.*x0*y[1]*y[4]*y[7]*y[9]*y[23]*y[24]*y[39]*y[51]*y[52]-4\
.*x1*y[1]*y[3]*y[4]*y[7]*y[9]*y[23]*y[24]*y[39]*y[51]*y[52]-x0*x1*x2*y[1]*y\
[2]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52]-x1*x2*y[1]*y[2]*y[3]*y[26]*y[36]*y[\
37]*y[39]*y[51]*y[52]-x0*x1*x2*y[1]*y[4]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52\
]-x1*x2*y[1]*y[3]*y[4]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52]+x0*x1*x2*y[1]*y[\
5]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52]+x1*x2*y[1]*y[3]*y[5]*y[26]*y[36]*y[3\
7]*y[39]*y[51]*y[52]-2.*x1*y[1]*y[3]*y[4]*y[7]*y[26]*y[36]*y[37]*y[39]*y[51\
]*y[52]-x1*y[1]*y[2]*y[3]*y[53]*y[54]*y[55]-x1*x2*y[1]*y[2]*y[3]*y[53]*y[54\
]*y[55]-x1*x2*y[1]*y[3]*y[4]*y[53]*y[54]*y[55]+x1*x2*y[1]*y[3]*y[5]*y[53]*y\
[54]*y[55]-x1*y[1]*y[3]*y[4]*y[7]*y[53]*y[54]*y[55]-x0*y[1]*y[4]*y[7]*y[56]\
*y[57]*y[58]-x1*y[1]*y[3]*y[4]*y[7]*y[56]*y[57]*y[58])+pow(lambda,4)*(x1*x2\
*y[1]*y[2]*y[3]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52]*y[53]*y[54]*y[55]+x1*x2\
*y[1]*y[3]*y[4]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52]*y[53]*y[54]*y[55]-x1*x2\
*y[1]*y[3]*y[5]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52]*y[53]*y[54]*y[55]+2.*x1\
*y[1]*y[3]*y[4]*y[7]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52]*y[53]*y[54]*y[55]+\
2.*x1*y[1]*y[3]*y[4]*y[7]*y[9]*y[23]*y[24]*y[26]*y[36]*y[37]*y[56]*y[57]*y[\
58]+x1*y[1]*y[3]*y[4]*y[7]*y[53]*y[54]*y[55]*y[56]*y[57]*y[58]),2);
return (FOUT);
}
double Ps8(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[59];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x0*x0;
y[4]=em[1];
y[5]=esx[0];
y[6]=y[1]*y[2];
y[7]=x2*x2;
y[8]=-x0;
y[9]=1.+y[8];
y[10]=2.*x1*y[1]*y[2];
y[11]=2.*x0*x1*y[1]*y[2];
y[12]=x2*y[1]*y[2];
y[13]=x1*x2*y[1]*y[2];
y[14]=2.*x0*x1*x2*y[1]*y[2];
y[15]=x2*y[1]*y[4];
y[16]=x1*x2*y[1]*y[4];
y[17]=2.*x0*x1*x2*y[1]*y[4];
y[18]=y[1]*y[4]*y[7];
y[19]=2.*x0*x1*y[1]*y[4]*y[7];
y[20]=-(x2*y[1]*y[5]);
y[21]=-(x1*x2*y[1]*y[5]);
y[22]=-2.*x0*x1*x2*y[1]*y[5];
y[23]=y[6]+y[10]+y[11]+y[12]+y[13]+y[14]+y[15]+y[16]+y[17]+y[18]+y[19]+y[20]\
+y[21]+y[22];
y[24]=lrs[0];
y[25]=-x1;
y[26]=1.+y[25];
y[27]=2.*x0*y[1]*y[2];
y[28]=y[1]*y[2]*y[3];
y[29]=x0*x2*y[1]*y[2];
y[30]=x2*y[1]*y[2]*y[3];
y[31]=x0*x2*y[1]*y[4];
y[32]=x2*y[1]*y[3]*y[4];
y[33]=y[1]*y[3]*y[4]*y[7];
y[34]=-(x0*x2*y[1]*y[5]);
y[35]=-(x2*y[1]*y[3]*y[5]);
y[36]=y[6]+y[27]+y[28]+y[29]+y[30]+y[31]+y[32]+y[33]+y[34]+y[35];
y[37]=lrs[1];
y[38]=-x2;
y[39]=1.+y[38];
y[40]=x0*y[1]*y[2];
y[41]=x0*x1*y[1]*y[2];
y[42]=x1*y[1]*y[2]*y[3];
y[43]=x0*y[1]*y[4];
y[44]=x0*x1*y[1]*y[4];
y[45]=x1*y[1]*y[3]*y[4];
y[46]=2.*x0*x2*y[1]*y[4];
y[47]=2.*x1*x2*y[1]*y[3]*y[4];
y[48]=-(x0*y[1]*y[5]);
y[49]=-(x0*x1*y[1]*y[5]);
y[50]=-(x1*y[1]*y[3]*y[5]);
y[51]=y[6]+y[40]+y[41]+y[42]+y[43]+y[44]+y[45]+y[46]+y[47]+y[48]+y[49]+y[50]\
;
y[52]=lrs[2];
y[53]=pow(y[9],2);
y[54]=pow(y[23],2);
y[55]=pow(y[24],2);
y[56]=pow(y[39],2);
y[57]=pow(y[51],2);
y[58]=pow(y[52],2);
FOUT=lambda*(-(x0*y[1]*y[2]*y[9]*y[23]*y[24])-2.*x0*x1*y[1]*y[2]*y[9]*y[23]*\
y[24]-x0*x2*y[1]*y[2]*y[9]*y[23]*y[24]-x0*x1*x2*y[1]*y[2]*y[9]*y[23]*y[24]-\
2.*x1*y[1]*y[2]*y[3]*y[9]*y[23]*y[24]-2.*x1*x2*y[1]*y[2]*y[3]*y[9]*y[23]*y[\
24]-x0*x2*y[1]*y[4]*y[9]*y[23]*y[24]-x0*x1*x2*y[1]*y[4]*y[9]*y[23]*y[24]-2.\
*x1*x2*y[1]*y[3]*y[4]*y[9]*y[23]*y[24]+x0*x2*y[1]*y[5]*y[9]*y[23]*y[24]+x0*\
x1*x2*y[1]*y[5]*y[9]*y[23]*y[24]+2.*x1*x2*y[1]*y[3]*y[5]*y[9]*y[23]*y[24]-x\
0*y[1]*y[4]*y[7]*y[9]*y[23]*y[24]-2.*x1*y[1]*y[3]*y[4]*y[7]*y[9]*y[23]*y[24\
]-x1*y[1]*y[2]*y[26]*y[36]*y[37]-2.*x0*x1*y[1]*y[2]*y[26]*y[36]*y[37]-x0*x1\
*x2*y[1]*y[2]*y[26]*y[36]*y[37]-x1*y[1]*y[2]*y[3]*y[26]*y[36]*y[37]-x1*x2*y\
[1]*y[2]*y[3]*y[26]*y[36]*y[37]-x0*x1*x2*y[1]*y[4]*y[26]*y[36]*y[37]-x1*x2*\
y[1]*y[3]*y[4]*y[26]*y[36]*y[37]+x0*x1*x2*y[1]*y[5]*y[26]*y[36]*y[37]+x1*x2\
*y[1]*y[3]*y[5]*y[26]*y[36]*y[37]-x1*y[1]*y[3]*y[4]*y[7]*y[26]*y[36]*y[37]-\
x2*y[1]*y[2]*y[39]*y[51]*y[52]-x0*x2*y[1]*y[2]*y[39]*y[51]*y[52]-x0*x1*x2*y\
[1]*y[2]*y[39]*y[51]*y[52]-x1*x2*y[1]*y[2]*y[3]*y[39]*y[51]*y[52]-x0*x2*y[1\
]*y[4]*y[39]*y[51]*y[52]-x0*x1*x2*y[1]*y[4]*y[39]*y[51]*y[52]-x1*x2*y[1]*y[\
3]*y[4]*y[39]*y[51]*y[52]+x0*x2*y[1]*y[5]*y[39]*y[51]*y[52]+x0*x1*x2*y[1]*y\
[5]*y[39]*y[51]*y[52]+x1*x2*y[1]*y[3]*y[5]*y[39]*y[51]*y[52]-2.*x0*y[1]*y[4\
]*y[7]*y[39]*y[51]*y[52]-2.*x1*y[1]*y[3]*y[4]*y[7]*y[39]*y[51]*y[52])-x1*po\
w(lambda,5)*y[1]*y[3]*y[4]*y[7]*y[26]*y[36]*y[37]*y[53]*y[54]*y[55]*y[56]*y\
[57]*y[58]+pow(lambda,3)*(x0*x1*x2*y[1]*y[2]*y[9]*y[23]*y[24]*y[26]*y[36]*y\
[37]*y[39]*y[51]*y[52]+2.*x1*x2*y[1]*y[2]*y[3]*y[9]*y[23]*y[24]*y[26]*y[36]\
*y[37]*y[39]*y[51]*y[52]+x0*x1*x2*y[1]*y[4]*y[9]*y[23]*y[24]*y[26]*y[36]*y[\
37]*y[39]*y[51]*y[52]+2.*x1*x2*y[1]*y[3]*y[4]*y[9]*y[23]*y[24]*y[26]*y[36]*\
y[37]*y[39]*y[51]*y[52]-x0*x1*x2*y[1]*y[5]*y[9]*y[23]*y[24]*y[26]*y[36]*y[3\
7]*y[39]*y[51]*y[52]-2.*x1*x2*y[1]*y[3]*y[5]*y[9]*y[23]*y[24]*y[26]*y[36]*y\
[37]*y[39]*y[51]*y[52]+4.*x1*y[1]*y[3]*y[4]*y[7]*y[9]*y[23]*y[24]*y[26]*y[3\
6]*y[37]*y[39]*y[51]*y[52]+x1*y[1]*y[2]*y[3]*y[26]*y[36]*y[37]*y[53]*y[54]*\
y[55]+x1*x2*y[1]*y[2]*y[3]*y[26]*y[36]*y[37]*y[53]*y[54]*y[55]+x1*x2*y[1]*y\
[3]*y[4]*y[26]*y[36]*y[37]*y[53]*y[54]*y[55]-x1*x2*y[1]*y[3]*y[5]*y[26]*y[3\
6]*y[37]*y[53]*y[54]*y[55]+x1*y[1]*y[3]*y[4]*y[7]*y[26]*y[36]*y[37]*y[53]*y\
[54]*y[55]+x1*x2*y[1]*y[2]*y[3]*y[39]*y[51]*y[52]*y[53]*y[54]*y[55]+x1*x2*y\
[1]*y[3]*y[4]*y[39]*y[51]*y[52]*y[53]*y[54]*y[55]-x1*x2*y[1]*y[3]*y[5]*y[39\
]*y[51]*y[52]*y[53]*y[54]*y[55]+2.*x1*y[1]*y[3]*y[4]*y[7]*y[39]*y[51]*y[52]\
*y[53]*y[54]*y[55]+x0*y[1]*y[4]*y[7]*y[9]*y[23]*y[24]*y[56]*y[57]*y[58]+2.*\
x1*y[1]*y[3]*y[4]*y[7]*y[9]*y[23]*y[24]*y[56]*y[57]*y[58]+x1*y[1]*y[3]*y[4]\
*y[7]*y[26]*y[36]*y[37]*y[56]*y[57]*y[58]);
return (FOUT);
}
double Pa8(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[59];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x0*x0;
y[4]=em[1];
y[5]=esx[0];
y[6]=y[1]*y[2];
y[7]=x2*x2;
y[8]=-x0;
y[9]=1.+y[8];
y[10]=2.*x1*y[1]*y[2];
y[11]=2.*x0*x1*y[1]*y[2];
y[12]=x2*y[1]*y[2];
y[13]=x1*x2*y[1]*y[2];
y[14]=2.*x0*x1*x2*y[1]*y[2];
y[15]=x2*y[1]*y[4];
y[16]=x1*x2*y[1]*y[4];
y[17]=2.*x0*x1*x2*y[1]*y[4];
y[18]=y[1]*y[4]*y[7];
y[19]=2.*x0*x1*y[1]*y[4]*y[7];
y[20]=-(x2*y[1]*y[5]);
y[21]=-(x1*x2*y[1]*y[5]);
y[22]=-2.*x0*x1*x2*y[1]*y[5];
y[23]=y[6]+y[10]+y[11]+y[12]+y[13]+y[14]+y[15]+y[16]+y[17]+y[18]+y[19]+y[20]\
+y[21]+y[22];
y[24]=lrs[0];
y[25]=-x1;
y[26]=1.+y[25];
y[27]=2.*x0*y[1]*y[2];
y[28]=y[1]*y[2]*y[3];
y[29]=x0*x2*y[1]*y[2];
y[30]=x2*y[1]*y[2]*y[3];
y[31]=x0*x2*y[1]*y[4];
y[32]=x2*y[1]*y[3]*y[4];
y[33]=y[1]*y[3]*y[4]*y[7];
y[34]=-(x0*x2*y[1]*y[5]);
y[35]=-(x2*y[1]*y[3]*y[5]);
y[36]=y[6]+y[27]+y[28]+y[29]+y[30]+y[31]+y[32]+y[33]+y[34]+y[35];
y[37]=lrs[1];
y[38]=-x2;
y[39]=1.+y[38];
y[40]=x0*y[1]*y[2];
y[41]=x0*x1*y[1]*y[2];
y[42]=x1*y[1]*y[2]*y[3];
y[43]=x0*y[1]*y[4];
y[44]=x0*x1*y[1]*y[4];
y[45]=x1*y[1]*y[3]*y[4];
y[46]=2.*x0*x2*y[1]*y[4];
y[47]=2.*x1*x2*y[1]*y[3]*y[4];
y[48]=-(x0*y[1]*y[5]);
y[49]=-(x0*x1*y[1]*y[5]);
y[50]=-(x1*y[1]*y[3]*y[5]);
y[51]=y[6]+y[40]+y[41]+y[42]+y[43]+y[44]+y[45]+y[46]+y[47]+y[48]+y[49]+y[50]\
;
y[52]=lrs[2];
y[53]=pow(y[9],2);
y[54]=pow(y[23],2);
y[55]=pow(y[24],2);
y[56]=pow(y[39],2);
y[57]=pow(y[51],2);
y[58]=pow(y[52],2);
FOUT=(lambda*(-(x0*y[1]*y[2]*y[9]*y[23]*y[24])-2.*x0*x1*y[1]*y[2]*y[9]*y[23]\
*y[24]-x0*x2*y[1]*y[2]*y[9]*y[23]*y[24]-x0*x1*x2*y[1]*y[2]*y[9]*y[23]*y[24]\
-2.*x1*y[1]*y[2]*y[3]*y[9]*y[23]*y[24]-2.*x1*x2*y[1]*y[2]*y[3]*y[9]*y[23]*y\
[24]-x0*x2*y[1]*y[4]*y[9]*y[23]*y[24]-x0*x1*x2*y[1]*y[4]*y[9]*y[23]*y[24]-2\
.*x1*x2*y[1]*y[3]*y[4]*y[9]*y[23]*y[24]+x0*x2*y[1]*y[5]*y[9]*y[23]*y[24]+x0\
*x1*x2*y[1]*y[5]*y[9]*y[23]*y[24]+2.*x1*x2*y[1]*y[3]*y[5]*y[9]*y[23]*y[24]-\
x0*y[1]*y[4]*y[7]*y[9]*y[23]*y[24]-2.*x1*y[1]*y[3]*y[4]*y[7]*y[9]*y[23]*y[2\
4]-x1*y[1]*y[2]*y[26]*y[36]*y[37]-2.*x0*x1*y[1]*y[2]*y[26]*y[36]*y[37]-x0*x\
1*x2*y[1]*y[2]*y[26]*y[36]*y[37]-x1*y[1]*y[2]*y[3]*y[26]*y[36]*y[37]-x1*x2*\
y[1]*y[2]*y[3]*y[26]*y[36]*y[37]-x0*x1*x2*y[1]*y[4]*y[26]*y[36]*y[37]-x1*x2\
*y[1]*y[3]*y[4]*y[26]*y[36]*y[37]+x0*x1*x2*y[1]*y[5]*y[26]*y[36]*y[37]+x1*x\
2*y[1]*y[3]*y[5]*y[26]*y[36]*y[37]-x1*y[1]*y[3]*y[4]*y[7]*y[26]*y[36]*y[37]\
-x2*y[1]*y[2]*y[39]*y[51]*y[52]-x0*x2*y[1]*y[2]*y[39]*y[51]*y[52]-x0*x1*x2*\
y[1]*y[2]*y[39]*y[51]*y[52]-x1*x2*y[1]*y[2]*y[3]*y[39]*y[51]*y[52]-x0*x2*y[\
1]*y[4]*y[39]*y[51]*y[52]-x0*x1*x2*y[1]*y[4]*y[39]*y[51]*y[52]-x1*x2*y[1]*y\
[3]*y[4]*y[39]*y[51]*y[52]+x0*x2*y[1]*y[5]*y[39]*y[51]*y[52]+x0*x1*x2*y[1]*\
y[5]*y[39]*y[51]*y[52]+x1*x2*y[1]*y[3]*y[5]*y[39]*y[51]*y[52]-2.*x0*y[1]*y[\
4]*y[7]*y[39]*y[51]*y[52]-2.*x1*y[1]*y[3]*y[4]*y[7]*y[39]*y[51]*y[52])-x1*p\
ow(lambda,5)*y[1]*y[3]*y[4]*y[7]*y[26]*y[36]*y[37]*y[53]*y[54]*y[55]*y[56]*\
y[57]*y[58]+pow(lambda,3)*(x0*x1*x2*y[1]*y[2]*y[9]*y[23]*y[24]*y[26]*y[36]*\
y[37]*y[39]*y[51]*y[52]+2.*x1*x2*y[1]*y[2]*y[3]*y[9]*y[23]*y[24]*y[26]*y[36\
]*y[37]*y[39]*y[51]*y[52]+x0*x1*x2*y[1]*y[4]*y[9]*y[23]*y[24]*y[26]*y[36]*y\
[37]*y[39]*y[51]*y[52]+2.*x1*x2*y[1]*y[3]*y[4]*y[9]*y[23]*y[24]*y[26]*y[36]\
*y[37]*y[39]*y[51]*y[52]-x0*x1*x2*y[1]*y[5]*y[9]*y[23]*y[24]*y[26]*y[36]*y[\
37]*y[39]*y[51]*y[52]-2.*x1*x2*y[1]*y[3]*y[5]*y[9]*y[23]*y[24]*y[26]*y[36]*\
y[37]*y[39]*y[51]*y[52]+4.*x1*y[1]*y[3]*y[4]*y[7]*y[9]*y[23]*y[24]*y[26]*y[\
36]*y[37]*y[39]*y[51]*y[52]+x1*y[1]*y[2]*y[3]*y[26]*y[36]*y[37]*y[53]*y[54]\
*y[55]+x1*x2*y[1]*y[2]*y[3]*y[26]*y[36]*y[37]*y[53]*y[54]*y[55]+x1*x2*y[1]*\
y[3]*y[4]*y[26]*y[36]*y[37]*y[53]*y[54]*y[55]-x1*x2*y[1]*y[3]*y[5]*y[26]*y[\
36]*y[37]*y[53]*y[54]*y[55]+x1*y[1]*y[3]*y[4]*y[7]*y[26]*y[36]*y[37]*y[53]*\
y[54]*y[55]+x1*x2*y[1]*y[2]*y[3]*y[39]*y[51]*y[52]*y[53]*y[54]*y[55]+x1*x2*\
y[1]*y[3]*y[4]*y[39]*y[51]*y[52]*y[53]*y[54]*y[55]-x1*x2*y[1]*y[3]*y[5]*y[3\
9]*y[51]*y[52]*y[53]*y[54]*y[55]+2.*x1*y[1]*y[3]*y[4]*y[7]*y[39]*y[51]*y[52\
]*y[53]*y[54]*y[55]+x0*y[1]*y[4]*y[7]*y[9]*y[23]*y[24]*y[56]*y[57]*y[58]+2.\
*x1*y[1]*y[3]*y[4]*y[7]*y[9]*y[23]*y[24]*y[56]*y[57]*y[58]+x1*y[1]*y[3]*y[4\
]*y[7]*y[26]*y[36]*y[37]*y[56]*y[57]*y[58]))/(lambda*(x1*y[1]*y[2]+x0*x1*x2\
*y[1]*y[2]+x1*x2*y[1]*y[2]*y[3]+x0*x1*x2*y[1]*y[4]+x1*x2*y[1]*y[3]*y[4]-x0*\
x1*x2*y[1]*y[5]-x1*x2*y[1]*y[3]*y[5]+y[6]+x0*y[1]*y[4]*y[7]+x1*y[1]*y[3]*y[\
4]*y[7]+y[11]+y[12]+y[29]+y[31]+y[34]+y[40]+y[42]+lambda*lambda*(-2.*x0*x1*\
y[1]*y[2]*y[9]*y[23]*y[24]*y[26]*y[36]*y[37]-x0*x1*x2*y[1]*y[2]*y[9]*y[23]*\
y[24]*y[26]*y[36]*y[37]-2.*x1*y[1]*y[2]*y[3]*y[9]*y[23]*y[24]*y[26]*y[36]*y\
[37]-2.*x1*x2*y[1]*y[2]*y[3]*y[9]*y[23]*y[24]*y[26]*y[36]*y[37]-x0*x1*x2*y[\
1]*y[4]*y[9]*y[23]*y[24]*y[26]*y[36]*y[37]-2.*x1*x2*y[1]*y[3]*y[4]*y[9]*y[2\
3]*y[24]*y[26]*y[36]*y[37]+x0*x1*x2*y[1]*y[5]*y[9]*y[23]*y[24]*y[26]*y[36]*\
y[37]+2.*x1*x2*y[1]*y[3]*y[5]*y[9]*y[23]*y[24]*y[26]*y[36]*y[37]-2.*x1*y[1]\
*y[3]*y[4]*y[7]*y[9]*y[23]*y[24]*y[26]*y[36]*y[37]-x0*x2*y[1]*y[2]*y[9]*y[2\
3]*y[24]*y[39]*y[51]*y[52]-x0*x1*x2*y[1]*y[2]*y[9]*y[23]*y[24]*y[39]*y[51]*\
y[52]-2.*x1*x2*y[1]*y[2]*y[3]*y[9]*y[23]*y[24]*y[39]*y[51]*y[52]-x0*x2*y[1]\
*y[4]*y[9]*y[23]*y[24]*y[39]*y[51]*y[52]-x0*x1*x2*y[1]*y[4]*y[9]*y[23]*y[24\
]*y[39]*y[51]*y[52]-2.*x1*x2*y[1]*y[3]*y[4]*y[9]*y[23]*y[24]*y[39]*y[51]*y[\
52]+x0*x2*y[1]*y[5]*y[9]*y[23]*y[24]*y[39]*y[51]*y[52]+x0*x1*x2*y[1]*y[5]*y\
[9]*y[23]*y[24]*y[39]*y[51]*y[52]+2.*x1*x2*y[1]*y[3]*y[5]*y[9]*y[23]*y[24]*\
y[39]*y[51]*y[52]-2.*x0*y[1]*y[4]*y[7]*y[9]*y[23]*y[24]*y[39]*y[51]*y[52]-4\
.*x1*y[1]*y[3]*y[4]*y[7]*y[9]*y[23]*y[24]*y[39]*y[51]*y[52]-x0*x1*x2*y[1]*y\
[2]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52]-x1*x2*y[1]*y[2]*y[3]*y[26]*y[36]*y[\
37]*y[39]*y[51]*y[52]-x0*x1*x2*y[1]*y[4]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52\
]-x1*x2*y[1]*y[3]*y[4]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52]+x0*x1*x2*y[1]*y[\
5]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52]+x1*x2*y[1]*y[3]*y[5]*y[26]*y[36]*y[3\
7]*y[39]*y[51]*y[52]-2.*x1*y[1]*y[3]*y[4]*y[7]*y[26]*y[36]*y[37]*y[39]*y[51\
]*y[52]-x1*y[1]*y[2]*y[3]*y[53]*y[54]*y[55]-x1*x2*y[1]*y[2]*y[3]*y[53]*y[54\
]*y[55]-x1*x2*y[1]*y[3]*y[4]*y[53]*y[54]*y[55]+x1*x2*y[1]*y[3]*y[5]*y[53]*y\
[54]*y[55]-x1*y[1]*y[3]*y[4]*y[7]*y[53]*y[54]*y[55]-x0*y[1]*y[4]*y[7]*y[56]\
*y[57]*y[58]-x1*y[1]*y[3]*y[4]*y[7]*y[56]*y[57]*y[58])+pow(lambda,4)*(x1*x2\
*y[1]*y[2]*y[3]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52]*y[53]*y[54]*y[55]+x1*x2\
*y[1]*y[3]*y[4]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52]*y[53]*y[54]*y[55]-x1*x2\
*y[1]*y[3]*y[5]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52]*y[53]*y[54]*y[55]+2.*x1\
*y[1]*y[3]*y[4]*y[7]*y[26]*y[36]*y[37]*y[39]*y[51]*y[52]*y[53]*y[54]*y[55]+\
2.*x1*y[1]*y[3]*y[4]*y[7]*y[9]*y[23]*y[24]*y[26]*y[36]*y[37]*y[56]*y[57]*y[\
58]+x1*y[1]*y[3]*y[4]*y[7]*y[53]*y[54]*y[55]*y[56]*y[57]*y[58])));
return (FOUT);
}
double Pt8t1(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[6];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=em[1];
y[4]=x2*x2;
y[5]=esx[0];
FOUT=(1.-x0)*x0*(y[1]*y[2]+2.*x1*y[1]*y[2]+2.*x0*x1*y[1]*y[2]+x2*y[1]*y[2]+x\
1*x2*y[1]*y[2]+2.*x0*x1*x2*y[1]*y[2]+x2*y[1]*y[3]+x1*x2*y[1]*y[3]+2.*x0*x1*\
x2*y[1]*y[3]+y[1]*y[3]*y[4]+2.*x0*x1*y[1]*y[3]*y[4]-x2*y[1]*y[5]-x1*x2*y[1]\
*y[5]-2.*x0*x1*x2*y[1]*y[5]);
return (FOUT);
}
double Pt8t2(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[6];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x0*x0;
y[4]=em[1];
y[5]=esx[0];
FOUT=(1.-x1)*x1*(y[1]*y[2]+2.*x0*y[1]*y[2]+x0*x2*y[1]*y[2]+y[1]*y[2]*y[3]+x2\
*y[1]*y[2]*y[3]+x0*x2*y[1]*y[4]+x2*y[1]*y[3]*y[4]+x2*x2*y[1]*y[3]*y[4]-x0*x\
2*y[1]*y[5]-x2*y[1]*y[3]*y[5]);
return (FOUT);
}
double Pt8t3(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[6];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=em[1];
y[4]=x0*x0;
y[5]=esx[0];
FOUT=(1.-x2)*x2*(y[1]*y[2]+x0*y[1]*y[2]+x0*x1*y[1]*y[2]+x0*y[1]*y[3]+x0*x1*y\
[1]*y[3]+2.*x0*x2*y[1]*y[3]+x1*y[1]*y[2]*y[4]+x1*y[1]*y[3]*y[4]+2.*x1*x2*y[\
1]*y[3]*y[4]-x0*y[1]*y[5]-x0*x1*y[1]*y[5]-x1*y[1]*y[4]*y[5]);
return (FOUT);
}
