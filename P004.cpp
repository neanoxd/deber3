#include <iostream>
using namespace std;

int main() {
  int a = 42;
  double b = 3.14;
  char c = 'A';
  bool d = 1;
  int* ptra = &a;
  double* ptrb = &b;
  char* ptrc = &c;
  bool* ptrd = &d;

  cout << "int   : valor=" << a << "     dir=" << ptra << "  *ptr=" << *ptra << "\n";
  cout << "double: valor=" << b << "   dir=" << ptrb << "  *ptr=" << *ptrb << "\n";
  cout << "char  : valor=" << c << "      dir=" << (void*)ptrc << "  *ptr=" << *ptrc << "\n"; 
  cout << "bool  : valor=" << d << "      dir=" << ptrd << "  *ptr=" << *ptrd << "\n";
}
