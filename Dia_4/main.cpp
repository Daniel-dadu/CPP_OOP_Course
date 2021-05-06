// Curso: Introducción a POO en C++

// ------
// Día 4:
// ------

// Herencia y composición en C++

#include "Persona.h"
#include "Estudiante.h"
#include "Empleado.h"

int main(){
  
  // --------
  // Herencia
  // --------

  Estudiante estudianteUno("Luciano", "Lozano", 19, 'M', 1.85, "Amarillo", 123, 4, "Cambridge", 78.55);
  estudianteUno.imprimirEstudiante();
  
  cout << endl;

  Estudiante estudianteDos; // Llama al constructor vacío de ambas clases
  estudianteDos.imprimirEstudiante();

  cout << endl;

  // Usando los setters de la clase Persona
  estudianteDos.setNombre("Patricia");
  estudianteDos.setApellido("Luke");
  estudianteDos.setEdad(18);
  estudianteDos.setGenero('F');
  estudianteDos.setEstatura(1.76);
  estudianteDos.setColorCabello("Amarillo");
  
  // Usando los setters de la clase Estudiante
  estudianteDos.setMatricula(126);
  estudianteDos.setCantidadMaterias(8);
  estudianteDos.setNombreEscuela("Oxford");
  estudianteDos.setPromedio(93.28);

  estudianteDos.imprimirEstudiante();

  cout << endl;

  estudianteDos.cambiarEscuela("Stanford");
  estudianteDos.nuevaMateria(30.78);
  estudianteDos.pintarCabello("Rosa"); // Método de clase Persona
  
  cout << endl;

  estudianteDos.imprimirEstudiante();

  // -----------
  // Composición
  // -----------

  Empleado empleadoUno("Mariano", "García", 39, 'M', 1.69, "Negro", 4356, "Colgate");
  empleadoUno.imprimirEmpleado();

  cout << endl;

  Empleado empleadoDos;
  empleadoDos.imprimirEmpleado();

  empleadoDos.setNombreEmpleado("Juana");
  empleadoDos.setApellidoEmpleado("Carranza");
  empleadoDos.setEdadEmpleado(32);
  empleadoDos.setGeneroEmpleado('F');
  empleadoDos.setEstaturaEmpleado(1.46);
  empleadoDos.setColorCabelloEmpleado("Negro");

  cout << endl;

  empleadoDos.imprimirEmpleado();

  cout << endl;

  empleadoDos.cambioEmpresa("Pixar");

  cout << endl;
  
  empleadoDos.imprimirEmpleado();

  // Artículo útil que compara la herencia y la composición: https://devexperto.com/herencia-vs-composicion/

  return 0; // Fin del programa

}