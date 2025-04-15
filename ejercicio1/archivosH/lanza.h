#include "armascombate.h"
#pragma once 

class Lanza: public ArmasCombate{
    public:
        Lanza();
        virtual ~Lanza(){}

        string material;
        virtual void mostrarMateria();

        void alcance()override;
        string getNombre() override; 


};