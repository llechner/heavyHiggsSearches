#include "intfile.hh"

dcmplx Pf1(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
dcmplx y[119];
dcmplx FOUT;
dcmplx MYI(0.,1.);
y[1]=1./bi;
y[2]=em[1];
y[3]=-x0;
y[4]=1.+y[3];
y[5]=em[0];
y[6]=y[1]*y[5];
y[7]=esx[0];
y[8]=lrs[0];
y[9]=x1*y[1]*y[5];
y[10]=x1*y[1]*y[2];
y[11]=x1*x1;
y[12]=y[1]*y[2]*y[11];
y[13]=-(x1*y[1]*y[7]);
y[14]=y[6]+y[9]+y[10]+y[12]+y[13];
y[15]=-x1;
y[16]=1.+y[15];
y[17]=lrs[1];
y[18]=y[1]*y[2];
y[19]=2.*x1*y[1]*y[2];
y[20]=-(y[1]*y[7]);
y[21]=x0*y[1]*y[5];
y[22]=x0*y[1]*y[2];
y[23]=2.*x0*x1*y[1]*y[2];
y[24]=-(x0*y[1]*y[7]);
y[25]=y[6]+y[18]+y[19]+y[20]+y[21]+y[22]+y[23]+y[24];
y[26]=-(lambda*MYI*x0*y[4]*y[8]*y[14]);
y[27]=x0+y[26];
y[28]=-(lambda*MYI*x1*y[16]*y[17]*y[25]);
y[29]=x1+y[28];
y[30]=pow(y[29],2);
y[31]=pow(bi,-2);
y[32]=lambda*lambda;
y[33]=y[6]+y[18]+y[19]+y[20];
y[34]=pow(y[33],2);
y[35]=x0*x1*y[4]*y[8]*y[16]*y[17]*y[32]*y[34];
y[36]=-(lambda*MYI*y[4]*y[8]*y[14]);
y[37]=lambda*MYI*x0*y[8]*y[14];
y[38]=1.+y[36]+y[37];
y[39]=2.*y[1]*y[2];
y[40]=2.*x0*y[1]*y[2];
y[41]=y[39]+y[40];
y[42]=-(lambda*MYI*x1*y[16]*y[17]*y[41]);
y[43]=-(lambda*MYI*y[16]*y[17]*y[25]);
y[44]=lambda*MYI*x1*y[17]*y[25];
y[45]=1.+y[42]+y[43]+y[44];
y[46]=y[38]*y[45];
y[47]=y[35]+y[46];
y[48]=y[1]*y[27];
y[49]=y[1]*y[29];
y[50]=y[1]*y[27]*y[29];
y[51]=y[1]+y[48]+y[49]+y[50];
y[52]=1./y[51];
y[53]=y[1]*y[5]*y[27];
y[54]=y[1]*y[5]*y[29];
y[55]=y[1]*y[2]*y[29];
y[56]=-(y[1]*y[7]*y[29]);
y[57]=y[1]*y[5]*y[27]*y[29];
y[58]=y[1]*y[2]*y[27]*y[29];
y[59]=-(y[1]*y[7]*y[27]*y[29]);
y[60]=y[1]*y[2]*y[30];
y[61]=y[1]*y[2]*y[27]*y[30];
y[62]=y[6]+y[53]+y[54]+y[55]+y[56]+y[57]+y[58]+y[59]+y[60]+y[61];
y[63]=1./y[62];
y[64]=x0*x0;
y[65]=1./x2;
y[66]=2.*x0*y[1]*y[5];
y[67]=y[1]*y[5]*y[64];
y[68]=x0*x1*y[1]*y[5];
y[69]=x1*y[1]*y[5]*y[64];
y[70]=x0*x1*y[1]*y[2];
y[71]=-(x0*x1*y[1]*y[7]);
y[72]=lrs[2];
y[73]=-x2;
y[74]=1.+y[73];
y[75]=y[21]+y[22]+y[24]+y[67];
y[76]=2.*x2*y[1]*y[5];
y[77]=2.*x0*x2*y[1]*y[5];
y[78]=x2*x2;
y[79]=x1*x2*y[1]*y[5];
y[80]=2.*x0*x1*x2*y[1]*y[5];
y[81]=2.*x0*y[1]*y[5]*y[78];
y[82]=x1*x2*y[1]*y[2];
y[83]=-(x1*x2*y[1]*y[7]);
y[84]=y[6]+y[9]+y[10]+y[12]+y[13]+y[76]+y[77]+y[79]+y[80]+y[81]+y[82]+y[83];
y[85]=2.*y[1]*y[5];
y[86]=2.*x0*x1*y[1]*y[5];
y[87]=4.*x0*x2*y[1]*y[5];
y[88]=y[9]+y[10]+y[13]+y[66]+y[85]+y[86]+y[87];
y[89]=x2*y[1]*y[5];
y[90]=x2*y[1]*y[2];
y[91]=-(x2*y[1]*y[7]);
y[92]=y[6]+y[18]+y[19]+y[20]+y[77]+y[89]+y[90]+y[91];
y[93]=x0*x2*y[1]*y[5];
y[94]=x2*y[1]*y[5]*y[64];
y[95]=x0*x2*y[1]*y[2];
y[96]=-(x0*x2*y[1]*y[7]);
y[97]=y[6]+y[18]+y[19]+y[20]+y[21]+y[22]+y[23]+y[24]+y[93]+y[94]+y[95]+y[96]\
;
y[98]=2.*x1*x2*y[1]*y[5];
y[99]=2.*y[1]*y[5]*y[78];
y[100]=y[76]+y[98]+y[99];
y[101]=-(lambda*MYI*x0*y[4]*y[8]*y[100]);
y[102]=-(lambda*MYI*y[4]*y[8]*y[84]);
y[103]=lambda*MYI*x0*y[8]*y[84];
y[104]=1.+y[101]+y[102]+y[103];
y[105]=-(lambda*MYI*y[16]*y[17]*y[97]);
y[106]=lambda*MYI*x1*y[17]*y[97];
y[107]=1.+y[42]+y[105]+y[106];
y[108]=2.*x2*y[1]*y[5]*y[64];
y[109]=y[66]+y[67]+y[68]+y[69]+y[70]+y[71]+y[108];
y[110]=-(lambda*MYI*y[72]*y[74]*y[109]);
y[111]=-(lambda*MYI*x0*y[4]*y[8]*y[84]);
y[112]=x0+y[111];
y[113]=-(lambda*MYI*x1*y[16]*y[17]*y[97]);
y[114]=x1+y[113];
y[115]=pow(y[114],2);
y[116]=-(lambda*MYI*x2*y[72]*y[74]*y[109]);
y[117]=x2+y[116];
y[118]=pow(y[112],2);
FOUT=myLog(bi)*y[31]*y[47]*y[52]*y[63]+3.*myLog(y[51])*y[31]*y[47]*y[52]*y[6\
3]-2.*myLog(y[62])*y[31]*y[47]*y[52]*y[63]+myLog(1.-lambda*MYI*(y[66]+y[67]\
+y[68]+y[69]+y[70]+y[71])*y[72])*y[31]*y[47]*y[52]*y[63]-y[31]*y[47]*y[52]*\
y[63]*y[65]+(y[31]*y[65]*(lambda*MYI*x2*y[72]*y[74]*y[75]*(x0*x1*y[4]*y[8]*\
y[16]*y[17]*y[32]*y[88]*y[92]-lambda*MYI*x1*y[16]*y[17]*y[75]*y[104])-lambd\
a*MYI*x2*y[72]*y[74]*y[88]*(-(x0*x1*y[4]*y[8]*y[16]*y[17]*y[32]*y[75]*y[92]\
)+lambda*MYI*x0*y[4]*y[8]*y[88]*y[107])+(x0*x1*pow(y[92],2)*y[4]*y[8]*y[16]\
*y[17]*y[32]+y[104]*y[107])*(1.-2.*lambda*MYI*x2*y[1]*y[5]*y[64]*y[72]*y[74\
]+lambda*MYI*x2*y[72]*y[109]+y[110])))/((1.+y[110])*(y[1]+y[1]*y[112]+y[1]*\
y[114]+y[1]*y[112]*y[114]+y[1]*y[112]*y[117])*(y[6]+y[1]*y[5]*y[112]+y[1]*y\
[2]*y[114]+y[1]*y[5]*y[114]-y[1]*y[7]*y[114]+y[1]*y[2]*y[112]*y[114]+y[1]*y\
[5]*y[112]*y[114]-y[1]*y[7]*y[112]*y[114]+y[1]*y[2]*y[115]+y[1]*y[2]*y[112]\
*y[115]+2.*y[1]*y[5]*y[112]*y[117]+y[1]*y[2]*y[112]*y[114]*y[117]+y[1]*y[5]\
*y[112]*y[114]*y[117]-y[1]*y[7]*y[112]*y[114]*y[117]+pow(y[117],2)*y[1]*y[5\
]*y[118]+y[1]*y[5]*y[117]*y[118]+y[1]*y[5]*y[114]*y[117]*y[118]));
return (FOUT);
}