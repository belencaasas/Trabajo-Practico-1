#pragma once 
#include <string>
#include <iostream>
using namespace std;


class Personaje{
    public:
        virtual void recargarEnergia() = 0;
        virtual void atacar() = 0;
        virtual void bloquear() = 0;
        virtual void provocar() = 0;
        virtual void distraer() = 0;

        // HACER EL SET
};



