// Curso: Introducción a POO en C++

// ------
// Día 2:
// ------

// Clases (encapsulamiento), atributos (abstracción), objetos (instancia),
// método constructor y modificadores de acceso: public, private y protected

#include "Persona.h"

int main(){

  Persona personaUno("Antonio", "Hernández", "Torres", 23, 'M', 1.75, "Negro"); // Objeto (instancia de una clase)
  Persona personaDos("María", "Herrera", "Martínez", 'F'); // Objeto (instancia de una clase)
  Persona personaTres("Lalo");
  personaDos.imprimirPersona();
  cout << endl;
  personaTres.imprimirPersona(); // A pesar de no haber definido los demás atributos, no marca error

  cout << endl;
  cout << personaDos.getNombre() << " tiene " << personaDos.getEdad() 
        << " años y mide " << personaDos.getEstatura() << " metros." << endl;
  personaDos.setEdad(27);
  personaDos.setEstatura(1.78);
  cout << "Ahora " << personaDos.getNombre() << " tiene " << personaDos.getEdad() 
        << " años y mide " << personaDos.getEstatura() << " metros." << endl;

  cout << endl;
  personaUno.correr();
  personaUno.estadoHambreSed();
  personaUno.beber();
  personaUno.estadoHambreSed();
  
  return 0; // Fin del programa

}