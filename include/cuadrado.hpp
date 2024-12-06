#ifndef CUADRADO_HPP
#define CUADRADO_HPP

#include "figura.hpp"

class Cuadrado : public Figura 
    {
        public:
            Cuadrado(float lado = 0.0);
            virtual ~Cuadrado() {}
            
            float perimetro() const override;
            float area() const override;
            string nombre() const override;
    };

#endif