#pragma once 
#include <string>
#include <iostream> 
using namespace std;

class Arma { 
    public:
         
        virtual void usar() = 0; //usar arma
        virtual void golpear() = 0;  //al golpear disminuye la durabilidad 
        virtual void mejorar() = 0; //al mejorar aumenta la durabilidad 
        virtual void destruir() = 0; // al destruir su durabilidad se convierte en cero 
        virtual void verDurabilidad() = 0; //muestra la durabilidad del arma
        virtual string getNombre() = 0; //obtiene el nombre del arma 

        virtual ~Arma() = default;
};