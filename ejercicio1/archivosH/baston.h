#include "itemsmagicos.h"
#pragma once 

class Baston : public ItemsMagicos{
    public: 
        Baston();
        virtual ~Baston(){}

        int fuerzaEncantamiento; 
        virtual void activarEncantamiento();
        void reparar() override;
        string getNombre() override; //nuevo

};