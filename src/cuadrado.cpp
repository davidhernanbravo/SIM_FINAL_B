#include "../include/cuadrado.hpp"

Cuadrado::Cuadrado(float lado) 
    : Figura(lado) {}

float Cuadrado::perimetro() const 
    {
        return 4 * x; // Perímetro de un cuadrado.
    }

float Cuadrado::area() const 
    {
        return x * x; // Área del cuadrado es lado².
    }

string Cuadrado::nombre() const 
    {
        return "Cuadrado";
    }