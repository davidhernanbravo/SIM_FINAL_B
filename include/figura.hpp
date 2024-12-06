#ifndef FIGURA_HPP
#define FIGURA_HPP

#include <string>
using namespace std;

class Figura 
    {
        protected:
            float x;

        public:
            Figura(float x = 0.0);
            virtual ~Figura() {}
            
            virtual float perimetro() const = 0;
            virtual float area() const = 0;
            virtual string nombre() const = 0;
    };

#endif