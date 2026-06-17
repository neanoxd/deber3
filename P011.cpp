#include <iostream>
using namespace std;

int main() {
  int arr[] = {5, 10, 15, 20};
  int* p  = arr;
  int** pp = &p;

  cout << *p      << endl;   
  cout << **pp    << endl;   
  p++;
  cout << *p      << endl;   
  cout << **pp    << endl;   
  *pp = arr;

  cout << **pp    << endl; 
  cout << *(p+2)  << endl;
}
