#include<stdio.h>
#include<math.h>
FILE *fin, *fout;

double fx(double, double, double);

int main() {
  int i;
  static int n=2000;
// Boltzmann constant 1.3806485279×10-23 J/K
// Boltzmann constant 8.617330350×10-5 eV/K
  static double k_B=8.617330350e-05; // energy in eV
  double E, E_F, T1, T2, T3, k_BT;
  fin=fopen("in.dat", "r");
  fout=fopen("out.dat", "w");
   
  fscanf(fin,"%lf %lf %lf %lf\n", &E_F, &T1, &T2, &T3);  
  fclose(fin);
  printf("%lf %lf %lf %lf\n", E_F, T1, T2, T2);
  for(i=1; i<=n; i++) {
    E=0.001*(double) i;
    if(fabs(E != E_F)) {
      fprintf(fout,"%lf %lf %lf %lf\n", E, fx(E,E_F,k_B*T1), 
            fx(E,E_F,k_B*T2), fx(E,E_F,k_B*T3));
    }
  }
  fclose(fout);
}

