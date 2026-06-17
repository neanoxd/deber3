#include <iostream>
using namespace std;

int main() {
  int x = 42;
  int* p = &x;
  int** pp = &p;

  cout << "x    = " << x << "\n";
  cout << "*p   = " << *p << "\n";
  cout << "**pp = " << **pp << "\n";

  cout << "dir x via &x : " << &x << "\n";
  cout << "dir x via p  : " << p  << "\n";
  cout << "dir x via *pp: " << *pp << "\n";
  cout << "dir p via &p : " << &p << "\n";
  cout << "dir p via pp : " << pp << "\n";
  **pp = 99;
  cout << "x despues de **pp=99: " << x << "\n";
}
