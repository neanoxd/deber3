#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  int n;
  cin >> n;
    
  string* nombres = new string[n];
  double* notas = new double[n];
  double suma = 0.0;
  double maxNota = -1.0;
  double minNota = 101.0;
  string nombreMax, nombreMin;
    
  for (int i = 0; i < n; i++) {
    cin >> nombres[i] >> notas[i];
    suma += notas[i];
        
    if (notas[i] > maxNota) {
      maxNota = notas[i];
      nombreMax = nombres[i];
    }
    if (notas[i] < minNota) {
      minNota = notas[i];
      nombreMin = nombres[i];
    }
  }
    
  cout << "=== Reporte ===" << endl;
  cout << fixed << setprecision(2);
    
  for (int i = 0; i < n; i++) {
    cout << nombres[i] << "   : " << notas[i] << endl;
  }
    
  cout << "Promedio: " << (suma / n) << endl;
  cout << "Maxima : " << maxNota << " (" << nombreMax << ")" << endl;
  cout << "Minima : " << minNota << " (" << nombreMin << ")" << endl;
    
  delete[] nombres;
  delete[] notas;
  nombres = nullptr;
  notas = nullptr;
  cout << "Memoria liberada." << endl;
}
