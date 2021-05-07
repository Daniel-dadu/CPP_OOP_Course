#include "Figura.h"

Figura::Figura(){

  ladoUno = 1; // Inicializa el lado de una figura
  nombreFigura = "N/A";

}

Figura::Figura(double ladoUnoC){
  ladoUno = ladoUnoC;
}

string Figura::getNombreFigura(){
  return nombreFigura;
}