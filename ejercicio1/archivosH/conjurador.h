#include "magos.h"
#pragma once 

class Conjugador: public Magos{
    public: 
        Conjugador(); 
        virtual ~Conjugador(){}

        int carisma; // capacidad de comunicacion con entidades
        virtual void invocarCriaturas();
        
        void age() override;
        string getNombre() override; 


};