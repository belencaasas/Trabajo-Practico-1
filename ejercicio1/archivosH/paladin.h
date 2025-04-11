#include "guerreros.h"

class Paladin: public Guerreros{
    public: 
        Paladin();
        int fe; // cant de fe para canalizar habilidades 
        virtual void escudoDeFe(); //crea una barrera divina q protege de dano
        void maldad() override;

};