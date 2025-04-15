#include "armascombate.h"
#pragma once 

class HachaSimple: public ArmasCombate{
    public:
        HachaSimple();
        virtual ~HachaSimple(){}

        int afilado;
        virtual void afilar();
        
        void alcance()override;
        string getNombre() override; 


};