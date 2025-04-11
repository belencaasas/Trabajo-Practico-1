#include "itemsmagicos.h"

class Pocion: public ItemsMagicos{
    public: 
        Pocion();
        string efecto;
        virtual void usarPocion(); 
};