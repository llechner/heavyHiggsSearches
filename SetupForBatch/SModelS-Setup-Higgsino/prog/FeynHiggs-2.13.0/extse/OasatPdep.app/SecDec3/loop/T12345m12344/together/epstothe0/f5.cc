#include "intfile.hh"

dcmplx Pf5(const double x[], double es[], double esx[], double em[], double lambda, double lrs[], double bi) {
double x0=x[0];
double x1=x[1];
double x2=x[2];
double x3=x[3];
dcmplx y[205];
dcmplx FOUT;
dcmplx MYI(0.,1.);
y[1]=1./bi;
y[2]=em[0];
y[3]=em[3];
y[4]=esx[0];
y[5]=em[1];
y[6]=em[2];
y[7]=x0*x0;
y[8]=y[1]*y[5];
y[9]=y[1]*y[3];
y[10]=2.*x0*y[1]*y[3];
y[11]=x2*x2;
y[12]=-(y[1]*y[4]);
y[13]=-x1;
y[14]=1.+y[13];
y[15]=y[1]*y[2];
y[16]=2.*x3*y[1]*y[2];
y[17]=x0*y[1]*y[6];
y[18]=x0*y[1]*y[3];
y[19]=-x0;
y[20]=1.+y[19];
y[21]=x1*x1;
y[22]=lrs[0];
y[23]=x1*y[1]*y[6];
y[24]=y[1]*y[6]*y[21];
y[25]=x1*x2*y[1]*y[6];
y[26]=x1*y[1]*y[3];
y[27]=2.*x2*y[1]*y[3];
y[28]=x1*x2*y[1]*y[3];
y[29]=y[1]*y[3]*y[11];
y[30]=x3*y[1]*y[3];
y[31]=-(x2*y[1]*y[4]);
y[32]=-(x2*x3*y[1]*y[4]);
y[33]=x1*x3*y[1]*y[2];
y[34]=x1*x2*x3*y[1]*y[2];
y[35]=x1*y[1]*y[5];
y[36]=x1*x2*y[1]*y[5];
y[37]=2.*x0*y[1]*y[6]*y[21];
y[38]=2.*x0*x2*y[1]*y[6]*y[21];
y[39]=x1*x3*y[1]*y[6];
y[40]=x3*y[1]*y[6]*y[21];
y[41]=x1*x2*x3*y[1]*y[6];
y[42]=2.*x0*x1*y[1]*y[3];
y[43]=4.*x0*x1*x2*y[1]*y[3];
y[44]=2.*x0*x1*y[1]*y[3]*y[11];
y[45]=x1*x3*y[1]*y[3];
y[46]=2.*x2*x3*y[1]*y[3];
y[47]=x1*x2*x3*y[1]*y[3];
y[48]=x3*y[1]*y[3]*y[11];
y[49]=-(x1*y[1]*y[4]);
y[50]=-2.*x0*x1*x2*y[1]*y[4];
y[51]=-(x1*x2*x3*y[1]*y[4]);
y[52]=y[9]+y[23]+y[24]+y[25]+y[26]+y[27]+y[28]+y[29]+y[30]+y[31]+y[32]+y[33]\
+y[34]+y[35]+y[36]+y[37]+y[38]+y[39]+y[40]+y[41]+y[42]+y[43]+y[44]+y[45]+y[\
46]+y[47]+y[48]+y[49]+y[50]+y[51];
y[53]=lrs[1];
y[54]=-x2;
y[55]=1.+y[54];
y[56]=lambda*lambda;
y[57]=x0*y[1]*y[2];
y[58]=x0*x2*y[1]*y[2];
y[59]=2.*x0*x1*y[1]*y[6];
y[60]=x0*x2*y[1]*y[6];
y[61]=x0*x2*y[1]*y[3];
y[62]=-(x0*x2*y[1]*y[4]);
y[63]=y[8]+y[12]+y[15]+y[16]+y[17]+y[18]+y[57]+y[58]+y[59]+y[60]+y[61]+y[62]\
;
y[64]=x3*y[1]*y[2];
y[65]=x2*x3*y[1]*y[2];
y[66]=x2*y[1]*y[5];
y[67]=y[1]*y[6];
y[68]=2.*x1*y[1]*y[6];
y[69]=4.*x0*x1*y[1]*y[6];
y[70]=x2*y[1]*y[6];
y[71]=4.*x0*x1*x2*y[1]*y[6];
y[72]=x3*y[1]*y[6];
y[73]=2.*x1*x3*y[1]*y[6];
y[74]=x2*x3*y[1]*y[6];
y[75]=x2*y[1]*y[3];
y[76]=4.*x0*x2*y[1]*y[3];
y[77]=2.*x0*y[1]*y[3]*y[11];
y[78]=x2*x3*y[1]*y[3];
y[79]=-2.*x0*x2*y[1]*y[4];
y[80]=y[8]+y[9]+y[10]+y[12]+y[30]+y[32]+y[64]+y[65]+y[66]+y[67]+y[68]+y[69]+\
y[70]+y[71]+y[72]+y[73]+y[74]+y[75]+y[76]+y[77]+y[78]+y[79];
y[81]=x1*y[1]*y[2];
y[82]=x1*x2*y[1]*y[2];
y[83]=-(x1*x2*y[1]*y[4]);
y[84]=y[9]+y[23]+y[24]+y[25]+y[26]+y[27]+y[28]+y[29]+y[31]+y[81]+y[82]+y[83]\
;
y[85]=x0*x3*y[1]*y[2];
y[86]=x0*y[1]*y[5];
y[87]=2.*x1*y[1]*y[6]*y[7];
y[88]=x0*x3*y[1]*y[6];
y[89]=2.*x2*y[1]*y[3]*y[7];
y[90]=x0*x3*y[1]*y[3];
y[91]=-(x0*y[1]*y[4]);
y[92]=-(x3*y[1]*y[4]);
y[93]=x0*x2*x3*y[1]*y[2];
y[94]=x3*x3;
y[95]=y[1]*y[2]*y[94];
y[96]=x0*x2*y[1]*y[5];
y[97]=x3*y[1]*y[5];
y[98]=2.*x1*x2*y[1]*y[6]*y[7];
y[99]=2.*x0*x1*x3*y[1]*y[6];
y[100]=x0*x2*x3*y[1]*y[6];
y[101]=y[1]*y[3]*y[7];
y[102]=y[1]*y[3]*y[7]*y[11];
y[103]=x0*x2*x3*y[1]*y[3];
y[104]=-(x2*y[1]*y[4]*y[7]);
y[105]=-(x0*x2*x3*y[1]*y[4]);
y[106]=y[8]+y[17]+y[18]+y[59]+y[60]+y[61]+y[64]+y[85]+y[86]+y[87]+y[88]+y[89\
]+y[90]+y[91]+y[92]+y[93]+y[95]+y[96]+y[97]+y[98]+y[99]+y[100]+y[101]+y[102\
]+y[103]+y[104]+y[105];
y[107]=lrs[2];
y[108]=x0*x1*y[1]*y[2];
y[109]=x0*x1*y[1]*y[6];
y[110]=x0*x1*y[1]*y[3];
y[111]=2.*x0*x2*y[1]*y[3];
y[112]=-(x0*x1*y[1]*y[4]);
y[113]=y[8]+y[10]+y[12]+y[15]+y[16]+y[91]+y[108]+y[109]+y[110]+y[111]+y[112]\
;
y[114]=2.*y[1]*y[6]*y[21];
y[115]=2.*x2*y[1]*y[6]*y[21];
y[116]=2.*x1*y[1]*y[3];
y[117]=4.*x1*x2*y[1]*y[3];
y[118]=2.*x1*y[1]*y[3]*y[11];
y[119]=-2.*x1*x2*y[1]*y[4];
y[120]=y[114]+y[115]+y[116]+y[117]+y[118]+y[119];
y[121]=-(lambda*MYI*x0*y[20]*y[22]*y[120]);
y[122]=-(lambda*MYI*y[20]*y[22]*y[52]);
y[123]=lambda*MYI*x0*y[22]*y[52];
y[124]=1.+y[121]+y[122]+y[123];
y[125]=2.*x0*y[1]*y[6];
y[126]=2.*y[1]*y[6]*y[7];
y[127]=2.*x2*y[1]*y[6]*y[7];
y[128]=2.*x0*x3*y[1]*y[6];
y[129]=y[125]+y[126]+y[127]+y[128];
y[130]=-(lambda*MYI*x1*y[14]*y[53]*y[129]);
y[131]=-(lambda*MYI*y[14]*y[53]*y[106]);
y[132]=lambda*MYI*x1*y[53]*y[106];
y[133]=1.+y[130]+y[131]+y[132];
y[134]=-x3;
y[135]=1.+y[134];
y[136]=2.*y[1]*y[3];
y[137]=4.*x0*x1*y[1]*y[3];
y[138]=2.*x3*y[1]*y[3];
y[139]=-2.*x0*x1*y[1]*y[4];
y[140]=-(x1*x3*y[1]*y[4]);
y[141]=y[12]+y[23]+y[26]+y[27]+y[33]+y[35]+y[37]+y[39]+y[43]+y[45]+y[46]+y[9\
2]+y[136]+y[137]+y[138]+y[139]+y[140];
y[142]=2.*y[1]*y[3]*y[7];
y[143]=-(y[1]*y[4]*y[7]);
y[144]=-(x0*x3*y[1]*y[4]);
y[145]=y[17]+y[18]+y[85]+y[86]+y[87]+y[88]+y[89]+y[90]+y[142]+y[143]+y[144];
y[146]=x0*x1*y[14]*y[20]*y[22]*y[53]*y[56]*y[80]*y[84];
y[147]=-(lambda*MYI*x1*y[14]*y[53]*y[63]*y[124]);
y[148]=y[146]+y[147];
y[149]=2.*x1*y[1]*y[3]*y[7];
y[150]=2.*x0*x3*y[1]*y[3];
y[151]=x0*x1*x3*y[1]*y[2];
y[152]=x0*x1*y[1]*y[5];
y[153]=y[1]*y[6]*y[7]*y[21];
y[154]=x0*x1*x3*y[1]*y[6];
y[155]=2.*x1*x2*y[1]*y[3]*y[7];
y[156]=x0*x1*x3*y[1]*y[3];
y[157]=2.*x0*x2*x3*y[1]*y[3];
y[158]=-(x1*y[1]*y[4]*y[7]);
y[159]=-(x0*x1*x3*y[1]*y[4]);
y[160]=y[8]+y[10]+y[64]+y[91]+y[92]+y[95]+y[97]+y[109]+y[110]+y[111]+y[144]+\
y[149]+y[150]+y[151]+y[152]+y[153]+y[154]+y[155]+y[156]+y[157]+y[158]+y[159\
];
y[161]=lrs[3];
y[162]=x0*x1*y[14]*y[20]*y[22]*y[53]*y[56]*y[84]*y[145];
y[163]=-(x0*x1*y[14]*y[20]*y[22]*y[53]*y[56]*y[63]*y[141]);
y[164]=y[162]+y[163];
y[165]=-(x0*x1*y[14]*y[20]*y[22]*y[53]*y[56]*y[63]*y[80]);
y[166]=lambda*MYI*x0*y[20]*y[22]*y[84]*y[133];
y[167]=y[165]+y[166];
y[168]=y[10]+y[149]+y[150];
y[169]=-(lambda*MYI*x2*y[55]*y[107]*y[168]);
y[170]=-(lambda*MYI*y[55]*y[107]*y[160]);
y[171]=lambda*MYI*x2*y[107]*y[160];
y[172]=1.+y[169]+y[170]+y[171];
y[173]=x0*x1*y[14]*y[20]*y[22]*y[53]*y[56]*y[80]*y[141];
y[174]=-(lambda*MYI*x1*y[14]*y[53]*y[124]*y[145]);
y[175]=y[173]+y[174];
y[176]=-(x0*x1*y[14]*y[20]*y[22]*y[53]*y[56]*y[80]*y[145]);
y[177]=lambda*MYI*x0*y[20]*y[22]*y[133]*y[141];
y[178]=y[176]+y[177];
y[179]=pow(y[80],2);
y[180]=x0*x1*y[14]*y[20]*y[22]*y[53]*y[56]*y[179];
y[181]=y[124]*y[133];
y[182]=y[180]+y[181];
y[183]=x2*y[1]*y[2];
y[184]=x0*x1*x2*y[1]*y[2];
y[185]=2.*x1*x3*y[1]*y[2];
y[186]=2.*x2*x3*y[1]*y[2];
y[187]=x0*y[1]*y[6]*y[21];
y[188]=x0*x1*x2*y[1]*y[6];
y[189]=x0*x1*x2*y[1]*y[3];
y[190]=x0*y[1]*y[3]*y[11];
y[191]=-(x0*x1*x2*y[1]*y[4]);
y[192]=y[8]+y[12]+y[15]+y[16]+y[18]+y[31]+y[35]+y[49]+y[62]+y[66]+y[81]+y[10\
8]+y[109]+y[110]+y[111]+y[183]+y[184]+y[185]+y[186]+y[187]+y[188]+y[189]+y[\
190]+y[191];
y[193]=-(lambda*MYI*x1*y[14]*y[53]*y[106]);
y[194]=x1+y[193];
y[195]=-(lambda*MYI*x0*y[20]*y[22]*y[52]);
y[196]=x0+y[195];
y[197]=-(lambda*MYI*x2*y[55]*y[107]*y[160]);
y[198]=x2+y[197];
y[199]=-(lambda*MYI*x3*y[135]*y[161]*y[192]);
y[200]=x3+y[199];
y[201]=pow(y[196],2);
y[202]=pow(y[194],2);
y[203]=pow(y[198],2);
y[204]=pow(y[200],2);
FOUT=(pow(bi,-2)*(-(lambda*MYI*x3*y[63]*y[135]*y[161]*(-(lambda*MYI*x2*y[55]\
*y[107]*y[141]*y[164])-y[148]*y[172]-lambda*MYI*x2*y[55]*y[107]*y[113]*y[17\
5]))+lambda*MYI*x3*y[84]*y[135]*y[161]*(-(lambda*MYI*x2*y[55]*y[107]*y[145]\
*y[164])-y[167]*y[172]-lambda*MYI*x2*y[55]*y[107]*y[113]*y[178])+lambda*MYI\
*x3*y[113]*y[135]*y[161]*(lambda*MYI*x2*y[55]*y[107]*y[145]*y[148]-lambda*M\
YI*x2*y[55]*y[107]*y[141]*y[167]-lambda*MYI*x2*y[55]*y[107]*y[113]*y[182])+\
(lambda*MYI*x2*y[55]*y[107]*y[145]*y[175]-lambda*MYI*x2*y[55]*y[107]*y[141]\
*y[178]+y[172]*y[182])*(1.-lambda*MYI*x3*(2.*y[1]*y[2]+2.*x1*y[1]*y[2]+2.*x\
2*y[1]*y[2])*y[135]*y[161]+lambda*MYI*x3*y[161]*y[192]-lambda*MYI*y[135]*y[\
161]*y[192])))/((y[1]+y[1]*y[194]+y[1]*y[194]*y[196]+y[1]*y[198]+y[1]*y[194\
]*y[196]*y[198]+y[1]*y[200]+y[1]*y[194]*y[200]+y[1]*y[198]*y[200])*(y[8]+y[\
1]*y[5]*y[194]+y[1]*y[3]*y[196]+y[1]*y[3]*y[194]*y[196]-y[1]*y[4]*y[194]*y[\
196]+y[1]*y[5]*y[194]*y[196]+y[1]*y[6]*y[194]*y[196]+y[1]*y[5]*y[198]+2.*y[\
1]*y[3]*y[196]*y[198]-y[1]*y[4]*y[196]*y[198]+y[1]*y[3]*y[194]*y[196]*y[198\
]+y[1]*y[5]*y[194]*y[196]*y[198]+y[1]*y[6]*y[194]*y[196]*y[198]+y[1]*y[2]*y\
[200]-y[1]*y[4]*y[200]+y[1]*y[5]*y[200]+y[1]*y[2]*y[194]*y[200]-y[1]*y[4]*y\
[194]*y[200]+y[1]*y[5]*y[194]*y[200]+y[1]*y[3]*y[196]*y[200]+y[1]*y[2]*y[19\
4]*y[196]*y[200]+y[1]*y[3]*y[194]*y[196]*y[200]+y[1]*y[6]*y[194]*y[196]*y[2\
00]+y[1]*y[2]*y[198]*y[200]-y[1]*y[4]*y[198]*y[200]+y[1]*y[5]*y[198]*y[200]\
+2.*y[1]*y[3]*y[196]*y[198]*y[200]-y[1]*y[4]*y[196]*y[198]*y[200]+y[1]*y[2]\
*y[194]*y[196]*y[198]*y[200]+y[1]*y[3]*y[194]*y[196]*y[198]*y[200]-y[1]*y[4\
]*y[194]*y[196]*y[198]*y[200]+y[1]*y[6]*y[194]*y[196]*y[198]*y[200]+y[1]*y[\
3]*y[194]*y[201]+2.*y[1]*y[3]*y[194]*y[198]*y[201]-y[1]*y[4]*y[194]*y[198]*\
y[201]+y[1]*y[6]*y[196]*y[202]+y[1]*y[6]*y[196]*y[200]*y[202]+y[1]*y[6]*y[2\
01]*y[202]+y[1]*y[6]*y[198]*y[201]*y[202]+y[1]*y[3]*y[196]*y[203]+y[1]*y[3]\
*y[196]*y[200]*y[203]+y[1]*y[3]*y[194]*y[201]*y[203]+y[1]*y[2]*y[204]+y[1]*\
y[2]*y[194]*y[204]+y[1]*y[2]*y[198]*y[204]));
return (FOUT);
}