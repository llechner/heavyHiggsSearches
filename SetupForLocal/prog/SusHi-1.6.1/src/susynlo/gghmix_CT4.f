      real*8 function gghmix_CT4(Mtop,Mstop1,Mstop2,Mgluino,mu,
     & q0,cthetat,sthetat,alpha,beta,
     & muSUSY,c1EWmc2EW,c1EWpc2EW)
c..
c..
      implicit real*8 (a-z)
      data pi/3.14159265358979323846264338328d0/

      mu2 = mu*mu
      lMtop    = dlog(mu2/Mtop/Mtop)
      lMtg = dlog(Mtop*Mtop/Mgluino/Mgluino)
      lMt1 = dlog(Mtop*Mtop/Mstop1/Mstop1)
      lMt2 = dlog(Mtop*Mtop/Mstop2/Mstop2)
c      cthetat = dsqrt(1.d0 - sthetat**2)
c      beta = datan(tanb)
      sbeta = dsin(beta)
      salpha = dsin(alpha)
      calpha = dcos(alpha)
      calphambeta = dcos(alpha - beta)
      q02 = q0*q0

      gghmix_CT4 =
     & c1EWmc2EW*(-(lMtg*Mgluino**2*(Mstop1 - Mstop2)*(Mstop1 + Mstop2)*
     &          (Mstop1**2 + Mstop2**2))/(72.*Mstop1**4*Mstop2**4) + 
     &      (lMt1*(2*Mgluino**2 + Mstop1**2 + 2*Mtop**2))/
     &       (72.*Mstop1**4) - (lMt2*
     &         (2*Mgluino**2 + Mstop2**2 + 2*Mtop**2))/(72.*Mstop2**4)
     &       - ((Mstop1 - Mstop2)*(Mstop1 + Mstop2)*
     &         (Mgluino**2*Mstop1**2 + Mgluino**2*Mstop2**2 + 
     &           Mstop1**2*Mstop2**2 + Mstop1**2*Mtop**2 + 
     &           Mstop2**2*Mtop**2))/(24.*Mstop1**4*Mstop2**4) - 
     &      (lMtop*(Mstop1 - Mstop2)*(Mstop1 + Mstop2)*
     &         (3*Mgluino**2*Mstop1**2 + 3*Mgluino**2*Mstop2**2 + 
     &           Mstop1**2*Mstop2**2 + 3*Mstop1**2*Mtop**2 + 
     &           3*Mstop2**2*Mtop**2))/(72.*Mstop1**4*Mstop2**4) + 
     &      (-(lMtop*(Mstop1 - Mstop2)**3*(Mstop1 + Mstop2)**3)/
     &          (6.*Mstop1**4*Mstop2**4) - 
     &         ((Mstop1 - Mstop2)*(Mstop1 + Mstop2)*
     &            (Mstop1**4 - Mstop1**2*Mstop2**2 + Mstop2**4))/
     &          (6.*Mstop1**4*Mstop2**4) - 
     &         (lMt2*(Mstop1**6 - 4*Mstop1**4*Mstop2**2 + 
     &              2*Mstop1**2*Mstop2**4 - Mstop2**6))/
     &          (12.*Mstop1**4*Mstop2**4) - 
     &         (lMt1*(Mstop1**6 - 2*Mstop1**4*Mstop2**2 + 
     &              4*Mstop1**2*Mstop2**4 - Mstop2**6))/
     &          (12.*Mstop1**4*Mstop2**4))*sthetat**4 + 
     &      ((lMtop*(Mstop1 - Mstop2)**3*(Mstop1 + Mstop2)**3)/
     &          (9.*Mstop1**4*Mstop2**4) + 
     &         ((Mstop1 - Mstop2)*(Mstop1 + Mstop2)*
     &            (Mstop1**4 - Mstop1**2*Mstop2**2 + Mstop2**4))/
     &          (9.*Mstop1**4*Mstop2**4) + 
     &         (lMt2*(Mstop1**6 - 4*Mstop1**4*Mstop2**2 + 
     &              2*Mstop1**2*Mstop2**4 - Mstop2**6))/
     &          (18.*Mstop1**4*Mstop2**4) + 
     &         (lMt1*(Mstop1**6 - 2*Mstop1**4*Mstop2**2 + 
     &              4*Mstop1**2*Mstop2**4 - Mstop2**6))/
     &          (18.*Mstop1**4*Mstop2**4))*sthetat**6 - 
     &      ((-Mgluino**2 + Mstop1**2 - Mtop**2)*
     &         B0fin(Mstop1**2,Mtop,Mgluino,mu))/(72.*Mstop1**4) + 
     &      ((-Mgluino**2 + Mstop2**2 - Mtop**2)*
     &         B0fin(Mstop2**2,Mtop,Mgluino,mu))/(72.*Mstop2**4) + 
     &      sthetat**2*((lMtg*Mgluino**2*(Mstop1 - Mstop2)*
     &            (Mstop1 + Mstop2)*(Mstop1**2 + Mstop2**2))/
     &          (36.*Mstop1**4*Mstop2**4) + 
     &         (lMt2*(2*Mgluino**2*Mstop1**4 + Mstop1**6 - 
     &              3*Mstop1**4*Mstop2**2 + 2*Mstop1**2*Mstop2**4 - 
     &              Mstop2**6 + 2*Mstop1**4*Mtop**2))/
     &          (36.*Mstop1**4*Mstop2**4) + 
     &         (lMtop*(Mstop1 - Mstop2)*(Mstop1 + Mstop2)*
     &            (3*Mgluino**2*Mstop1**2 + 2*Mstop1**4 + 
     &              3*Mgluino**2*Mstop2**2 - 3*Mstop1**2*Mstop2**2 + 
     &              2*Mstop2**4 + 3*Mstop1**2*Mtop**2 + 
     &              3*Mstop2**2*Mtop**2))/(36.*Mstop1**4*Mstop2**4) + 
     &         ((Mstop1 - Mstop2)*(Mstop1 + Mstop2)*
     &            (3*Mgluino**2*Mstop1**2 + 2*Mstop1**4 + 
     &              3*Mgluino**2*Mstop2**2 + Mstop1**2*Mstop2**2 + 
     &              2*Mstop2**4 + 3*Mstop1**2*Mtop**2 + 
     &              3*Mstop2**2*Mtop**2))/(36.*Mstop1**4*Mstop2**4) + 
     &         (lMt1*(Mstop1**6 - 2*Mstop1**4*Mstop2**2 - 
     &              2*Mgluino**2*Mstop2**4 + 3*Mstop1**2*Mstop2**4 - 
     &              Mstop2**6 - 2*Mstop2**4*Mtop**2))/
     &          (36.*Mstop1**4*Mstop2**4) + 
     &         ((-Mgluino**2 + Mstop1**2 - Mtop**2)*
     &            B0fin(Mstop1**2,Mtop,Mgluino,mu))/(36.*Mstop1**4) - 
     &         ((-Mgluino**2 + Mstop2**2 - Mtop**2)*
     &            B0fin(Mstop2**2,Mtop,Mgluino,mu))/(36.*Mstop2**4)) + 
     &      cthetat*sthetat**3*((lMtop*Mgluino*(Mstop1 - Mstop2)**2*
     &            (Mstop1 + Mstop2)**2*Mtop)/(9.*Mstop1**4*Mstop2**4)
     &          + (lMt2*Mgluino*(Mstop1**2 - 3*Mstop2**2)*Mtop)/
     &          (9.*(Mstop1 - Mstop2)*Mstop2**4*(Mstop1 + Mstop2)) + 
     &         (lMt1*Mgluino*(3*Mstop1**2 - Mstop2**2)*Mtop)/
     &          (9.*Mstop1**4*(Mstop1 - Mstop2)*(Mstop1 + Mstop2)) + 
     &         (Mgluino*(Mstop1**4 + Mstop2**4)*Mtop)/
     &          (9.*Mstop1**4*Mstop2**4) + 
     &         (Mgluino*Mtop*B0fin(Mstop1**2,Mtop,Mgluino,mu))/
     &          (9.*Mstop1**4) + 
     &         (Mgluino*Mtop*B0fin(Mstop2**2,Mtop,Mgluino,mu))/
     &          (9.*Mstop2**4) - 
     &         (2*Mgluino*Mtop*B0fin(q0**2,Mtop,Mgluino,mu))/
     &          (9.*Mstop1**2*Mstop2**2)) + 
     &      cthetat*sthetat*(-(lMtop*Mgluino*(Mstop1 - Mstop2)**2*
     &             (Mstop1 + Mstop2)**2*Mtop)/(18.*Mstop1**4*Mstop2**4)
     &           - (lMt2*Mgluino*(Mstop1**2 - 3*Mstop2**2)*Mtop)/
     &          (18.*(Mstop1 - Mstop2)*Mstop2**4*(Mstop1 + Mstop2)) - 
     &         (lMt1*Mgluino*(3*Mstop1**2 - Mstop2**2)*Mtop)/
     &          (18.*Mstop1**4*(Mstop1 - Mstop2)*(Mstop1 + Mstop2)) - 
     &         (Mgluino*(Mstop1**4 + Mstop2**4)*Mtop)/
     &          (18.*Mstop1**4*Mstop2**4) - 
     &         (Mgluino*Mtop*B0fin(Mstop1**2,Mtop,Mgluino,mu))/
     &          (18.*Mstop1**4) - 
     &         (Mgluino*Mtop*B0fin(Mstop2**2,Mtop,Mgluino,mu))/
     &          (18.*Mstop2**4) + 
     &         (Mgluino*Mtop*B0fin(q0**2,Mtop,Mgluino,mu))/
     &          (9.*Mstop1**2*Mstop2**2)))
      end