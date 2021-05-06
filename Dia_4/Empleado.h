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

        void setNombreEmpleado(string);
        void setApellidoEmpleado(string);
        void setEdadEmpleado(int);
        void setGeneroEmpleado(char);
        void setEstaturaEmpleado(float);
        void setColorCabelloEmpleado(string);

        void setNomina(int);
        void setEmpresa(string);
        
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

void Empleado::setNombreEmpleado(string nombreEmpleadoC) { 
    miPersona.setNombre(nombreEmpleadoC); 
}

void Empleado::setApellidoEmpleado(string apellidoEmpleadoC) { miPersona.setApellido(apellidoEmpleadoC); }
void Empleado::setEdadEmpleado(int edadEmpleadoC) { miPersona.setEdad(edadEmpleadoC); }
void Empleado::setGeneroEmpleado(char generoEmpleadoC) { miPersona.setGenero(generoEmpleadoC); }
void Empleado::setEstaturaEmpleado(float estaturaEmpleadoC) { miPersona.setEstatura(estaturaEmpleadoC); }
void Empleado::setColorCabelloEmpleado(string colorCabelloEmpleadoC) { miPersona.setColorCabello(colorCabelloEmpleadoC); }

void Empleado::setNomina(int nominaC) { nomina = nominaC; }
void Empleado::setEmpresa(string empresaC) { empresa = empresaC; }

void Empleado::cambioEmpresa(string nuevaEmpresa){
    empresa = nuevaEmpresa;
    nomina = rand() % 9000 + 1000; // Genera un número random entre 1000-9999
    cout << miPersona.getNombre() << " ahora trabaja en " << empresa << endl;
}

#endif