#include <iostream>
using namespace std;

int main() {
  int x = 10;
  int* p = &x;
  
  cout << "x antes   : " << x << "\n";
  *p = 50;
  cout << "x despues : " << x << "\n";
  *p = 200;
  cout << "x final   : " << x << "\n";
}
