// Curso: Introducción a POO en C++

// ------
// Día 3:
// ------

// Archivos de texto: lectura, escritura y manipulación

#include "Persona.h"
#include <fstream>
#include <vector>

int main(){

  // ------------------
  // Lectura de archivo
  // ------------------

  ifstream archivo("archivo.txt"); // Se abre el archivo
  // Persona *personasA;
  vector<Persona> personasV;
  int cantidad;

  archivo >> cantidad; // Lectura de la primera línea del archivo
  // personasA = new Persona[cantidad]; // Arreglo dinámico de objetos

  for (int i = 0; i < cantidad; i++) {

    // Variables temporales para la lectura del archivo
    string nombre, apellidoPaterno, apellidoMaterno, colorCabello;
    int edad;
    char genero;
    float estatura;

    // Lectura de las líneas del archivo (por objeto)
    archivo >> nombre >> apellidoPaterno >> apellidoMaterno >> edad >> genero >> estatura >> colorCabello;

    // Creación de un objeto temporal
    Persona personaNueva(nombre, apellidoPaterno, apellidoMaterno, edad, genero, estatura, colorCabello);
    personasV.push_back(personaNueva); // Adición de objeto al vector
    personasV[i].imprimirPersona();

    // Modificación de los atributos del objeto
    // personasA[i].setNombre(nombre);
    // personasA[i].setApellidoPaterno(apellidoPaterno);
    // personasA[i].setApellidoMaterno(apellidoMaterno);
    // personasA[i].setEdad(edad);
    // personasA[i].setGenero(genero);
    // personasA[i].setEstatura(estatura);
    // personasA[i].setColorCabello(colorCabello);

    // personasA[i].imprimirPersona();

  }

  archivo.close(); // Cerramos el archivo

  // ---
  // Fin
  // ---

  // --------------------
  // Escritura de archivo
  // --------------------

  ofstream nuevoArchivoTXT("objetosPersona.txt");
  ofstream nuevoArchivoHTML("objetosPersona.html");

  cout << "\n";

  for(int i = 0; i < personasV.size(); i++){
    personasV[i].envejecer();
  }

  for(int i = 0; i < personasV.size(); i++){
    nuevoArchivoTXT << personasV[i].retornaPersonaTXT() << endl;
    nuevoArchivoHTML << personasV[i].retornaPersonaHTML() << endl;
  }

  // for(int i = 0; i < cantidad; i++){
  //   personasA[i].envejecer();
  // }
  //
  // for(int i = 0; i < cantidad; i++){
  //   nuevoArchivoTXT << personasA[i].retornaPersonaTXT() << endl;
  //   nuevoArchivoHTML << personasA[i].retornaPersonaHTML() << endl;
  // }

  // Cerramos los archivos
  nuevoArchivoTXT.close();
  nuevoArchivoHTML.close();

  // ---
  // Fin
  // ---

  return 0; // Fin del programa

}
