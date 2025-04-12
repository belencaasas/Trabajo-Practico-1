#include "magos.h"
#pragma once 

class Brujo: public Magos{
    public: 
        Brujo(); 
        virtual ~Brujo(){}

        int almasRecogidas; // cant de armas brujo ha recolectado 
        virtual void pactarconDemonios();
        void age() override;
        string getNombre() override; //nuevo

};