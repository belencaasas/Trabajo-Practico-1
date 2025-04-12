#include "guerreros.h"
#pragma once 

class Mercenario: public Guerreros{
    public: 
        Mercenario();
        virtual ~Mercenario(){}

        int punteria;
        virtual void usarPunteria(); //usa el terreno a su favor --> escondite ...
        void maldad() override;
        string getNombre() override; //nuevo


};