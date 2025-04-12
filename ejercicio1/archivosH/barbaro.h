#include "guerreros.h"
#pragma once 


class Barbaro: public Guerreros{
    public: 
        Barbaro();
        virtual ~Barbaro(){}

        int rabia; //cant de energia que se acumula para atacar 
        virtual void golpeBrutal();
        void maldad() override;
        string getNombre() override; //nuevo
};