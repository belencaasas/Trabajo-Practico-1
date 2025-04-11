#include "armascombate.h"

class Lanza: public ArmasCombate{
    public:
        Lanza();
        int _alcance;
        virtual void mejorarAlcance();
        void alcance()override;

};