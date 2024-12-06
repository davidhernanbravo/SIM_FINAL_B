#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

#include "figura.hpp"

class Triangulo : public Figura 
    {
        public:
            Triangulo(float lado = 0.0);
            virtual ~Triangulo() {}
            
            float perimetro() const override;
            float area() const override;
            string nombre() const override;
    };

#endif