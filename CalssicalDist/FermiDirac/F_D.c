// Fermi Dirac distribution function
double exp(double);
double fx(double E, double E_F, double k_BT) {
  return 1.0/exp((E - E_F)/K_BT + 1.0)
}
