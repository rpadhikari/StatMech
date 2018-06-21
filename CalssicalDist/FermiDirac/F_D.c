// Fermi Dirac distribution function
double exp(double);
double F_D(double E, double E_F, double k_BT) {
  return 1.0/(exp((E - E_F)/k_BT) + 1.0);
}

