#include "armascombate.h"

class Espada: public ArmasCombate{
    public:
        Espada();
        int filo;
        virtual void afilar();
        void alcance() override;
};