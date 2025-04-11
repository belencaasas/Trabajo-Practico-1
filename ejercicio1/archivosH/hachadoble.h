#include "armascombate.h"

class HachaDoble: public ArmasCombate{
    public:
        HachaDoble();
        int fuerzaRequerida; //fuerza que se necesita para lanzarla
        virtual void lanzar();
};