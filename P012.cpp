#include <iostream>
using namespace std;

int main() {
  int arr[] = {3, 6, 9, 12, 15};
  int* p = arr;

  cout << "arr[i]  : ";
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";

  cout << "*(arr+i): ";
  for (int i = 0; i < 5; i++) {
    cout << *(arr+i) << " ";
  }
  cout << "\n";

  cout << "p++     : ";
  for (int i = 0; i < 5; i++) {
    cout << *p << " ";
    p++;
  }
  cout << "\n";
}
