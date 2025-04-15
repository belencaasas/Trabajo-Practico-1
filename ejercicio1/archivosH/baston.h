#include "itemsmagicos.h"
#pragma once 

class Baston : public ItemsMagicos{
    public: 
        Baston();
        virtual ~Baston(){}

        int fuerzaEncantamiento; //cantidad de fuerza que tiene el baston 
        virtual void activarEncantamiento();

        void reparar() override;
        string getNombre() override; 

};