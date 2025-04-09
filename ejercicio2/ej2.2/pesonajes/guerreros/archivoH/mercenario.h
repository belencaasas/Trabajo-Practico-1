#include "./guerreros.h"

class Mercenario: public Guerreros{
    public: 
        Mercenario();
        int punteria;
        virtual void usarPunteria(); //usa el terreno a su favor --> escondite ...
};