#include "../armascombate.h"

class Lanza: public ArmasCombate{
    public:
        Lanza();
        int alcance();
        virtual void verificarPunta();
};