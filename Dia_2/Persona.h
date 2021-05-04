// Curso: Introducción a POO en C++

#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Persona{ // Clase (encapsulamiento)

  private: // Modificar de acceso "privado"

    // Atributos (abstracción)

    string nombre;
    string apellidoPaterno;
    string apellidoMaterno;
    int edad;
    char genero; // M (male) || F (female)
    float estatura; // En metros
    string colorCabello;
    bool identificadorHambre;
    bool identificadorSed;

  public: // Modificar de acceso "público"

    // Método (función) constructor

    explicit Persona(){ // Constructor vacío
      nombre = "N/A";
      apellidoPaterno = "N/A";
      apellidoMaterno = "N/A";
      edad = 30;
      genero = 'X';
      estatura = 1.7;
      colorCabello = "Negro";
      identificadorHambre = 0;
      identificadorSed = 0;
    }

    explicit Persona(string nombreC, string apellidoPaternoC, string apellidoMaternoC,
                     int edadC, char generoC, float estaturaC, string colorCabelloC){
      
      nombre = nombreC;
      apellidoPaterno = apellidoPaternoC;
      apellidoMaterno = apellidoMaternoC;
      edad = edadC;
      genero = generoC;
      estatura = estaturaC;
      colorCabello = colorCabelloC;
      identificadorHambre = 0;
      identificadorSed = 0;

    } // Tutorial que explica el explicit: https://www.youtube.com/watch?v=lsdC3F27lt0

    // Sobrecargamos el constructor Persona
    explicit Persona(string nombreC, string apellidoPaternoC, string apellidoMaternoC, char generoC){
      
      nombre = nombreC;
      apellidoPaterno = apellidoPaternoC;
      apellidoMaterno = apellidoMaternoC;
      edad = 30;
      genero = generoC;
      estatura = 1.7;
      colorCabello = "Negro";
      identificadorHambre = false; // true
      identificadorSed = false; // true == 1
    
    }

    // Sobrecargamos una vez más el constructor Persona (mala práctica)
    explicit Persona(string nombreC){ nombre = nombreC; }

    // Creamos un método para imprimir todos los atributos de una clase
    void imprimirPersona(){
      cout << "Nombre completo: " << nombre << " " << apellidoPaterno << " " << apellidoMaterno
        << endl << "Edad: " << edad << " años\nGenero: " << genero << "\nEstatura: " << estatura
        << " metros\nColor de cabello: " << colorCabello << "\n¿Tiene hambre? " << identificadorHambre
        << "\n¿Tiene sed? " << identificadorSed << endl; 
    } // ¿Cómo mejorarías este método?

    // Setters (Modificación/asignación de atributos)
    void setEdad(int edadC) { edad = edadC; }
    void setEstatura(float estaturaC) { estatura = estaturaC; }
    void setColorCabello(string colorCabelloC) { colorCabello = colorCabelloC; }

    // Getters (Obtención/retorno de atributos)
    string getNombre(){ return nombre; }
    string getApellidoPaterno(){ return apellidoPaterno; }
    string getApellidoMaterno(){ return apellidoMaterno; }
    int getEdad(){ return edad; }
    char getGenero(){ return genero; }
    float getEstatura(){ return estatura; }
    string getColorCabello(){ return colorCabello; }
    bool getIdentificadorHambre(){ return identificadorHambre; }
    bool getIdentificadorSed(){ return identificadorSed; }

    //Métodos adicionales
    void comer(){
      identificadorHambre = 0;
      cout << nombre << " está comiendo." << endl;
    }

    void beber(){
      identificadorSed = 0;
      cout << nombre << " está hidratándose." << endl;
    }

    void correr(){
      cout << nombre << " salió a correr y ahora tiene sed." << endl;
      identificadorSed = 1;
    }
    
    void despertar(){
      cout << nombre << " se acaba de despertar y tiene hambre." << endl;
      identificadorHambre = 1;
    }

    // Método que nos permite conocer si la persona tiene hambre y sed
    void estadoHambreSed(){
      cout << nombre;
      if (!identificadorHambre){ cout << " no"; }
      cout << " tiene hambre y";
      if (!identificadorSed) cout << " no";
      cout << " tiene sed." << endl;
    }

    // pintarCabello(/* Parametros */){ // Ejercicio 
    //   // Método
    // }
};

#endif