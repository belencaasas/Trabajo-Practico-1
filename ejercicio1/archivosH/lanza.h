#include "armascombate.h"
#pragma once 

class Lanza: public ArmasCombate{
    public:
        Lanza();
        virtual ~Lanza(){}

        int _alcance;
        virtual void mejorarAlcance();
        void alcance()override;
        string getNombre() override; //nuevo


};