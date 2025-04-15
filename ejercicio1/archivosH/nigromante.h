#include "magos.h"
#pragma once 

class Nigromante: public Magos{
    public: 
        Nigromante(); 
        virtual ~Nigromante(){}

        int necromancia; //habilidad para levantar y controlar muertos 
        virtual void resusitarMuertos();

        void age() override;
        string getNombre() override; 
};