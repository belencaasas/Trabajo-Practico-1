#include "../armascombate.h"

class Garrote: public ArmasCombate{
    public:
        Garrote();
        int gravedadDeGolpe;
        virtual void golpear();
};