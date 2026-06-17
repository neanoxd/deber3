#include <iostream>
#include <cctype>
using namespace std;

int main() {
  char palabra[] = "programacion";
  char* p = palabra;
    
  int longitud = 0;
  int vocales = 0;
    
  cout << "Mayusculas: ";
  while (*p != '\0') {
    longitud++;
    char c = *p;
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
          vocales++;
    }
    cout << static_cast<char>(toupper(*p));
    p++;
  }
    
  cout << "\nLongitud  : " << longitud << endl;
  cout << "Vocales   : " << vocales << endl;
}
