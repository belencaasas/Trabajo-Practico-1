#include "./guerreros.h"

class Caballero: public Guerreros{
    public: 
        Caballero();
        int habilidadConArmas();
        virtual void desafiar();
};