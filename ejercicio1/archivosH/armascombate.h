#include "armas.h"
#pragma once 

class ArmasCombate : public Arma{ 
    public:
        string tipoDeArma; //nombre de cada arma 
        float peso;  // peso de cada arma 
        int nivelDePoder; //determina su dano / efectividad -
        int durabilidad;  //cuantos usos soporta 
        string resistencia; //resistencia a cierto tipos de ataque (fuego -agua)
        
        

        ArmasCombate(string tipoDeArma , float peso , int nivelDePoder , int durabilidad , string resistencia) 
        : tipoDeArma(tipoDeArma) , peso(peso) , nivelDePoder(nivelDePoder) , durabilidad(durabilidad), resistencia(resistencia){} 

        virtual void alcance() = 0; //muestra el alcance de cada arma
        virtual string getNombre() = 0;

        void usar() override;
        void golpear()override;
        void mejorar()override;
        void destruir()override;
        void verDurabilidad()override; 



};