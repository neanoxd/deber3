#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int N;
  cin >> N;
    
  if (N < 1 || N > 20) return 1;
    
  double* arr = new double[N];
  double suma = 0;
    
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
    suma += arr[i];
  }
  
  cout << fixed << setprecision(2);
  cout << "Valores: ";
  for (int i = 0; i < N; i++) {
    cout << arr[i] << (i == N - 1 ? "" : " ");
  }
  cout << "\nPromedio: " << (suma / N) << endl;
  delete[] arr;
  arr = nullptr;
  cout << "Memoria liberada." << endl;
}
