#include "armas.h"

class ArmasCombate : public Arma{ 
    public:
        //atributos 
        string tipoDeArma;
        float peso; 
        int nivelDePoder; //determina su dano / efectividad -
        int durabilidad;  //cuantos usos soporta 
        string resistencia; //resistencia a cierto tipos de ataque (fuego -agua)
        
        

        ArmasCombate(string tipoDeArma , float peso , int nivelDePoder , int durabilidad , string resistencia) 
        : tipoDeArma(tipoDeArma) , peso(peso) , nivelDePoder(nivelDePoder) , durabilidad(durabilidad), resistencia(resistencia){} 

        virtual void alcance() = 0;

        void usar() override;
        void golpear()override;
        void mejorar()override;
        void destruir()override;
        void verDurabilidad()override;

};