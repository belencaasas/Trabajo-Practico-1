#include "guerreros.h"

class Barbaro: public Guerreros{
    public: 
        Barbaro();
        int rabia; //cant de energia que se acumula para atacar 
        virtual void golpeBrutal();
};