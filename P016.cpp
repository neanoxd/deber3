#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int* p = arr;

  cout << arr[2]    << endl;   
  cout << *(arr+2)  << endl;  
  cout << *(p+2)    << endl;  
  p += 2;                   
  cout << *p        << endl;   
  cout << p[1]      << endl; 
  *p = 99;                  
  cout << arr[2]    << endl;  
}
