#include "../include/triangulo.hpp"

Triangulo::Triangulo(float lado) 
    : Figura(lado) {}

float Triangulo::perimetro() const 
    {
        return 3 * x; // Perímetro de un triángulo equilátero.
    }

float Triangulo::area() const 
    {
        float altura = (0.86602540378) * x; // 0.86602540378 es el cuadrado de (3)/2.
        return (x * altura) / 2; // Área del triángulo equilátero.
    }

string Triangulo::nombre() const 
    {
        return "Triangulo";
    }