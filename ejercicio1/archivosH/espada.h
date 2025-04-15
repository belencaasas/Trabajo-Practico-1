#include "armascombate.h"
#pragma once 

class Espada: public ArmasCombate{
    public:
        Espada();
        virtual ~Espada(){}

        int filo;
        virtual void afilar();
        
        void alcance() override;
        string getNombre() override; 

};