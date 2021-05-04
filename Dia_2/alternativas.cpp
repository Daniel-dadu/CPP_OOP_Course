// Curso: Introducción a POO en C++

// ------
// Día 2:
// ------

// Alternativas de implementación de clases (en el mismo cpp), métodos y cración de objetos. 

#include <iostream>
using namespace std;

// La clase puede ir dentro del mismo archivo con extensión .cpp
class Ejemplo{
  private:
    int numero;
  
  public:
    Ejemplo(int); // Declaración de métodos dentro de la clase
    int getNumero();

    void printNumero(){ // Declaración y descripción de métodos dentro de la clase
        cout << "Valor de 'numero' (usando printA): " << numero << endl;
    }

};

// Podemos también describir los métodos fuera de la clase
Ejemplo::Ejemplo(int numero){
    this->numero = numero;
}

int Ejemplo::getNumero(){
    return numero;
}

int main(){

    // Ejemplo obj(3453); // Método común
    Ejemplo obj = 3453; // Método alternativo (solo funciona con constructores que reciben 1 atributo)
    cout << "Valor de 'numero' (usando getA): " << obj.getNumero() << endl;
    obj.printNumero();
    return 0;

}