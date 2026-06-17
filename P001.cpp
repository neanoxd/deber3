#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int v = 25;
  int* ptr = &v;

  cout << "Valor     : " << v << "\n";
  cout << "Direccion : " << &v << "\n";
  cout << "ptr guarda: " << ptr << "\n";
  cout << "*ptr      : " << *ptr << "\n";
}

