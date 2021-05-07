#ifndef CUADRADO_H_INCLUDED
#define CUADRADO_H_INCLUDED

#include "Figura.h"

class Cuadrado : public Figura{

  private:
    double lado;

  public:
  
    explicit Cuadrado();
    Cuadrado(double, string);

    void dibujarFigura();

};

#endif