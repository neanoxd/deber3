#include <iostream>
using namespace std;

int main() {
    int* p = new int;
    *p = 73;
    
    cout << "Valor en heap: " << *p << "\n";
    delete p;
    p = nullptr;
    
    cout << "Memoria liberada." << "\n";
    cout << "Puntero es null: " << (p == nullptr ? "SI" : "NO") << "\n";
}
