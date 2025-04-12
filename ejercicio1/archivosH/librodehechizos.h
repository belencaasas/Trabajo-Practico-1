#include "itemsmagicos.h"
#pragma once 

class LibroDeHechizos : public ItemsMagicos{
    public: 
        LibroDeHechizos();
        virtual ~LibroDeHechizos(){}

        string tipoDeHechizo; //maldicion - curar 
        virtual void usarHechizo();
        void reparar() override;
        string getNombre() override; //nuevo


};