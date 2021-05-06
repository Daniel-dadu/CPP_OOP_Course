// Curso: Introducción a POO en C++

#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Persona{ // Clase (encapsulamiento)

  protected: // IMPORTANTE: Los atributos de la clase padre deben ser protected

    // Atributos (abstracción)

    string nombre;
    string apellido;
    int edad;
    char genero; // M (male) || F (female)
    float estatura; // En metros
    string colorCabello;
    bool identificadorHambre;

  public: // Modificar de acceso "público"

    // Método (función) constructor

    explicit Persona() {
      nombre = "N/A";
      apellido = "N/A";
      edad = 0;
      genero = 'X';
      estatura = 0.3;
      colorCabello = "Negro";
      identificadorHambre = 0;
    }

    explicit Persona(string nombreC, string apellidoC, int edadC, char generoC, float estaturaC, string colorCabelloC){
      
      nombre = nombreC;
      apellido = apellidoC;
      edad = edadC;
      genero = generoC;
      estatura = estaturaC;
      colorCabello = colorCabelloC;
      identificadorHambre = 0;

    } // Tutorial que explica el explicit: https://www.youtube.com/watch?v=lsdC3F27lt0

    // Creamos un método para imprimir todos los atributos de una clase
    void imprimirPersona(){
      cout << "Nombre completo: " << nombre << " " << apellido << endl << "Edad: " << edad 
        << " años \nGenero: " << ((genero == 'M') ? "Masculino" : (genero == 'F') ? "Femenino" : 
        "Sin especificar") << "\nEstatura: " << estatura << " metros\nColor de cabello: " << colorCabello
        << "\n¿Tiene hambre? " << ((identificadorHambre) ? "Sí" : "No") << endl; 
    } // ¿Cómo mejorarías este método?

    // Setters (Modificación/asignación de atributos)
    void setNombre(string nombreC) { nombre = nombreC; }
    void setApellido(string apellidoC) { apellido = apellidoC; }
    void setEdad(int edadC) { edad = edadC; }
    void setGenero(char generoC) { genero = generoC; }
    void setEstatura(float estaturaC) { estatura = estaturaC; }
    void setColorCabello(string colorCabelloC) { colorCabello = colorCabelloC; }

    // Getters (Obtención/retorno de atributos)
    string getNombre(){ return nombre; }
    string getApellido(){ return apellido; }
    int getEdad(){ return edad; }
    char getGenero(){ return genero; }
    float getEstatura(){ return estatura; }
    string getColorCabello(){ return colorCabello; }
    bool getIdentificadorHambre(){ return identificadorHambre; }

    //Métodos adicionales
    void comer(){
      identificadorHambre = 0;
      cout << nombre << " está comiendo." << endl;
    }
    
    void despertar(){
      cout << nombre << " se acaba de despertar y tiene hambre." << endl;
      identificadorHambre = 1;
    }

    // Método que nos permite conocer si la persona tiene hambre y sed
    void estadoHambre(){
      cout << nombre;
      if (!identificadorHambre) cout << " no";
      cout << " tiene hambre" << endl;
    }

    void pintarCabello(string nuevoColorCabello){ // Ejercicio resuelto
      colorCabello = nuevoColorCabello;
      cout << nombre << " se pintó el cabello de color " << colorCabello << endl;
    }

    void envejecer() {
      cout << nombre << " se está haciendo más viejo" << endl;
      edad += 20;
      estatura -= 0.1;
      colorCabello = "Blanco";
    }

};

#endif