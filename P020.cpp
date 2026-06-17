#include <iostream>
using namespace std;

int main() {
  int* original = new int[3]{1, 2, 3};
    cout << "Original (3): 1 2 3" << endl;
    
  int* ampliado = new int[6];
  
  for (int i = 0; i < 3; i++) {
    ampliado[i] = original[i];
  }
    
  ampliado[3] = 4;
  ampliado[4] = 5;
  ampliado[5] = 6;
    
  delete[] original;
  original = nullptr;
    
  cout << "Ampliado (6): ";
  for (int i = 0; i < 6; i++) {
    cout << ampliado[i] << " ";
  }
  cout << endl;
  delete[] ampliado;
  ampliado = nullptr;  
  cout << "Memoria liberada." << endl;
}
