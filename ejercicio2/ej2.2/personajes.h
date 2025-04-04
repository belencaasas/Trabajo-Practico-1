#pragma once 
#include <string>
#include <iostream>

class Personaje{
    public:
         

        Personaje(float vida, float ataque, float defensa, float inteligencia, float agilidad) : vida(vida), ataque(ataque), defensa(defensa) , inteligencia(inteligencia), agilidad(agilidad){}

        virtual void teletransportarse() = 0;
        virtual void atacar() = 0;
        virtual void bloquear() = 0;
        virtual void provocar() = 0;
        virtual void distraer() = 0;
};

class Mago: public Personaje{
    public:
       
        virtual void teletransportarse() override;
        virtual void atacar() override;
        virtual void bloquear() override;
        virtual void provocar() override;
        virtual void distraer() override;
};

class Guerrero: public Personaje{
    public:
        float vida; 
        float ataque; 
        float defensa; 
        float inteligencia;
        float agilidad;
        Guerrero(float vida, float ataque, float defensa, float inteligencia, float agilidad): Personaje(vida, ataque, defensa, inteligencia, agilidad){}
       
        virtual void teletransportarse() override;
        virtual void atacar() override;
        virtual void bloquear() override;
        virtual void provocar() override;
        virtual void distraer() override;
};