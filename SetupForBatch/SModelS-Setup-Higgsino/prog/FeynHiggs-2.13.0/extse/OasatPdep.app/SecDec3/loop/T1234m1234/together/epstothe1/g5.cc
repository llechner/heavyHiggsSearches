#include "intfile.hh"

double Pr5(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[74];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x2*x2;
y[4]=em[1];
y[5]=x1*x1;
y[6]=em[2];
y[7]=em[3];
y[8]=esx[0];
y[9]=-x0;
y[10]=1.+y[9];
y[11]=x2*y[1]*y[2];
y[12]=x1*x2*y[1]*y[2];
y[13]=2.*x0*x1*x2*y[1]*y[2];
y[14]=y[1]*y[2]*y[3];
y[15]=2.*x0*y[1]*y[2]*y[3];
y[16]=x1*y[1]*y[4];
y[17]=y[1]*y[4]*y[5];
y[18]=2.*x0*y[1]*y[4]*y[5];
y[19]=x1*x2*y[1]*y[4];
y[20]=2.*x0*x1*x2*y[1]*y[4];
y[21]=y[1]*y[6];
y[22]=x1*y[1]*y[6];
y[23]=2.*x0*x1*y[1]*y[6];
y[24]=x2*y[1]*y[6];
y[25]=2.*x0*x2*y[1]*y[6];
y[26]=x1*y[1]*y[7];
y[27]=x2*y[1]*y[7];
y[28]=-(x1*y[1]*y[8]);
y[29]=-(x1*x2*y[1]*y[8]);
y[30]=-2.*x0*x1*x2*y[1]*y[8];
y[31]=y[11]+y[12]+y[13]+y[14]+y[15]+y[16]+y[17]+y[18]+y[19]+y[20]+y[21]+y[22\
]+y[23]+y[24]+y[25]+y[26]+y[27]+y[28]+y[29]+y[30];
y[32]=lrs[0];
y[33]=x0*x0;
y[34]=-x1;
y[35]=1.+y[34];
y[36]=x0*x2*y[1]*y[2];
y[37]=x2*y[1]*y[2]*y[33];
y[38]=x0*y[1]*y[4];
y[39]=2.*x0*x1*y[1]*y[4];
y[40]=2.*x1*y[1]*y[4]*y[33];
y[41]=x0*x2*y[1]*y[4];
y[42]=x2*y[1]*y[4]*y[33];
y[43]=x0*y[1]*y[6];
y[44]=y[1]*y[6]*y[33];
y[45]=y[1]*y[7];
y[46]=x0*y[1]*y[7];
y[47]=-(x0*y[1]*y[8]);
y[48]=-(x0*x2*y[1]*y[8]);
y[49]=-(x2*y[1]*y[8]*y[33]);
y[50]=y[36]+y[37]+y[38]+y[39]+y[40]+y[41]+y[42]+y[43]+y[44]+y[45]+y[46]+y[47\
]+y[48]+y[49];
y[51]=lrs[1];
y[52]=-x2;
y[53]=1.+y[52];
y[54]=x0*y[1]*y[2];
y[55]=x0*x1*y[1]*y[2];
y[56]=x1*y[1]*y[2]*y[33];
y[57]=2.*x0*x2*y[1]*y[2];
y[58]=2.*x2*y[1]*y[2]*y[33];
y[59]=x0*x1*y[1]*y[4];
y[60]=x1*y[1]*y[4]*y[33];
y[61]=-(x0*x1*y[1]*y[8]);
y[62]=-(x1*y[1]*y[8]*y[33]);
y[63]=y[43]+y[44]+y[45]+y[46]+y[54]+y[55]+y[56]+y[57]+y[58]+y[59]+y[60]+y[61\
]+y[62];
y[64]=lrs[2];
y[65]=pow(y[10],2);
y[66]=pow(y[31],2);
y[67]=pow(y[32],2);
y[68]=pow(y[35],2);
y[69]=pow(y[50],2);
y[70]=pow(y[51],2);
y[71]=pow(y[53],2);
y[72]=pow(y[63],2);
y[73]=pow(y[64],2);
FOUT=(x0*x1*x2*y[1]*y[2]*y[10]*y[31]*y[32]*y[35]*y[50]*y[51]*y[53]*y[63]*y[6\
4]+x0*x1*x2*y[1]*y[4]*y[10]*y[31]*y[32]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]\
-x0*x1*x2*y[1]*y[8]*y[10]*y[31]*y[32]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]+2\
.*x1*x2*y[1]*y[2]*y[10]*y[31]*y[32]*y[33]*y[35]*y[50]*y[51]*y[53]*y[63]*y[6\
4]+2.*x1*x2*y[1]*y[4]*y[10]*y[31]*y[32]*y[33]*y[35]*y[50]*y[51]*y[53]*y[63]\
*y[64]-2.*x1*x2*y[1]*y[8]*y[10]*y[31]*y[32]*y[33]*y[35]*y[50]*y[51]*y[53]*y\
[63]*y[64]+x1*x2*y[1]*y[2]*y[33]*y[35]*y[50]*y[51]*y[65]*y[66]*y[67]+x1*x2*\
y[1]*y[4]*y[33]*y[35]*y[50]*y[51]*y[65]*y[66]*y[67]+2.*y[1]*y[4]*y[5]*y[33]\
*y[35]*y[50]*y[51]*y[65]*y[66]*y[67]+x1*y[1]*y[6]*y[33]*y[35]*y[50]*y[51]*y\
[65]*y[66]*y[67]-x1*x2*y[1]*y[8]*y[33]*y[35]*y[50]*y[51]*y[65]*y[66]*y[67]+\
x1*x2*y[1]*y[2]*y[33]*y[53]*y[63]*y[64]*y[65]*y[66]*y[67]+2.*y[1]*y[2]*y[3]\
*y[33]*y[53]*y[63]*y[64]*y[65]*y[66]*y[67]+x1*x2*y[1]*y[4]*y[33]*y[53]*y[63\
]*y[64]*y[65]*y[66]*y[67]+x2*y[1]*y[6]*y[33]*y[53]*y[63]*y[64]*y[65]*y[66]*\
y[67]-x1*x2*y[1]*y[8]*y[33]*y[53]*y[63]*y[64]*y[65]*y[66]*y[67]+x0*y[1]*y[4\
]*y[5]*y[10]*y[31]*y[32]*y[68]*y[69]*y[70]+2.*y[1]*y[4]*y[5]*y[10]*y[31]*y[\
32]*y[33]*y[68]*y[69]*y[70]+x0*y[1]*y[2]*y[3]*y[10]*y[31]*y[32]*y[71]*y[72]\
*y[73]+2.*y[1]*y[2]*y[3]*y[10]*y[31]*y[32]*y[33]*y[71]*y[72]*y[73])/(-(x0*x\
2*y[1]*y[2]*y[10]*y[31]*y[32])-x0*x1*x2*y[1]*y[2]*y[10]*y[31]*y[32]-x0*y[1]\
*y[2]*y[3]*y[10]*y[31]*y[32]-x0*x1*y[1]*y[4]*y[10]*y[31]*y[32]-x0*x1*x2*y[1\
]*y[4]*y[10]*y[31]*y[32]-x0*y[1]*y[4]*y[5]*y[10]*y[31]*y[32]-x0*y[1]*y[6]*y\
[10]*y[31]*y[32]-x0*x1*y[1]*y[6]*y[10]*y[31]*y[32]-x0*x2*y[1]*y[6]*y[10]*y[\
31]*y[32]-x0*x1*y[1]*y[7]*y[10]*y[31]*y[32]-x0*x2*y[1]*y[7]*y[10]*y[31]*y[3\
2]+x0*x1*y[1]*y[8]*y[10]*y[31]*y[32]+x0*x1*x2*y[1]*y[8]*y[10]*y[31]*y[32]-2\
.*x1*x2*y[1]*y[2]*y[10]*y[31]*y[32]*y[33]-2.*y[1]*y[2]*y[3]*y[10]*y[31]*y[3\
2]*y[33]-2.*x1*x2*y[1]*y[4]*y[10]*y[31]*y[32]*y[33]-2.*y[1]*y[4]*y[5]*y[10]\
*y[31]*y[32]*y[33]-2.*x1*y[1]*y[6]*y[10]*y[31]*y[32]*y[33]-2.*x2*y[1]*y[6]*\
y[10]*y[31]*y[32]*y[33]+2.*x1*x2*y[1]*y[8]*y[10]*y[31]*y[32]*y[33]-x0*x1*x2\
*y[1]*y[2]*y[35]*y[50]*y[51]-x0*x1*y[1]*y[4]*y[35]*y[50]*y[51]-x0*x1*x2*y[1\
]*y[4]*y[35]*y[50]*y[51]-2.*x0*y[1]*y[4]*y[5]*y[35]*y[50]*y[51]-x0*x1*y[1]*\
y[6]*y[35]*y[50]*y[51]-x1*y[1]*y[7]*y[35]*y[50]*y[51]-x0*x1*y[1]*y[7]*y[35]\
*y[50]*y[51]+x0*x1*y[1]*y[8]*y[35]*y[50]*y[51]+x0*x1*x2*y[1]*y[8]*y[35]*y[5\
0]*y[51]-x1*x2*y[1]*y[2]*y[33]*y[35]*y[50]*y[51]-x1*x2*y[1]*y[4]*y[33]*y[35\
]*y[50]*y[51]-2.*y[1]*y[4]*y[5]*y[33]*y[35]*y[50]*y[51]-x1*y[1]*y[6]*y[33]*\
y[35]*y[50]*y[51]+x1*x2*y[1]*y[8]*y[33]*y[35]*y[50]*y[51]-x0*x2*y[1]*y[2]*y\
[53]*y[63]*y[64]-x0*x1*x2*y[1]*y[2]*y[53]*y[63]*y[64]-2.*x0*y[1]*y[2]*y[3]*\
y[53]*y[63]*y[64]-x0*x1*x2*y[1]*y[4]*y[53]*y[63]*y[64]-x0*x2*y[1]*y[6]*y[53\
]*y[63]*y[64]-x2*y[1]*y[7]*y[53]*y[63]*y[64]-x0*x2*y[1]*y[7]*y[53]*y[63]*y[\
64]+x0*x1*x2*y[1]*y[8]*y[53]*y[63]*y[64]-x1*x2*y[1]*y[2]*y[33]*y[53]*y[63]*\
y[64]-2.*y[1]*y[2]*y[3]*y[33]*y[53]*y[63]*y[64]-x1*x2*y[1]*y[4]*y[33]*y[53]\
*y[63]*y[64]-x2*y[1]*y[6]*y[33]*y[53]*y[63]*y[64]+x1*x2*y[1]*y[8]*y[33]*y[5\
3]*y[63]*y[64]);
return (FOUT);
}
double Pm5(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[74];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x2*x2;
y[4]=em[1];
y[5]=x1*x1;
y[6]=em[2];
y[7]=em[3];
y[8]=esx[0];
y[9]=-x0;
y[10]=1.+y[9];
y[11]=x2*y[1]*y[2];
y[12]=x1*x2*y[1]*y[2];
y[13]=2.*x0*x1*x2*y[1]*y[2];
y[14]=y[1]*y[2]*y[3];
y[15]=2.*x0*y[1]*y[2]*y[3];
y[16]=x1*y[1]*y[4];
y[17]=y[1]*y[4]*y[5];
y[18]=2.*x0*y[1]*y[4]*y[5];
y[19]=x1*x2*y[1]*y[4];
y[20]=2.*x0*x1*x2*y[1]*y[4];
y[21]=y[1]*y[6];
y[22]=x1*y[1]*y[6];
y[23]=2.*x0*x1*y[1]*y[6];
y[24]=x2*y[1]*y[6];
y[25]=2.*x0*x2*y[1]*y[6];
y[26]=x1*y[1]*y[7];
y[27]=x2*y[1]*y[7];
y[28]=-(x1*y[1]*y[8]);
y[29]=-(x1*x2*y[1]*y[8]);
y[30]=-2.*x0*x1*x2*y[1]*y[8];
y[31]=y[11]+y[12]+y[13]+y[14]+y[15]+y[16]+y[17]+y[18]+y[19]+y[20]+y[21]+y[22\
]+y[23]+y[24]+y[25]+y[26]+y[27]+y[28]+y[29]+y[30];
y[32]=lrs[0];
y[33]=x0*x0;
y[34]=-x1;
y[35]=1.+y[34];
y[36]=x0*x2*y[1]*y[2];
y[37]=x2*y[1]*y[2]*y[33];
y[38]=x0*y[1]*y[4];
y[39]=2.*x0*x1*y[1]*y[4];
y[40]=2.*x1*y[1]*y[4]*y[33];
y[41]=x0*x2*y[1]*y[4];
y[42]=x2*y[1]*y[4]*y[33];
y[43]=x0*y[1]*y[6];
y[44]=y[1]*y[6]*y[33];
y[45]=y[1]*y[7];
y[46]=x0*y[1]*y[7];
y[47]=-(x0*y[1]*y[8]);
y[48]=-(x0*x2*y[1]*y[8]);
y[49]=-(x2*y[1]*y[8]*y[33]);
y[50]=y[36]+y[37]+y[38]+y[39]+y[40]+y[41]+y[42]+y[43]+y[44]+y[45]+y[46]+y[47\
]+y[48]+y[49];
y[51]=lrs[1];
y[52]=-x2;
y[53]=1.+y[52];
y[54]=x0*y[1]*y[2];
y[55]=x0*x1*y[1]*y[2];
y[56]=x1*y[1]*y[2]*y[33];
y[57]=2.*x0*x2*y[1]*y[2];
y[58]=2.*x2*y[1]*y[2]*y[33];
y[59]=x0*x1*y[1]*y[4];
y[60]=x1*y[1]*y[4]*y[33];
y[61]=-(x0*x1*y[1]*y[8]);
y[62]=-(x1*y[1]*y[8]*y[33]);
y[63]=y[43]+y[44]+y[45]+y[46]+y[54]+y[55]+y[56]+y[57]+y[58]+y[59]+y[60]+y[61\
]+y[62];
y[64]=lrs[2];
y[65]=pow(y[10],2);
y[66]=pow(y[31],2);
y[67]=pow(y[32],2);
y[68]=pow(y[35],2);
y[69]=pow(y[50],2);
y[70]=pow(y[51],2);
y[71]=pow(y[53],2);
y[72]=pow(y[63],2);
y[73]=pow(y[64],2);
FOUT=pow(lambda*(-(x0*x2*y[1]*y[2]*y[10]*y[31]*y[32])-x0*x1*x2*y[1]*y[2]*y[1\
0]*y[31]*y[32]-x0*y[1]*y[2]*y[3]*y[10]*y[31]*y[32]-x0*x1*y[1]*y[4]*y[10]*y[\
31]*y[32]-x0*x1*x2*y[1]*y[4]*y[10]*y[31]*y[32]-x0*y[1]*y[4]*y[5]*y[10]*y[31\
]*y[32]-x0*y[1]*y[6]*y[10]*y[31]*y[32]-x0*x1*y[1]*y[6]*y[10]*y[31]*y[32]-x0\
*x2*y[1]*y[6]*y[10]*y[31]*y[32]-x0*x1*y[1]*y[7]*y[10]*y[31]*y[32]-x0*x2*y[1\
]*y[7]*y[10]*y[31]*y[32]+x0*x1*y[1]*y[8]*y[10]*y[31]*y[32]+x0*x1*x2*y[1]*y[\
8]*y[10]*y[31]*y[32]-2.*x1*x2*y[1]*y[2]*y[10]*y[31]*y[32]*y[33]-2.*y[1]*y[2\
]*y[3]*y[10]*y[31]*y[32]*y[33]-2.*x1*x2*y[1]*y[4]*y[10]*y[31]*y[32]*y[33]-2\
.*y[1]*y[4]*y[5]*y[10]*y[31]*y[32]*y[33]-2.*x1*y[1]*y[6]*y[10]*y[31]*y[32]*\
y[33]-2.*x2*y[1]*y[6]*y[10]*y[31]*y[32]*y[33]+2.*x1*x2*y[1]*y[8]*y[10]*y[31\
]*y[32]*y[33]-x0*x1*x2*y[1]*y[2]*y[35]*y[50]*y[51]-x0*x1*y[1]*y[4]*y[35]*y[\
50]*y[51]-x0*x1*x2*y[1]*y[4]*y[35]*y[50]*y[51]-2.*x0*y[1]*y[4]*y[5]*y[35]*y\
[50]*y[51]-x0*x1*y[1]*y[6]*y[35]*y[50]*y[51]-x1*y[1]*y[7]*y[35]*y[50]*y[51]\
-x0*x1*y[1]*y[7]*y[35]*y[50]*y[51]+x0*x1*y[1]*y[8]*y[35]*y[50]*y[51]+x0*x1*\
x2*y[1]*y[8]*y[35]*y[50]*y[51]-x1*x2*y[1]*y[2]*y[33]*y[35]*y[50]*y[51]-x1*x\
2*y[1]*y[4]*y[33]*y[35]*y[50]*y[51]-2.*y[1]*y[4]*y[5]*y[33]*y[35]*y[50]*y[5\
1]-x1*y[1]*y[6]*y[33]*y[35]*y[50]*y[51]+x1*x2*y[1]*y[8]*y[33]*y[35]*y[50]*y\
[51]-x0*x2*y[1]*y[2]*y[53]*y[63]*y[64]-x0*x1*x2*y[1]*y[2]*y[53]*y[63]*y[64]\
-2.*x0*y[1]*y[2]*y[3]*y[53]*y[63]*y[64]-x0*x1*x2*y[1]*y[4]*y[53]*y[63]*y[64\
]-x0*x2*y[1]*y[6]*y[53]*y[63]*y[64]-x2*y[1]*y[7]*y[53]*y[63]*y[64]-x0*x2*y[\
1]*y[7]*y[53]*y[63]*y[64]+x0*x1*x2*y[1]*y[8]*y[53]*y[63]*y[64]-x1*x2*y[1]*y\
[2]*y[33]*y[53]*y[63]*y[64]-2.*y[1]*y[2]*y[3]*y[33]*y[53]*y[63]*y[64]-x1*x2\
*y[1]*y[4]*y[33]*y[53]*y[63]*y[64]-x2*y[1]*y[6]*y[33]*y[53]*y[63]*y[64]+x1*\
x2*y[1]*y[8]*y[33]*y[53]*y[63]*y[64])+pow(lambda,3)*(x0*x1*x2*y[1]*y[2]*y[1\
0]*y[31]*y[32]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]+x0*x1*x2*y[1]*y[4]*y[10]\
*y[31]*y[32]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]-x0*x1*x2*y[1]*y[8]*y[10]*y\
[31]*y[32]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]+2.*x1*x2*y[1]*y[2]*y[10]*y[3\
1]*y[32]*y[33]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]+2.*x1*x2*y[1]*y[4]*y[10]\
*y[31]*y[32]*y[33]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]-2.*x1*x2*y[1]*y[8]*y\
[10]*y[31]*y[32]*y[33]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]+x1*x2*y[1]*y[2]*\
y[33]*y[35]*y[50]*y[51]*y[65]*y[66]*y[67]+x1*x2*y[1]*y[4]*y[33]*y[35]*y[50]\
*y[51]*y[65]*y[66]*y[67]+2.*y[1]*y[4]*y[5]*y[33]*y[35]*y[50]*y[51]*y[65]*y[\
66]*y[67]+x1*y[1]*y[6]*y[33]*y[35]*y[50]*y[51]*y[65]*y[66]*y[67]-x1*x2*y[1]\
*y[8]*y[33]*y[35]*y[50]*y[51]*y[65]*y[66]*y[67]+x1*x2*y[1]*y[2]*y[33]*y[53]\
*y[63]*y[64]*y[65]*y[66]*y[67]+2.*y[1]*y[2]*y[3]*y[33]*y[53]*y[63]*y[64]*y[\
65]*y[66]*y[67]+x1*x2*y[1]*y[4]*y[33]*y[53]*y[63]*y[64]*y[65]*y[66]*y[67]+x\
2*y[1]*y[6]*y[33]*y[53]*y[63]*y[64]*y[65]*y[66]*y[67]-x1*x2*y[1]*y[8]*y[33]\
*y[53]*y[63]*y[64]*y[65]*y[66]*y[67]+x0*y[1]*y[4]*y[5]*y[10]*y[31]*y[32]*y[\
68]*y[69]*y[70]+2.*y[1]*y[4]*y[5]*y[10]*y[31]*y[32]*y[33]*y[68]*y[69]*y[70]\
+x0*y[1]*y[2]*y[3]*y[10]*y[31]*y[32]*y[71]*y[72]*y[73]+2.*y[1]*y[2]*y[3]*y[\
10]*y[31]*y[32]*y[33]*y[71]*y[72]*y[73]),2)+pow(x0*x1*x2*y[1]*y[2]+x0*y[1]*\
y[2]*y[3]+x0*x1*x2*y[1]*y[4]+x0*y[1]*y[4]*y[5]+x0*x1*y[1]*y[6]+x0*x2*y[1]*y\
[6]+x0*x1*y[1]*y[7]+x0*x2*y[1]*y[7]-x0*x1*x2*y[1]*y[8]+y[26]+y[27]+x1*x2*y[\
1]*y[2]*y[33]+y[1]*y[2]*y[3]*y[33]+x1*x2*y[1]*y[4]*y[33]+y[1]*y[4]*y[5]*y[3\
3]+x1*y[1]*y[6]*y[33]+x2*y[1]*y[6]*y[33]-x1*x2*y[1]*y[8]*y[33]+y[36]+y[43]+\
y[45]+y[59]+y[61]+lambda*lambda*(-(x0*x1*x2*y[1]*y[2]*y[10]*y[31]*y[32]*y[3\
5]*y[50]*y[51])-x0*x1*y[1]*y[4]*y[10]*y[31]*y[32]*y[35]*y[50]*y[51]-x0*x1*x\
2*y[1]*y[4]*y[10]*y[31]*y[32]*y[35]*y[50]*y[51]-2.*x0*y[1]*y[4]*y[5]*y[10]*\
y[31]*y[32]*y[35]*y[50]*y[51]-x0*x1*y[1]*y[6]*y[10]*y[31]*y[32]*y[35]*y[50]\
*y[51]-x0*x1*y[1]*y[7]*y[10]*y[31]*y[32]*y[35]*y[50]*y[51]+x0*x1*y[1]*y[8]*\
y[10]*y[31]*y[32]*y[35]*y[50]*y[51]+x0*x1*x2*y[1]*y[8]*y[10]*y[31]*y[32]*y[\
35]*y[50]*y[51]-2.*x1*x2*y[1]*y[2]*y[10]*y[31]*y[32]*y[33]*y[35]*y[50]*y[51\
]-2.*x1*x2*y[1]*y[4]*y[10]*y[31]*y[32]*y[33]*y[35]*y[50]*y[51]-4.*y[1]*y[4]\
*y[5]*y[10]*y[31]*y[32]*y[33]*y[35]*y[50]*y[51]-2.*x1*y[1]*y[6]*y[10]*y[31]\
*y[32]*y[33]*y[35]*y[50]*y[51]+2.*x1*x2*y[1]*y[8]*y[10]*y[31]*y[32]*y[33]*y\
[35]*y[50]*y[51]-x0*x2*y[1]*y[2]*y[10]*y[31]*y[32]*y[53]*y[63]*y[64]-x0*x1*\
x2*y[1]*y[2]*y[10]*y[31]*y[32]*y[53]*y[63]*y[64]-2.*x0*y[1]*y[2]*y[3]*y[10]\
*y[31]*y[32]*y[53]*y[63]*y[64]-x0*x1*x2*y[1]*y[4]*y[10]*y[31]*y[32]*y[53]*y\
[63]*y[64]-x0*x2*y[1]*y[6]*y[10]*y[31]*y[32]*y[53]*y[63]*y[64]-x0*x2*y[1]*y\
[7]*y[10]*y[31]*y[32]*y[53]*y[63]*y[64]+x0*x1*x2*y[1]*y[8]*y[10]*y[31]*y[32\
]*y[53]*y[63]*y[64]-2.*x1*x2*y[1]*y[2]*y[10]*y[31]*y[32]*y[33]*y[53]*y[63]*\
y[64]-4.*y[1]*y[2]*y[3]*y[10]*y[31]*y[32]*y[33]*y[53]*y[63]*y[64]-2.*x1*x2*\
y[1]*y[4]*y[10]*y[31]*y[32]*y[33]*y[53]*y[63]*y[64]-2.*x2*y[1]*y[6]*y[10]*y\
[31]*y[32]*y[33]*y[53]*y[63]*y[64]+2.*x1*x2*y[1]*y[8]*y[10]*y[31]*y[32]*y[3\
3]*y[53]*y[63]*y[64]-x0*x1*x2*y[1]*y[2]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]\
-x0*x1*x2*y[1]*y[4]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]+x0*x1*x2*y[1]*y[8]*\
y[35]*y[50]*y[51]*y[53]*y[63]*y[64]-x1*x2*y[1]*y[2]*y[33]*y[35]*y[50]*y[51]\
*y[53]*y[63]*y[64]-x1*x2*y[1]*y[4]*y[33]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64\
]+x1*x2*y[1]*y[8]*y[33]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]-x1*x2*y[1]*y[2]\
*y[33]*y[65]*y[66]*y[67]-y[1]*y[2]*y[3]*y[33]*y[65]*y[66]*y[67]-x1*x2*y[1]*\
y[4]*y[33]*y[65]*y[66]*y[67]-y[1]*y[4]*y[5]*y[33]*y[65]*y[66]*y[67]-x1*y[1]\
*y[6]*y[33]*y[65]*y[66]*y[67]-x2*y[1]*y[6]*y[33]*y[65]*y[66]*y[67]+x1*x2*y[\
1]*y[8]*y[33]*y[65]*y[66]*y[67]-x0*y[1]*y[4]*y[5]*y[68]*y[69]*y[70]-y[1]*y[\
4]*y[5]*y[33]*y[68]*y[69]*y[70]-x0*y[1]*y[2]*y[3]*y[71]*y[72]*y[73]-y[1]*y[\
2]*y[3]*y[33]*y[71]*y[72]*y[73])+pow(lambda,4)*(x1*x2*y[1]*y[2]*y[33]*y[35]\
*y[50]*y[51]*y[53]*y[63]*y[64]*y[65]*y[66]*y[67]+x1*x2*y[1]*y[4]*y[33]*y[35\
]*y[50]*y[51]*y[53]*y[63]*y[64]*y[65]*y[66]*y[67]-x1*x2*y[1]*y[8]*y[33]*y[3\
5]*y[50]*y[51]*y[53]*y[63]*y[64]*y[65]*y[66]*y[67]+y[1]*y[4]*y[5]*y[33]*y[6\
5]*y[66]*y[67]*y[68]*y[69]*y[70]+y[1]*y[2]*y[3]*y[33]*y[65]*y[66]*y[67]*y[7\
1]*y[72]*y[73]),2);
return (FOUT);
}
double Ps5(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[74];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x2*x2;
y[4]=em[1];
y[5]=x1*x1;
y[6]=em[2];
y[7]=em[3];
y[8]=esx[0];
y[9]=-x0;
y[10]=1.+y[9];
y[11]=x2*y[1]*y[2];
y[12]=x1*x2*y[1]*y[2];
y[13]=2.*x0*x1*x2*y[1]*y[2];
y[14]=y[1]*y[2]*y[3];
y[15]=2.*x0*y[1]*y[2]*y[3];
y[16]=x1*y[1]*y[4];
y[17]=y[1]*y[4]*y[5];
y[18]=2.*x0*y[1]*y[4]*y[5];
y[19]=x1*x2*y[1]*y[4];
y[20]=2.*x0*x1*x2*y[1]*y[4];
y[21]=y[1]*y[6];
y[22]=x1*y[1]*y[6];
y[23]=2.*x0*x1*y[1]*y[6];
y[24]=x2*y[1]*y[6];
y[25]=2.*x0*x2*y[1]*y[6];
y[26]=x1*y[1]*y[7];
y[27]=x2*y[1]*y[7];
y[28]=-(x1*y[1]*y[8]);
y[29]=-(x1*x2*y[1]*y[8]);
y[30]=-2.*x0*x1*x2*y[1]*y[8];
y[31]=y[11]+y[12]+y[13]+y[14]+y[15]+y[16]+y[17]+y[18]+y[19]+y[20]+y[21]+y[22\
]+y[23]+y[24]+y[25]+y[26]+y[27]+y[28]+y[29]+y[30];
y[32]=lrs[0];
y[33]=x0*x0;
y[34]=-x1;
y[35]=1.+y[34];
y[36]=x0*x2*y[1]*y[2];
y[37]=x2*y[1]*y[2]*y[33];
y[38]=x0*y[1]*y[4];
y[39]=2.*x0*x1*y[1]*y[4];
y[40]=2.*x1*y[1]*y[4]*y[33];
y[41]=x0*x2*y[1]*y[4];
y[42]=x2*y[1]*y[4]*y[33];
y[43]=x0*y[1]*y[6];
y[44]=y[1]*y[6]*y[33];
y[45]=y[1]*y[7];
y[46]=x0*y[1]*y[7];
y[47]=-(x0*y[1]*y[8]);
y[48]=-(x0*x2*y[1]*y[8]);
y[49]=-(x2*y[1]*y[8]*y[33]);
y[50]=y[36]+y[37]+y[38]+y[39]+y[40]+y[41]+y[42]+y[43]+y[44]+y[45]+y[46]+y[47\
]+y[48]+y[49];
y[51]=lrs[1];
y[52]=-x2;
y[53]=1.+y[52];
y[54]=x0*y[1]*y[2];
y[55]=x0*x1*y[1]*y[2];
y[56]=x1*y[1]*y[2]*y[33];
y[57]=2.*x0*x2*y[1]*y[2];
y[58]=2.*x2*y[1]*y[2]*y[33];
y[59]=x0*x1*y[1]*y[4];
y[60]=x1*y[1]*y[4]*y[33];
y[61]=-(x0*x1*y[1]*y[8]);
y[62]=-(x1*y[1]*y[8]*y[33]);
y[63]=y[43]+y[44]+y[45]+y[46]+y[54]+y[55]+y[56]+y[57]+y[58]+y[59]+y[60]+y[61\
]+y[62];
y[64]=lrs[2];
y[65]=pow(y[10],2);
y[66]=pow(y[31],2);
y[67]=pow(y[32],2);
y[68]=pow(y[35],2);
y[69]=pow(y[50],2);
y[70]=pow(y[51],2);
y[71]=pow(y[53],2);
y[72]=pow(y[63],2);
y[73]=pow(y[64],2);
FOUT=lambda*(-(x0*x2*y[1]*y[2]*y[10]*y[31]*y[32])-x0*x1*x2*y[1]*y[2]*y[10]*y\
[31]*y[32]-x0*y[1]*y[2]*y[3]*y[10]*y[31]*y[32]-x0*x1*y[1]*y[4]*y[10]*y[31]*\
y[32]-x0*x1*x2*y[1]*y[4]*y[10]*y[31]*y[32]-x0*y[1]*y[4]*y[5]*y[10]*y[31]*y[\
32]-x0*y[1]*y[6]*y[10]*y[31]*y[32]-x0*x1*y[1]*y[6]*y[10]*y[31]*y[32]-x0*x2*\
y[1]*y[6]*y[10]*y[31]*y[32]-x0*x1*y[1]*y[7]*y[10]*y[31]*y[32]-x0*x2*y[1]*y[\
7]*y[10]*y[31]*y[32]+x0*x1*y[1]*y[8]*y[10]*y[31]*y[32]+x0*x1*x2*y[1]*y[8]*y\
[10]*y[31]*y[32]-2.*x1*x2*y[1]*y[2]*y[10]*y[31]*y[32]*y[33]-2.*y[1]*y[2]*y[\
3]*y[10]*y[31]*y[32]*y[33]-2.*x1*x2*y[1]*y[4]*y[10]*y[31]*y[32]*y[33]-2.*y[\
1]*y[4]*y[5]*y[10]*y[31]*y[32]*y[33]-2.*x1*y[1]*y[6]*y[10]*y[31]*y[32]*y[33\
]-2.*x2*y[1]*y[6]*y[10]*y[31]*y[32]*y[33]+2.*x1*x2*y[1]*y[8]*y[10]*y[31]*y[\
32]*y[33]-x0*x1*x2*y[1]*y[2]*y[35]*y[50]*y[51]-x0*x1*y[1]*y[4]*y[35]*y[50]*\
y[51]-x0*x1*x2*y[1]*y[4]*y[35]*y[50]*y[51]-2.*x0*y[1]*y[4]*y[5]*y[35]*y[50]\
*y[51]-x0*x1*y[1]*y[6]*y[35]*y[50]*y[51]-x1*y[1]*y[7]*y[35]*y[50]*y[51]-x0*\
x1*y[1]*y[7]*y[35]*y[50]*y[51]+x0*x1*y[1]*y[8]*y[35]*y[50]*y[51]+x0*x1*x2*y\
[1]*y[8]*y[35]*y[50]*y[51]-x1*x2*y[1]*y[2]*y[33]*y[35]*y[50]*y[51]-x1*x2*y[\
1]*y[4]*y[33]*y[35]*y[50]*y[51]-2.*y[1]*y[4]*y[5]*y[33]*y[35]*y[50]*y[51]-x\
1*y[1]*y[6]*y[33]*y[35]*y[50]*y[51]+x1*x2*y[1]*y[8]*y[33]*y[35]*y[50]*y[51]\
-x0*x2*y[1]*y[2]*y[53]*y[63]*y[64]-x0*x1*x2*y[1]*y[2]*y[53]*y[63]*y[64]-2.*\
x0*y[1]*y[2]*y[3]*y[53]*y[63]*y[64]-x0*x1*x2*y[1]*y[4]*y[53]*y[63]*y[64]-x0\
*x2*y[1]*y[6]*y[53]*y[63]*y[64]-x2*y[1]*y[7]*y[53]*y[63]*y[64]-x0*x2*y[1]*y\
[7]*y[53]*y[63]*y[64]+x0*x1*x2*y[1]*y[8]*y[53]*y[63]*y[64]-x1*x2*y[1]*y[2]*\
y[33]*y[53]*y[63]*y[64]-2.*y[1]*y[2]*y[3]*y[33]*y[53]*y[63]*y[64]-x1*x2*y[1\
]*y[4]*y[33]*y[53]*y[63]*y[64]-x2*y[1]*y[6]*y[33]*y[53]*y[63]*y[64]+x1*x2*y\
[1]*y[8]*y[33]*y[53]*y[63]*y[64])+pow(lambda,3)*(x0*x1*x2*y[1]*y[2]*y[10]*y\
[31]*y[32]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]+x0*x1*x2*y[1]*y[4]*y[10]*y[3\
1]*y[32]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]-x0*x1*x2*y[1]*y[8]*y[10]*y[31]\
*y[32]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]+2.*x1*x2*y[1]*y[2]*y[10]*y[31]*y\
[32]*y[33]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]+2.*x1*x2*y[1]*y[4]*y[10]*y[3\
1]*y[32]*y[33]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]-2.*x1*x2*y[1]*y[8]*y[10]\
*y[31]*y[32]*y[33]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]+x1*x2*y[1]*y[2]*y[33\
]*y[35]*y[50]*y[51]*y[65]*y[66]*y[67]+x1*x2*y[1]*y[4]*y[33]*y[35]*y[50]*y[5\
1]*y[65]*y[66]*y[67]+2.*y[1]*y[4]*y[5]*y[33]*y[35]*y[50]*y[51]*y[65]*y[66]*\
y[67]+x1*y[1]*y[6]*y[33]*y[35]*y[50]*y[51]*y[65]*y[66]*y[67]-x1*x2*y[1]*y[8\
]*y[33]*y[35]*y[50]*y[51]*y[65]*y[66]*y[67]+x1*x2*y[1]*y[2]*y[33]*y[53]*y[6\
3]*y[64]*y[65]*y[66]*y[67]+2.*y[1]*y[2]*y[3]*y[33]*y[53]*y[63]*y[64]*y[65]*\
y[66]*y[67]+x1*x2*y[1]*y[4]*y[33]*y[53]*y[63]*y[64]*y[65]*y[66]*y[67]+x2*y[\
1]*y[6]*y[33]*y[53]*y[63]*y[64]*y[65]*y[66]*y[67]-x1*x2*y[1]*y[8]*y[33]*y[5\
3]*y[63]*y[64]*y[65]*y[66]*y[67]+x0*y[1]*y[4]*y[5]*y[10]*y[31]*y[32]*y[68]*\
y[69]*y[70]+2.*y[1]*y[4]*y[5]*y[10]*y[31]*y[32]*y[33]*y[68]*y[69]*y[70]+x0*\
y[1]*y[2]*y[3]*y[10]*y[31]*y[32]*y[71]*y[72]*y[73]+2.*y[1]*y[2]*y[3]*y[10]*\
y[31]*y[32]*y[33]*y[71]*y[72]*y[73]);
return (FOUT);
}
double Pa5(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[74];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x2*x2;
y[4]=em[1];
y[5]=x1*x1;
y[6]=em[2];
y[7]=em[3];
y[8]=esx[0];
y[9]=-x0;
y[10]=1.+y[9];
y[11]=x2*y[1]*y[2];
y[12]=x1*x2*y[1]*y[2];
y[13]=2.*x0*x1*x2*y[1]*y[2];
y[14]=y[1]*y[2]*y[3];
y[15]=2.*x0*y[1]*y[2]*y[3];
y[16]=x1*y[1]*y[4];
y[17]=y[1]*y[4]*y[5];
y[18]=2.*x0*y[1]*y[4]*y[5];
y[19]=x1*x2*y[1]*y[4];
y[20]=2.*x0*x1*x2*y[1]*y[4];
y[21]=y[1]*y[6];
y[22]=x1*y[1]*y[6];
y[23]=2.*x0*x1*y[1]*y[6];
y[24]=x2*y[1]*y[6];
y[25]=2.*x0*x2*y[1]*y[6];
y[26]=x1*y[1]*y[7];
y[27]=x2*y[1]*y[7];
y[28]=-(x1*y[1]*y[8]);
y[29]=-(x1*x2*y[1]*y[8]);
y[30]=-2.*x0*x1*x2*y[1]*y[8];
y[31]=y[11]+y[12]+y[13]+y[14]+y[15]+y[16]+y[17]+y[18]+y[19]+y[20]+y[21]+y[22\
]+y[23]+y[24]+y[25]+y[26]+y[27]+y[28]+y[29]+y[30];
y[32]=lrs[0];
y[33]=x0*x0;
y[34]=-x1;
y[35]=1.+y[34];
y[36]=x0*x2*y[1]*y[2];
y[37]=x2*y[1]*y[2]*y[33];
y[38]=x0*y[1]*y[4];
y[39]=2.*x0*x1*y[1]*y[4];
y[40]=2.*x1*y[1]*y[4]*y[33];
y[41]=x0*x2*y[1]*y[4];
y[42]=x2*y[1]*y[4]*y[33];
y[43]=x0*y[1]*y[6];
y[44]=y[1]*y[6]*y[33];
y[45]=y[1]*y[7];
y[46]=x0*y[1]*y[7];
y[47]=-(x0*y[1]*y[8]);
y[48]=-(x0*x2*y[1]*y[8]);
y[49]=-(x2*y[1]*y[8]*y[33]);
y[50]=y[36]+y[37]+y[38]+y[39]+y[40]+y[41]+y[42]+y[43]+y[44]+y[45]+y[46]+y[47\
]+y[48]+y[49];
y[51]=lrs[1];
y[52]=-x2;
y[53]=1.+y[52];
y[54]=x0*y[1]*y[2];
y[55]=x0*x1*y[1]*y[2];
y[56]=x1*y[1]*y[2]*y[33];
y[57]=2.*x0*x2*y[1]*y[2];
y[58]=2.*x2*y[1]*y[2]*y[33];
y[59]=x0*x1*y[1]*y[4];
y[60]=x1*y[1]*y[4]*y[33];
y[61]=-(x0*x1*y[1]*y[8]);
y[62]=-(x1*y[1]*y[8]*y[33]);
y[63]=y[43]+y[44]+y[45]+y[46]+y[54]+y[55]+y[56]+y[57]+y[58]+y[59]+y[60]+y[61\
]+y[62];
y[64]=lrs[2];
y[65]=pow(y[10],2);
y[66]=pow(y[31],2);
y[67]=pow(y[32],2);
y[68]=pow(y[35],2);
y[69]=pow(y[50],2);
y[70]=pow(y[51],2);
y[71]=pow(y[53],2);
y[72]=pow(y[63],2);
y[73]=pow(y[64],2);
FOUT=(lambda*(-(x0*x2*y[1]*y[2]*y[10]*y[31]*y[32])-x0*x1*x2*y[1]*y[2]*y[10]*\
y[31]*y[32]-x0*y[1]*y[2]*y[3]*y[10]*y[31]*y[32]-x0*x1*y[1]*y[4]*y[10]*y[31]\
*y[32]-x0*x1*x2*y[1]*y[4]*y[10]*y[31]*y[32]-x0*y[1]*y[4]*y[5]*y[10]*y[31]*y\
[32]-x0*y[1]*y[6]*y[10]*y[31]*y[32]-x0*x1*y[1]*y[6]*y[10]*y[31]*y[32]-x0*x2\
*y[1]*y[6]*y[10]*y[31]*y[32]-x0*x1*y[1]*y[7]*y[10]*y[31]*y[32]-x0*x2*y[1]*y\
[7]*y[10]*y[31]*y[32]+x0*x1*y[1]*y[8]*y[10]*y[31]*y[32]+x0*x1*x2*y[1]*y[8]*\
y[10]*y[31]*y[32]-2.*x1*x2*y[1]*y[2]*y[10]*y[31]*y[32]*y[33]-2.*y[1]*y[2]*y\
[3]*y[10]*y[31]*y[32]*y[33]-2.*x1*x2*y[1]*y[4]*y[10]*y[31]*y[32]*y[33]-2.*y\
[1]*y[4]*y[5]*y[10]*y[31]*y[32]*y[33]-2.*x1*y[1]*y[6]*y[10]*y[31]*y[32]*y[3\
3]-2.*x2*y[1]*y[6]*y[10]*y[31]*y[32]*y[33]+2.*x1*x2*y[1]*y[8]*y[10]*y[31]*y\
[32]*y[33]-x0*x1*x2*y[1]*y[2]*y[35]*y[50]*y[51]-x0*x1*y[1]*y[4]*y[35]*y[50]\
*y[51]-x0*x1*x2*y[1]*y[4]*y[35]*y[50]*y[51]-2.*x0*y[1]*y[4]*y[5]*y[35]*y[50\
]*y[51]-x0*x1*y[1]*y[6]*y[35]*y[50]*y[51]-x1*y[1]*y[7]*y[35]*y[50]*y[51]-x0\
*x1*y[1]*y[7]*y[35]*y[50]*y[51]+x0*x1*y[1]*y[8]*y[35]*y[50]*y[51]+x0*x1*x2*\
y[1]*y[8]*y[35]*y[50]*y[51]-x1*x2*y[1]*y[2]*y[33]*y[35]*y[50]*y[51]-x1*x2*y\
[1]*y[4]*y[33]*y[35]*y[50]*y[51]-2.*y[1]*y[4]*y[5]*y[33]*y[35]*y[50]*y[51]-\
x1*y[1]*y[6]*y[33]*y[35]*y[50]*y[51]+x1*x2*y[1]*y[8]*y[33]*y[35]*y[50]*y[51\
]-x0*x2*y[1]*y[2]*y[53]*y[63]*y[64]-x0*x1*x2*y[1]*y[2]*y[53]*y[63]*y[64]-2.\
*x0*y[1]*y[2]*y[3]*y[53]*y[63]*y[64]-x0*x1*x2*y[1]*y[4]*y[53]*y[63]*y[64]-x\
0*x2*y[1]*y[6]*y[53]*y[63]*y[64]-x2*y[1]*y[7]*y[53]*y[63]*y[64]-x0*x2*y[1]*\
y[7]*y[53]*y[63]*y[64]+x0*x1*x2*y[1]*y[8]*y[53]*y[63]*y[64]-x1*x2*y[1]*y[2]\
*y[33]*y[53]*y[63]*y[64]-2.*y[1]*y[2]*y[3]*y[33]*y[53]*y[63]*y[64]-x1*x2*y[\
1]*y[4]*y[33]*y[53]*y[63]*y[64]-x2*y[1]*y[6]*y[33]*y[53]*y[63]*y[64]+x1*x2*\
y[1]*y[8]*y[33]*y[53]*y[63]*y[64])+pow(lambda,3)*(x0*x1*x2*y[1]*y[2]*y[10]*\
y[31]*y[32]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]+x0*x1*x2*y[1]*y[4]*y[10]*y[\
31]*y[32]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]-x0*x1*x2*y[1]*y[8]*y[10]*y[31\
]*y[32]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]+2.*x1*x2*y[1]*y[2]*y[10]*y[31]*\
y[32]*y[33]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]+2.*x1*x2*y[1]*y[4]*y[10]*y[\
31]*y[32]*y[33]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]-2.*x1*x2*y[1]*y[8]*y[10\
]*y[31]*y[32]*y[33]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]+x1*x2*y[1]*y[2]*y[3\
3]*y[35]*y[50]*y[51]*y[65]*y[66]*y[67]+x1*x2*y[1]*y[4]*y[33]*y[35]*y[50]*y[\
51]*y[65]*y[66]*y[67]+2.*y[1]*y[4]*y[5]*y[33]*y[35]*y[50]*y[51]*y[65]*y[66]\
*y[67]+x1*y[1]*y[6]*y[33]*y[35]*y[50]*y[51]*y[65]*y[66]*y[67]-x1*x2*y[1]*y[\
8]*y[33]*y[35]*y[50]*y[51]*y[65]*y[66]*y[67]+x1*x2*y[1]*y[2]*y[33]*y[53]*y[\
63]*y[64]*y[65]*y[66]*y[67]+2.*y[1]*y[2]*y[3]*y[33]*y[53]*y[63]*y[64]*y[65]\
*y[66]*y[67]+x1*x2*y[1]*y[4]*y[33]*y[53]*y[63]*y[64]*y[65]*y[66]*y[67]+x2*y\
[1]*y[6]*y[33]*y[53]*y[63]*y[64]*y[65]*y[66]*y[67]-x1*x2*y[1]*y[8]*y[33]*y[\
53]*y[63]*y[64]*y[65]*y[66]*y[67]+x0*y[1]*y[4]*y[5]*y[10]*y[31]*y[32]*y[68]\
*y[69]*y[70]+2.*y[1]*y[4]*y[5]*y[10]*y[31]*y[32]*y[33]*y[68]*y[69]*y[70]+x0\
*y[1]*y[2]*y[3]*y[10]*y[31]*y[32]*y[71]*y[72]*y[73]+2.*y[1]*y[2]*y[3]*y[10]\
*y[31]*y[32]*y[33]*y[71]*y[72]*y[73]))/(lambda*(x0*x1*x2*y[1]*y[2]+x0*y[1]*\
y[2]*y[3]+x0*x1*x2*y[1]*y[4]+x0*y[1]*y[4]*y[5]+x0*x1*y[1]*y[6]+x0*x2*y[1]*y\
[6]+x0*x1*y[1]*y[7]+x0*x2*y[1]*y[7]-x0*x1*x2*y[1]*y[8]+y[26]+y[27]+x1*x2*y[\
1]*y[2]*y[33]+y[1]*y[2]*y[3]*y[33]+x1*x2*y[1]*y[4]*y[33]+y[1]*y[4]*y[5]*y[3\
3]+x1*y[1]*y[6]*y[33]+x2*y[1]*y[6]*y[33]-x1*x2*y[1]*y[8]*y[33]+y[36]+y[43]+\
y[45]+y[59]+y[61]+lambda*lambda*(-(x0*x1*x2*y[1]*y[2]*y[10]*y[31]*y[32]*y[3\
5]*y[50]*y[51])-x0*x1*y[1]*y[4]*y[10]*y[31]*y[32]*y[35]*y[50]*y[51]-x0*x1*x\
2*y[1]*y[4]*y[10]*y[31]*y[32]*y[35]*y[50]*y[51]-2.*x0*y[1]*y[4]*y[5]*y[10]*\
y[31]*y[32]*y[35]*y[50]*y[51]-x0*x1*y[1]*y[6]*y[10]*y[31]*y[32]*y[35]*y[50]\
*y[51]-x0*x1*y[1]*y[7]*y[10]*y[31]*y[32]*y[35]*y[50]*y[51]+x0*x1*y[1]*y[8]*\
y[10]*y[31]*y[32]*y[35]*y[50]*y[51]+x0*x1*x2*y[1]*y[8]*y[10]*y[31]*y[32]*y[\
35]*y[50]*y[51]-2.*x1*x2*y[1]*y[2]*y[10]*y[31]*y[32]*y[33]*y[35]*y[50]*y[51\
]-2.*x1*x2*y[1]*y[4]*y[10]*y[31]*y[32]*y[33]*y[35]*y[50]*y[51]-4.*y[1]*y[4]\
*y[5]*y[10]*y[31]*y[32]*y[33]*y[35]*y[50]*y[51]-2.*x1*y[1]*y[6]*y[10]*y[31]\
*y[32]*y[33]*y[35]*y[50]*y[51]+2.*x1*x2*y[1]*y[8]*y[10]*y[31]*y[32]*y[33]*y\
[35]*y[50]*y[51]-x0*x2*y[1]*y[2]*y[10]*y[31]*y[32]*y[53]*y[63]*y[64]-x0*x1*\
x2*y[1]*y[2]*y[10]*y[31]*y[32]*y[53]*y[63]*y[64]-2.*x0*y[1]*y[2]*y[3]*y[10]\
*y[31]*y[32]*y[53]*y[63]*y[64]-x0*x1*x2*y[1]*y[4]*y[10]*y[31]*y[32]*y[53]*y\
[63]*y[64]-x0*x2*y[1]*y[6]*y[10]*y[31]*y[32]*y[53]*y[63]*y[64]-x0*x2*y[1]*y\
[7]*y[10]*y[31]*y[32]*y[53]*y[63]*y[64]+x0*x1*x2*y[1]*y[8]*y[10]*y[31]*y[32\
]*y[53]*y[63]*y[64]-2.*x1*x2*y[1]*y[2]*y[10]*y[31]*y[32]*y[33]*y[53]*y[63]*\
y[64]-4.*y[1]*y[2]*y[3]*y[10]*y[31]*y[32]*y[33]*y[53]*y[63]*y[64]-2.*x1*x2*\
y[1]*y[4]*y[10]*y[31]*y[32]*y[33]*y[53]*y[63]*y[64]-2.*x2*y[1]*y[6]*y[10]*y\
[31]*y[32]*y[33]*y[53]*y[63]*y[64]+2.*x1*x2*y[1]*y[8]*y[10]*y[31]*y[32]*y[3\
3]*y[53]*y[63]*y[64]-x0*x1*x2*y[1]*y[2]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]\
-x0*x1*x2*y[1]*y[4]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]+x0*x1*x2*y[1]*y[8]*\
y[35]*y[50]*y[51]*y[53]*y[63]*y[64]-x1*x2*y[1]*y[2]*y[33]*y[35]*y[50]*y[51]\
*y[53]*y[63]*y[64]-x1*x2*y[1]*y[4]*y[33]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64\
]+x1*x2*y[1]*y[8]*y[33]*y[35]*y[50]*y[51]*y[53]*y[63]*y[64]-x1*x2*y[1]*y[2]\
*y[33]*y[65]*y[66]*y[67]-y[1]*y[2]*y[3]*y[33]*y[65]*y[66]*y[67]-x1*x2*y[1]*\
y[4]*y[33]*y[65]*y[66]*y[67]-y[1]*y[4]*y[5]*y[33]*y[65]*y[66]*y[67]-x1*y[1]\
*y[6]*y[33]*y[65]*y[66]*y[67]-x2*y[1]*y[6]*y[33]*y[65]*y[66]*y[67]+x1*x2*y[\
1]*y[8]*y[33]*y[65]*y[66]*y[67]-x0*y[1]*y[4]*y[5]*y[68]*y[69]*y[70]-y[1]*y[\
4]*y[5]*y[33]*y[68]*y[69]*y[70]-x0*y[1]*y[2]*y[3]*y[71]*y[72]*y[73]-y[1]*y[\
2]*y[3]*y[33]*y[71]*y[72]*y[73])+pow(lambda,4)*(x1*x2*y[1]*y[2]*y[33]*y[35]\
*y[50]*y[51]*y[53]*y[63]*y[64]*y[65]*y[66]*y[67]+x1*x2*y[1]*y[4]*y[33]*y[35\
]*y[50]*y[51]*y[53]*y[63]*y[64]*y[65]*y[66]*y[67]-x1*x2*y[1]*y[8]*y[33]*y[3\
5]*y[50]*y[51]*y[53]*y[63]*y[64]*y[65]*y[66]*y[67]+y[1]*y[4]*y[5]*y[33]*y[6\
5]*y[66]*y[67]*y[68]*y[69]*y[70]+y[1]*y[2]*y[3]*y[33]*y[65]*y[66]*y[67]*y[7\
1]*y[72]*y[73])));
return (FOUT);
}
double Pt5t1(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[9];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x2*x2;
y[4]=em[1];
y[5]=x1*x1;
y[6]=em[2];
y[7]=em[3];
y[8]=esx[0];
FOUT=(1.-x0)*x0*(x2*y[1]*y[2]+x1*x2*y[1]*y[2]+2.*x0*x1*x2*y[1]*y[2]+y[1]*y[2\
]*y[3]+2.*x0*y[1]*y[2]*y[3]+x1*y[1]*y[4]+x1*x2*y[1]*y[4]+2.*x0*x1*x2*y[1]*y\
[4]+y[1]*y[4]*y[5]+2.*x0*y[1]*y[4]*y[5]+y[1]*y[6]+x1*y[1]*y[6]+2.*x0*x1*y[1\
]*y[6]+x2*y[1]*y[6]+2.*x0*x2*y[1]*y[6]+x1*y[1]*y[7]+x2*y[1]*y[7]-x1*y[1]*y[\
8]-x1*x2*y[1]*y[8]-2.*x0*x1*x2*y[1]*y[8]);
return (FOUT);
}
double Pt5t2(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[8];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=em[1];
y[4]=x0*x0;
y[5]=em[2];
y[6]=em[3];
y[7]=esx[0];
FOUT=(1.-x1)*x1*(x0*x2*y[1]*y[2]+x0*y[1]*y[3]+2.*x0*x1*y[1]*y[3]+x0*x2*y[1]*\
y[3]+x2*y[1]*y[2]*y[4]+2.*x1*y[1]*y[3]*y[4]+x2*y[1]*y[3]*y[4]+x0*y[1]*y[5]+\
y[1]*y[4]*y[5]+y[1]*y[6]+x0*y[1]*y[6]-x0*y[1]*y[7]-x0*x2*y[1]*y[7]-x2*y[1]*\
y[4]*y[7]);
return (FOUT);
}
double Pt5t3(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double y[8];
double FOUT;
y[1]=1./bi;
y[2]=em[0];
y[3]=x0*x0;
y[4]=em[1];
y[5]=em[2];
y[6]=em[3];
y[7]=esx[0];
FOUT=(1.-x2)*x2*(x0*y[1]*y[2]+x0*x1*y[1]*y[2]+2.*x0*x2*y[1]*y[2]+x1*y[1]*y[2\
]*y[3]+2.*x2*y[1]*y[2]*y[3]+x0*x1*y[1]*y[4]+x1*y[1]*y[3]*y[4]+x0*y[1]*y[5]+\
y[1]*y[3]*y[5]+y[1]*y[6]+x0*y[1]*y[6]-x0*x1*y[1]*y[7]-x1*y[1]*y[3]*y[7]);
return (FOUT);
}
