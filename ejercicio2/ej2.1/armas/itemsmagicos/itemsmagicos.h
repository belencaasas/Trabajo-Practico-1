#include "../armas.h"

class ItemsMagicos: public Arma{
    public: 
        //atributos 
        string tipoDeItem;
        float peso; 
        int nivelDePoder; //determina su dano / efectividad -
        int durabilidad;  //cuantos usos soporta 
        string resistencia; //resistencia a cierto tipos de ataque (fuego -agua)
        
        
        
        ItemsMagicos(string tipoDeItem , float peso , int nivelDePoder , int durabilidad , string resistencia) 
        : tipoDeItem(tipoDeItem) , peso(peso) , nivelDePoder(nivelDePoder) , durabilidad(durabilidad), resistencia(resistencia){} 

        virtual void usar() override;
        virtual void golpear()override;
        virtual void mejorar()override;
        virtual void destruir()override;
        virtual void verDurabilidad()override;

};