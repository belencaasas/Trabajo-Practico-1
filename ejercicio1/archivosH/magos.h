#include "personajes.h"

class Magos: public Personaje{
    public:
        float vida; 
        float ataque; 
        float defensa; 
        float inteligencia;
        float agilidad;

        vector<shared_ptr<Arma>> armas;
        Magos(float vida, float ataque, float defensa, float inteligencia, float agilidad): vida(vida), ataque(ataque), defensa(defensa), inteligencia(inteligencia), agilidad(agilidad){}

        virtual void age() = 0;

        void recargarEnergia() override;
        void atacar() override;
        void bloquear() override;
        void provocar() override;
        void distraer() override;
        void setArmas(vector<shared_ptr<Arma>> armas) override;


};