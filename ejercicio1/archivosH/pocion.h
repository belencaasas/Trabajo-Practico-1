#include "itemsmagicos.h"
#pragma once 

class Pocion: public ItemsMagicos{
    public: 
        Pocion();
        virtual ~Pocion(){}

        string efecto;
        virtual void usarPocion(); 
        void reparar() override;
        string getNombre() override; //nuevo


};