#include "Cuadrado.h"

Cuadrado::Cuadrado(){

  ladoUno = 2;
  nombreFigura = "Cuadrado de 2x2x2x2";

}

Cuadrado::Cuadrado(double ladoC, string nombreFiguraC) : Figura(ladoC){
  nombreFigura = nombreFiguraC;
}

void Cuadrado::dibujarFigura(){ // Diferente comportamiento al método de la clase "Rectángulo"

  for(int i = 1; i <= ladoUno; i++){

    for(int j = 1; j < ladoUno; j++){
      cout << " *";
    }

    cout << " *" << endl;

  }

  cout << "\n";

}