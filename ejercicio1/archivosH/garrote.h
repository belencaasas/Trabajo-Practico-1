#include "armascombate.h"
#pragma once 

class Garrote: public ArmasCombate{
    public:
        Garrote();
        virtual ~Garrote(){}

        int gravedadDeGolpe;
        virtual void golpear();

        void alcance()override;
        string getNombre() override; 
};