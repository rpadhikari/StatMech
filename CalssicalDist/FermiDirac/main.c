#include<stdio.h>
#include<math.h>
FILE *fin, *fout;

double F_D(double, double, double);

int main() {
  int i;
  static int n=200;
// Boltzmann constant 1.3806485279×10-23 J/K
// Boltzmann constant 8.617330350×10-5 eV/K
  static double k_B=8.617330350e-05; // energy in eV
  double E, E_F, T, k_BT;
  fin=fopen("in.dat", "r");
  fout=fopen("out.dat", "w");
   
  fscanf(fin,"%lf %lf\n", &E_F, &T);  
  fclose(fin);
  printf("%lf %lf\n", E_F, T);
  k_BT = k_B*T;
  for(i=1; i<=n; i++) {
    E=+0.01*(double) i;
    fprintf(fout,"%lf %lf\n", E, F_D(E, E_F, k_BT));
  }
  fclose(fout);

}

