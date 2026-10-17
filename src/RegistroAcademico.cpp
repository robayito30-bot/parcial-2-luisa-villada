#include "RegistroAcademico.h"

RegistroAcademico::RegistroAcademico(const std::string& nombre)
    : nombre(nombre), creditosAprobados(0), promedioPonderado(0.0f) {}

void RegistroAcademico::registrarNota(float nota, int creditos) {
    notas.push_back(nota);
    creditosNotas.push_back(creditos);
    creditosAprobados += creditos;
}

float RegistroAcademico::obtenerPromedio() const {
    float sumaPonderada = 0.0f;
    int totalCreditos = 0;

    for (size_t i = 0; i < notas.size(); ++i) {
        sumaPonderada += notas[i] * creditosNotas[i];
        totalCreditos += creditosNotas[i];
    }

    return (totalCreditos > 0) ? (sumaPonderada / totalCreditos) : 0.0f;
}

bool RegistroAcademico::cumpleRequisitos(int creditosRequeridos) const {
    return creditosAprobados >= creditosRequeridos;
}
