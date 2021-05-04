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
    char genero;
    float estatura;
    string colorCabello;
    bool identificadorHambre;
    bool identificadorSed;

  public: // Modificar de acceso "público"

    // Método (función) constructor

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

    }

};

#endif