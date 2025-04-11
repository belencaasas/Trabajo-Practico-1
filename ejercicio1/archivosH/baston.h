#include "itemsmagicos.h"

class Baston : public ItemsMagicos{
    public: 
        Baston();
        int fuerzaEncantamiento; 
        virtual void activarEncantamiento();
};