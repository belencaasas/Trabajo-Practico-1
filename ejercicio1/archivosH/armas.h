#pragma once 
#include <string>
#include <iostream> 
using namespace std;

class Arma { 
    public:
        //metodos 
        virtual void usar() = 0; 
        virtual void golpear() = 0;  //al golpear disminuye la durabilidad 
        virtual void mejorar() = 0; 
        virtual void destruir() = 0;
        virtual void verDurabilidad() = 0;
        virtual string getNombre() = 0;

        virtual ~Arma() = default;
};