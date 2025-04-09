#include "../magos.h"

class Conjugador: public Magos{
    public: 
        Conjugador(); 
        int carisma; // capacidad de comunicacion con entidades
        virtual void invocarCriaturas();
};