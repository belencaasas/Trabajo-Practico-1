#include "./guerreros.h"

class Mercenario: public Guerreros{
    public: 
        Mercenario();
        int punteria();
        virtual void tacticasSuelo(); //usa el terreno a su favor --> escondite ...
};