U[z_]:=z[2]*z[3] + z[1]*(z[2] + z[3])

F[z_]:=ms[1]*z[1]*(z[2]*z[3] + z[1]*(z[2] + z[3])) + 
 ms[2]*z[2]*(z[2]*z[3] + z[1]*(z[2] + z[3])) + 
 z[3]*(-(ssp[1]*z[1]*z[2]) + ms[3]*(z[2]*z[3] + z[1]*(z[2] + z[3])))

Nu[z_]:=1

rank=0

