#include "itemsmagicos.h"

class LibroDeHechizos : public ItemsMagicos{
    public: 
        LibroDeHechizos();
        string tipoDeHechizo; //maldicion - curar 
        virtual void usarHechizo();
        void reparar() override;

};