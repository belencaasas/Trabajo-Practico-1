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
        virtual ~Personaje() = default;
        virtual void recargarEnergia() = 0; //recarga la energia del personaje
        virtual void atacar() = 0;  
        virtual void bloquear() = 0; 
        virtual void provocar() = 0; //provoca al enemigo para  sacarlo de su eje
        virtual void distraer() = 0; //distrae al enemigo para atacarlo

        virtual void setArmas(unique_ptr<Arma> arma) = 0; 
        virtual string getNombre() = 0;
        virtual const vector<unique_ptr<Arma>>& getArmas() const = 0; 

        virtual int getVida() = 0; //devuelve la vida del personaje
        virtual void reducirVida() = 0;  //reduce la vida del personaje en 10 
};



