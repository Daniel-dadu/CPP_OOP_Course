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
    explicit Ejemplo(int); // Constructor con explicit
    // Ejemplo(int); // Constructor normal
    
    int getNumero();
    void printMore(int, string, char, float); // No es necesario escribir el nombre de las variables aquí

    void printNumero(){ // Declaración y descripción de métodos dentro de la clase
        cout << "Valor de 'numero' (usando printNumero): " << numero << endl;
    }

};

// Podemos también describir los métodos fuera de la clase
Ejemplo::Ejemplo(int numero){
    this->numero = numero;
}

int Ejemplo::getNumero(){
    return numero;
}

void Ejemplo::printMore(int a, string b, char c, float d){
    cout << "Elemento a + numero: " << a + numero << endl; // Las variables externas pueden interactuar con los atributos de la clase
    cout << "Elemento b: " << b << endl;
    cout << "Elemento c: " << c << endl;
    cout << "Elemento d: " << d << endl;
}

int main(){

    Ejemplo obj(3450); // Método común
    // Ejemplo obj = 3400; // Método alternativo (solo funciona con constructores que reciben 1 atributo y que no son explícitos)
    cout << "Valor de 'numero' (usando getNumero): " << obj.getNumero() << endl;
    obj.printNumero();
    cout << endl;
    obj.printMore(12, "Hey", 'd', 1.23);
    return 0;

}