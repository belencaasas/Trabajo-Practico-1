#include "armascombate.h"
#pragma once 

class HachaDoble: public ArmasCombate{
    public:
        HachaDoble();
        virtual ~HachaDoble(){}

        int fuerzaRequerida; //fuerza que se necesita para lanzarla
        virtual void lanzar();

        void alcance()override;
        string getNombre() override; 
};