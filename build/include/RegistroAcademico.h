/**
 * @brief Clase que representa el registro académico de un estudiante.
 * 
 * Contiene las notas, créditos y métodos para calcular el promedio ponderado
 * y verificar si cumple los requisitos académicos.
 */
class RegistroAcademico {
private:
    std::string nombre;                  ///< Nombre del estudiante
    int creditosAprobados;               ///< Total de créditos aprobados
    float promedioPonderado;             ///< Promedio ponderado del estudiante
    std::vector<float> notas;            ///< Vector de notas registradas
    std::vector<int> creditosNotas;      ///< Vector de créditos asociados a cada nota

public:
    /**
     * @brief Constructor que inicializa el nombre del estudiante.
     * @param nombre Nombre del estudiante.
     */
    RegistroAcademico(const std::string& nombre);

    /**
     * @brief Registra una nota y sus créditos correspondientes.
     * @param nota Nota obtenida.
     * @param creditos Créditos de la materia.
     */
    void registrarNota(float nota, int creditos);

    /**
     * @brief Calcula el promedio ponderado del estudiante.
     * @return Promedio ponderado.
     */
    float obtenerPromedio() const;

    /**
     * @brief Verifica si el estudiante cumple los requisitos de créditos.
     * @param creditosRequeridos Créditos mínimos requeridos.
     * @return true si cumple los requisitos, false en caso contrario.
     */
    bool cumpleRequisitos(int creditosRequeridos) const;
};
