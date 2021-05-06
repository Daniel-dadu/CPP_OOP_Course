// Curso: Introducción a POO en C++

#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

#include "Persona.h"
#include <cstdlib> // Para usar el rand (random / aleatorio)

class Empleado {
    private:
        Persona miPersona; // Al crear un objeto, automáticamente llama al constructor vacío
        int nomina;
        string empresa;
    
    public:
        Empleado(); // Constructor vacío
        Empleado(string, string, int, char, float, string, int, string);

        void imprimirEmpleado();

        void cambioEmpresa(string);
};

//  Constructor vacío de Empleado
Empleado::Empleado() {
    nomina = 0;
    empresa = "Sin empresa";
}

// Constructor de Empleado
Empleado::Empleado(string nombreC, string apellidoC, int edadC, char generoC, float estaturaC, 
            string colorCabelloC, int nominaC, string empresaC) {
    miPersona.setNombre(nombreC);
    miPersona.setApellido(apellidoC);
    miPersona.setEdad(edadC);
    miPersona.setGenero(generoC);
    miPersona.setEstatura(estaturaC);
    miPersona.setColorCabello(colorCabelloC);
    nomina = nominaC;
    empresa = empresaC;
}

// Creamos un método para imprimir todos los atributos de una clase
void Empleado::imprimirEmpleado(){
    miPersona.imprimirPersona();
    cout << "Nómina: " << nomina << "\nEmpresa: " << empresa << endl;
}

void Empleado::cambioEmpresa(string nuevaEmpresa){
    empresa = nuevaEmpresa;
    nomina = rand() % 9000 + 1000; // Genera un número random entre 1000-9999
    cout << miPersona.getNombre() << " ahora trabaja en " << empresa << endl;
}

#endif