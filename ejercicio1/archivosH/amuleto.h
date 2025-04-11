#include "itemsmagicos.h"

class Amuleto: public ItemsMagicos{
    public: 
        Amuleto();
        //atributo
        string poder; 
        virtual void habilidadActiva();
        void reparar() override;

};