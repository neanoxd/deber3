#include <iostream>
using namespace std;

void doblarElementos(int* arr, int n) {
  for (int i = 0; i < n; i++) {
    arr[i] = arr[i] * 2;
  }
}

void imprimirArreglo(const int* arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  cout << "Original : ";
  imprimirArreglo(arr, 5);
  doblarElementos(arr, 5);
  cout << "Doblado  : ";
  imprimirArreglo(arr, 5);
}

