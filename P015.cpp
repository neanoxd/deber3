#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Estudiante {
  string nombre;
  double nota;
  int edad;
};

void imprimir(const Estudiante* e) {
  cout << fixed << setprecision(2);
  cout << "Nombre: " << e->nombre << " | Nota: " << e->nota << " | Edad: " << e->edad << endl;
}

void actualizarNota(Estudiante* e, double nuevaNota) {
  if (nuevaNota >= 0 && nuevaNota <= 100) {
    e->nota = nuevaNota;
  }
}

bool aprobo(const Estudiante* e) {
  return e->nota >= 60;
}

int main() {
  Estudiante est = {"Ana", 75.00, 20};
  imprimir(&est);
  actualizarNota(&est, 85.00);
  cout << "Nota actualizada: " << est.nota << endl;
  cout << "Estado: " << (aprobo(&est) ? "APROBADO" : "REPROBADO") << endl;
}
