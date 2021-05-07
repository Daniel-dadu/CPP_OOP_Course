#ifndef FIGURA_H_INCLUDED
#define FIGURA_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Figura{

  protected:
  
    double ladoUno; // Todas las figuras deben tener un lado base
    string nombreFigura;

  public:

    explicit Figura();
    Figura(double);

    virtual void dibujarFigura() = 0; // Clase abstracta -> Interfaz
    string getNombreFigura();

};

#endif