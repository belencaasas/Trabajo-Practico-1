#include "../personajes.h"

class Guerreros: public Personaje{
    public:
        float vida; 
        float ataque; 
        float defensa; 
        float inteligencia;
        float agilidad;
        Guerreros(float vida, float ataque, float defensa, float inteligencia, float agilidad): vida(vida), ataque(ataque), defensa(defensa), inteligencia(inteligencia), agilidad(agilidad){}
       
        virtual void recargarEnergia() override;
        virtual void atacar() override;
        virtual void bloquear() override;
        virtual void provocar() override;
        virtual void distraer() override;
};