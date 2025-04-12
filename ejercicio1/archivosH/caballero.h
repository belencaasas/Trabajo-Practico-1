#include "guerreros.h"
#pragma once 

class Caballero: public Guerreros{
    public: 
        Caballero();
        virtual ~Caballero(){}

        int habilidadConArmas;
        virtual void desafiar();
        void maldad() override;
        string getNombre() override; //nuevo


};