#include "guerreros.h"
#pragma once 

class Gladiador: public Guerreros{
    public:
        Gladiador();
        virtual ~Gladiador(){}

        int fuerza;
        virtual void llamaAlPublico();
        
        void maldad() override;
        string getNombre() override; 
};