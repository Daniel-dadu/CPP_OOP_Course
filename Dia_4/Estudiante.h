// Curso: Introducción a POO en C++

#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED

#include "Persona.h" // Incluímos clase padre
#include <cstdlib> // Para usar el rand (random / aleatorio)

class Estudiante : public Persona {
    private:
        int matricula, cantidadMaterias;
        string nombreEscuela;
        float promedio; // Sobre 100
    
    public:
        explicit Estudiante(); // Constructor vacío
        explicit Estudiante(string, string, int, char, float, string, int, int, string, float); // Constructor
        
        void imprimirEstudiante(); // Método para imprimir los atributos de un Estudiante
        
        // Setters de Estudiante
        void setMatricula(int);
        void setCantidadMaterias(int);
        void setNombreEscuela(string);
        void setPromedio(float);
        
        // Getters de Estudiante
        int getMatricula();
        int getCantidadMaterias();
        string getNombreEscuela();
        float getPromedio();

        // Métodos adicionales
        void cambiarEscuela(string);
        void nuevaMateria(float);
};

// Constructor vacío de Estudiante que llama al constructor vacío de la clase padre (Persona)
Estudiante::Estudiante() { 
    matricula = 0;
    cantidadMaterias = 0;
    nombreEscuela = "Sin escuela";
    promedio = 0;
}

// Constructor de Estudiante
Estudiante::Estudiante(string nombreC, string apellidoC, int edadC, char generoC, float estaturaC, 
                    string colorCabelloC, int matriculaC, int cantidadMateriasC, string nombreEscuelaC, 
                    float promedioC) : Persona(nombreC, apellidoC, edadC, generoC, estaturaC, colorCabelloC){
    matricula = matriculaC;
    cantidadMaterias = cantidadMateriasC;
    nombreEscuela = nombreEscuelaC;
    promedio = promedioC;
}

// Constructor normal que llama al contructor vacío de la clase padre (Persona)
// Estudiante::Estudiante(string nombreC, string apellidoC, int edadC, char generoC, float estaturaC, string colorCabelloC, 
//                      int matriculaC, int cantidadMateriasC, string nombreEscuelaC, float promedioC) {
//     // nombre = nombreC;
//     // apellido = apellidoC;
//     // edad = edadC;
//     // genero = generoC;
//     // estatura = estaturaC;
//     // colorCabello = colorCabelloC;
//     // identificadorHambre = 0;
//     matricula = matriculaC;
//     cantidadMaterias = cantidadMateriasC;
//     nombreEscuela = nombreEscuelaC;
//     promedio = promedioC;
// }

// Creamos un método para imprimir todos los atributos de una clase
void Estudiante::imprimirEstudiante(){
    imprimirPersona();
    cout << "Matrícula: " << matricula << "\nEscuela: " << nombreEscuela << "\nCantidad de materias: " 
    << cantidadMaterias << "\nPromedio: " << promedio << endl; 
}

// Setters (Modificación/asignación de atributos)
void Estudiante::setMatricula(int matriculaC) { matricula = matriculaC; }
void Estudiante::setCantidadMaterias(int cantidadMateriasC) { cantidadMaterias = cantidadMateriasC; }
void Estudiante::setNombreEscuela(string nombreEscuelaC) { nombreEscuela = nombreEscuelaC; }
void Estudiante::setPromedio(float promedioC) { promedio = promedioC; }

// Getters (Obtención/retorno de atributos)
int Estudiante::getMatricula() { return matricula; }
int Estudiante::getCantidadMaterias() { return cantidadMaterias; }
string Estudiante::getNombreEscuela() { return nombreEscuela; }
float Estudiante::getPromedio() { return promedio; }

void Estudiante::cambiarEscuela(string nuevaEscuela){
    nombreEscuela = nuevaEscuela;
    matricula = rand() % 900 + 100; // Genera un número random entre 100-999
    cout << nombre << " se cambió a la escuela " << nombreEscuela << endl;
}

void Estudiante::nuevaMateria(float calificacion){
    promedio = ((promedio * cantidadMaterias) + calificacion) / (cantidadMaterias + 1);
    cantidadMaterias++;
    cout << nombre << " ahora tiene una nueva materia." << endl;
}

#endif