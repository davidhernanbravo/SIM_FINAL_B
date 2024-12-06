#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include "figura.hpp"

class Circulo : public Figura 
    {
        public:
            Circulo(float radio = 0.0);
            virtual ~Circulo() {}
            
            float perimetro() const override;
            float area() const override;
            string nombre() const override;
    };

#endif