#include "RegistroAcademico.h"
#include <iostream>

int main() {
    RegistroAcademico alumno("Fernanda");

    alumno.registrarNota(4.5, 3);
    alumno.registrarNota(3.8, 4);

    std::cout << "Promedio ponderado: " << alumno.obtenerPromedio() << std::endl;
    std::cout << "Cumple requisitos (7 créditos): "
              << (alumno.cumpleRequisitos(7) ? "Sí" : "No") << std::endl;

    return 0;
}
