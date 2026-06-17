#include <iostream>
#include <cctype>
using namespace std;

int main() {
  char palabra[] = "programacion";
  char* letra = palabra;

  int longitud{0};
  while(letra[longitud] != '\0') {
    longitud++;
  }
  cout << "Longitud  : " << longitud;
  for (int i = 0; i < 5; i++) {
    cout << toupper(letra
  }
}
