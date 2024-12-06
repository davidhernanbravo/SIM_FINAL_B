#include "../include/circulo.hpp"

Circulo::Circulo(float radio) 
    : Figura(radio) {}

float Circulo::perimetro() const 
    {
        return 2 * 3.14159265359 * x; // Aproximación de PI para el cálculo del perímetro.
    }

float Circulo::area() const 
    {
        return 3.14159265359 * x * x; // Área del círculo es PI * radio².
    }

string Circulo::nombre() const 
{
    return "Circulo";
}