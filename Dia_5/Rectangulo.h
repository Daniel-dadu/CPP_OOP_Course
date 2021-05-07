#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED

#include "Figura.cpp"

class Rectangulo : public Figura{

  private:
    double altura;

  public:
  
    explicit Rectangulo();
    Rectangulo(double, double, string);

    void dibujarFigura();

};

#endif