#include <iostream>
using namespace std;

int main() {
  int a = 1;
  int b = 2;
  int* p = &a;

  cout << *p << endl;    
  *p = 10;
  cout << a  << endl;    
  p = &b;
  cout << *p << endl;    
  *p = *p + 5;
  cout << b  << endl;    
  cout << a  << endl;
}
