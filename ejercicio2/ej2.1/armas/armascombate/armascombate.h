#include "../armas.h"

class ArmasCombate : public Arma{ 
    public:
        //atributos 
        string tipoDeDaño;
        float peso; 
        int nivelDePoder; //determina su dano / efectividad -
        int durabilidad;  //cuantos usos soporta 
        string resistenciaEspecial; //resistencia a cierto tipos de ataque (fuego -agua)
        
        string tipoDeArma;

        ArmasCombate(string tipoDeDaño , float peso , int nivelDePoder , int durabilidad , string resistenciaEspecial , string tipoDeItem) 
        : tipoDeDaño(tipoDeDaño) , peso(peso) , nivelDePoder(nivelDePoder) , durabilidad(durabilidad), resistenciaEspecial(resistenciaEspecial), tipoDeArma(tipoDeArma){} 


        virtual void usar() override;
        virtual void golpear()override;
        virtual void mejorar()override;
        virtual void destruir()override;
        virtual void verDurabilidad()override;

};