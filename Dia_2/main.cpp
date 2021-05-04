// Curso: Introducción a POO en C++

// ------
// Día 2:
// ------

// Clases (encapsulamiento), atributos (abstracción), objetos (instancia),
// método constructor y modificadores de acceso: public, private y protected

#include "Persona.h"

int main(){

  Persona personaUno("Antonio", "Hernández", "Torres", 23, 'M', 1.75, "Negro"); // Objeto (instancia de una clase)
  personaUno.imprimirPersona();
  
  cout << endl;
  Persona personaDos("María", "Herrera", "Martínez", 'F'); // Objeto (instancia de una clase)
  personaDos.imprimirPersona();
  
  cout << endl;
  Persona personaTres("Mario", "Torres", "Lozano", 'M');
  personaTres.imprimirPersona();
  
  cout << endl;
  Persona personaCuatro("Lalo"); // Objeto (instancia de una clase)
  personaCuatro.imprimirPersona(); // A pesar de no haber definido los demás atributos, no marca error

  cout << endl;
  cout << personaDos.getNombre() << " tiene " << personaDos.getEdad() 
        << " años y mide " << personaDos.getEstatura() << " metros." << endl;
  
  personaDos.setEdad(27); // A través de los setters vamos a cambiar los atributos de un objeto
  personaDos.setEstatura(1.78);
  cout << "Ahora " << personaDos.getNombre() << " tiene " << personaDos.getEdad() 
        << " años y mide " << personaDos.getEstatura() << " metros." << endl;

  cout << endl;
  personaUno.estadoHambreSed(); // identificadorSed = false;
  personaUno.correr(); // identificadorSed = true;
  personaUno.estadoHambreSed(); // identificadorSed = true;
  personaUno.beber(); // identificadorSed = false;
  personaUno.estadoHambreSed(); // identificadorSed = false;
  cout << endl;
  personaUno.despertar();
  personaUno.estadoHambreSed(); // identificadorHambre = true;
  personaUno.comer(); // identificadorHambre = false;
  personaUno.estadoHambreSed(); // identificadorHambre = false;
  
  return 0; // Fin del programa

}