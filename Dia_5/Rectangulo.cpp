#include "Rectangulo.h"

Rectangulo::Rectangulo(){

  ladoUno = 3; // Equivalente a la "base"
  altura = 2;
  nombreFigura = "Rectángulo de 3x2";

}

Rectangulo::Rectangulo(double baseC, double alturaC, string nombreFiguraC) : Figura(baseC){
  
  altura = alturaC;
  nombreFigura = nombreFiguraC;

}

void Rectangulo::dibujarFigura(){ // Diferente comportamiento al método de la clase "Cuadrado"

  for(int i = 1; i <= altura; i++){

    for(int j = 1; j < ladoUno; j++){
      cout << " *";
    }

    cout << " *" << endl;

  }

  cout << "\n";

}