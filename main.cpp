#include "include/circulo.hpp"
#include "include/cuadrado.hpp"
#include "include/triangulo.hpp"

#include <iostream>

using namespace std;

int main() 
{
    // Crear puntero de array dinámico de 3 elementos.
    Figura* figuras[3];

    // Solicitar datos para cada figura.
    figuras[0] = new Circulo(5.5);   // Radio = 5.5.
    figuras[1] = new Cuadrado(4.3); // Lado = 4.3,
    figuras[2] = new Triangulo(3.1); // Lado = 3.1,

    cout << "FORMITAS GEOMETRICAS" << endl;
    cout << "********************" << endl;

    // Recorrer las figuras y mostrar perímetro y área.
    for (int i = 0; i < 3; ++i) 
        {
            cout << "Figura " << i + 1 << ": " << figuras[i]->nombre() << endl;
            cout << "Perimetro: " << figuras[i]->perimetro() << endl;
            cout << "Area: " << figuras[i]->area() << endl << endl;
        }

    cout << "Mmm... Papitas Fritas Geometricas... (icono de baba va aqui)" << endl;

    // Libera la memoria.
    for (int i = 0; i < 3; ++i) 
    {
        delete figuras[i];
    }

    return 0;
}