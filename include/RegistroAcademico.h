#ifndef REGISTROACADEMICO_H
#define REGISTROACADEMICO_H

#include <string>
#include <vector>

/**
 * @brief Clase que representa el registro académico de un estudiante.
 */
class RegistroAcademico {
private:
    std::string nombre;                  ///< Nombre del estudiante
    int creditosAprobados;               ///< Total de créditos aprobados
    float promedioPonderado;             ///< Promedio ponderado del estudiante
    std::vector<float> notas;            ///< Lista de notas registradas
    std::vector<int> creditosNotas;      ///< Créditos asociados a cada nota

public:
    /**
     * @brief Constructor que inicializa el registro con el nombre del estudiante.
     * @param nombre Nombre del estudiante.
     */
    RegistroAcademico(const std::string& nombre);

    /**
     * @brief Registra una nota junto con sus créditos.
     * @param nota Valor de la nota (0.0 - 5.0).
     * @param creditos Créditos asociados a la nota.
     */
    void registrarNota(float nota, int creditos);

    /**
     * @brief Calcula y devuelve el promedio ponderado.
     * @return Promedio ponderado del estudiante.
     */
    float obtenerPromedio() const;

    /**
     * @brief Verifica si el estudiante cumple con los créditos requeridos.
     * @param creditosRequeridos Créditos necesarios para cumplir el requisito.
     * @return true si cumple, false en caso contrario.
     */
    bool cumpleRequisitos(int creditosRequeridos) const;
};

#endif
