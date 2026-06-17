#include <iostream>
using namespace std;

void triplicar(int* n);
void elevarAlCuadrado(int* n);
void resetear(int* n);

int main() {
  int x = 4;
  cout << "x inicial    : " << x << "\n";
  triplicar(&x);
  cout << "tras triplicar: " << x << "\n";
  elevarAlCuadrado(&x);
  cout << "tras cuadrado : " << x << "\n";
  resetear(&x);
  cout << "tras resetear : " << x << "\n";
}

void triplicar(int* n) {
  *n = *n * 3;
}

void elevarAlCuadrado(int* n) {
  *n = (*n) * (*n);
}

void resetear(int* n) {
  *n = 0;
}
