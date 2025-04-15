#include "personajes.h"
#pragma once 


class Guerreros: public Personaje{
    public:
        float vida; //cantidad de vida que tiene el personaje
        float ataque;  //habilidad de ataque de cada personaje
        float defensa; //habilidad de defensa de cada personaje
        float inteligencia; //la inteligencia de cada personaje
        float agilidad; //la agilidad que posee cada personaje
        vector<shared_ptr<Arma>> armas; //vector con las armas de cada personajes

        Guerreros(float vida, float ataque, float defensa, float inteligencia, float agilidad): vida(vida), ataque(ataque), defensa(defensa), inteligencia(inteligencia), agilidad(agilidad){}
       
        virtual void maldad() = 0; //la cantidad de maldad que posee cada personaje
        virtual string getNombre() = 0; //devuelve el nombrre de cada guerrero

        void recargarEnergia() override;
        void atacar() override;
        void bloquear() override;
        void provocar() override;
        void distraer() override;

        void setArmas(vector<shared_ptr<Arma>> armas) override;
        vector<shared_ptr<Arma>> getArmas() override;
        int getVida() override;
        void reducirVida() override;
    };