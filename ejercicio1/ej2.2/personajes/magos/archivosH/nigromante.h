#include "../magos.h"

class Nigromante: public Magos{
    public: 
        Nigromante(); 
        int necromancia; //habilidad para levantar y controlar muertos 
        virtual void resusitarMuertos();
};