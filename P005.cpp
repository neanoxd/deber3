#include <iostream>
using namespace std;

int main() {
  int x = 5, y = 10, z = 15;
  int* p = &x;

  cout << "p -> x: *p=" << *p << "  x=" << x << "\n";
  *p = 99;
  cout << "Modificar *p=" << *p << ": x=" << x << "\n";
  p = &y;
  cout << "p -> y: *p=" << *p << "  y=" << y << "\n";
  *p = 88;
  cout << "Modificar *p=" << *p << ": y=" << y << "\n";
  p = &z;
  cout << "p -> z: *p=" << *p << "  z=" << z << "\n";
  *p = 77;
  cout << "Modificar *p=" << *p << ": z=" << z << "\n";
}
