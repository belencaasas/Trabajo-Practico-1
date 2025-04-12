#pragma once 
#include "itemsmagicos.h"

class Amuleto: public ItemsMagicos{
    public: 
        Amuleto();
        virtual ~Amuleto(){}
        
        string poder; 
        virtual void habilidadActiva();
        void reparar() override;
        string getNombre() override; //nuevo

};