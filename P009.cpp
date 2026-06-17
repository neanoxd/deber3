#include <iostream>
using namespace std;

void imprimirValor(int* p);

int main() {
  int x = 55;
  int* p = &x;
  int* q = nullptr;
  imprimirValor(p);
  imprimirValor(q);
}

void imprimirValor(int* p) {
  if (p == nullptr) cout << "Puntero nulo - sin valor\n";
  else cout << "Valor: " << *p << "\n";
}
