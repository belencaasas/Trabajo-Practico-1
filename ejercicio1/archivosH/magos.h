#include "personajes.h"
#pragma once 


class Magos: public Personaje{
    public:
        float vida; //cantidad de vida que tiene el personaje
        float ataque;  //habilidad de ataque de cada personaje
        float defensa; //habilidad de defensa de cada personaje
        float inteligencia; //la inteligencia de cada personaje
        float agilidad; //la agilidad que posee cada personaje
        vector<unique_ptr<Arma>> armas; //vector con las armas de cada personajes   

        Magos(float vida, float ataque, float defensa, float inteligencia, float agilidad): vida(vida), ataque(ataque), defensa(defensa), inteligencia(inteligencia), agilidad(agilidad){}

        virtual void age() = 0;//la cantidad de maldad que posee cada personaje
        virtual string getNombre() = 0; //devuelve el nombrre de cada mago
        

        void recargarEnergia() override;
        void atacar() override;
        void bloquear() override;
        void provocar() override;
        void distraer() override;

        void setArmas(unique_ptr<Arma> armas) override; 
        const vector<unique_ptr<Arma>>& getArmas() const override; 
        int getVida() override;
        void reducirVida() override;


};