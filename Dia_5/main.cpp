// Curso: Introducción a POO en C++

// ------
// Día 5:
// ------

// Polimorfismo
// Clase abstracta
// Creación de objetos mediante punteros

#include "Cuadrado.cpp"
#include "Rectangulo.cpp"

int main(){

  Figura * figura[4];

  figura[0] = new Cuadrado;
  figura[1] = new Rectangulo;
  figura[2] = new Cuadrado(8, "Cuadrado de 8x8x8x8");
  figura[3] = new Rectangulo(3, 10, "Rectángulo 3x10");

  for(int i = 0; i < 4; i++){

    cout << figura[i] -> getNombreFigura() << ":\n" << endl;
    figura[i] -> dibujarFigura();

  }

  return 0;

}