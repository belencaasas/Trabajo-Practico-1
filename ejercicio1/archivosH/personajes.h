#pragma once 
#include <string>
#include <iostream>
#include <set>
#include <memory>
#include <vector>
#include "armas.h"
using namespace std;

class Personaje{
    public:
        virtual void recargarEnergia() = 0;
        virtual void atacar() = 0;
        virtual void bloquear() = 0;
        virtual void provocar() = 0;
        virtual void distraer() = 0;
        virtual void setArmas(vector<shared_ptr<Arma>> armas) = 0;
        virtual string getNombre() = 0;
        virtual vector<shared_ptr<Arma>> getArmas() = 0;

};



