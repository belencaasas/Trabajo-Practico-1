#include "armas.h"
#pragma once 


class ItemsMagicos: public Arma{
    public: 
        string tipoDeItem; //nombre del item magico
        float peso; // el peso de cada item
        int nivelDePoder; //determina su dano / efectividad -
        int durabilidad;  //cuantos usos soporta 
        string resistencia; //resistencia a cierto tipos de ataque (fuego -agua)
        
        
        
        ItemsMagicos(string tipoDeItem , float peso , int nivelDePoder , int durabilidad , string resistencia) 
        : tipoDeItem(tipoDeItem) , peso(peso) , nivelDePoder(nivelDePoder) , durabilidad(durabilidad), resistencia(resistencia){} 

        virtual void reparar() = 0; //repara el item
        virtual string getNombre() = 0; //devuelve el nombre del item

        void usar() override;
        void golpear()override;
        void mejorar()override;
        void destruir()override;
        void verDurabilidad()override;

};