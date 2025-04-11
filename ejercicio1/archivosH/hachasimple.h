#include "armascombate.h"

class HachaSimple: public ArmasCombate{
    public:
        HachaSimple();
        int afilado;
        virtual void afilar();
        void alcance()override;

};