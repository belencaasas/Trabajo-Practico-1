#include "magos.h"
#pragma once 

class Hechicero: public Magos{
    public: 
        Hechicero(); 
        virtual ~Hechicero(){}

        int sabiduria; 
        virtual void leerFuturo();
        void age() override;
        string getNombre() override; //nuevo


};