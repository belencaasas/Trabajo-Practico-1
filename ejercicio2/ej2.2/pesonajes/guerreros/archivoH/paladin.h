#include "./guerreros.h"

class Paldin: public Guerreros{
    public: 
        Paldin();
        int fe(); // cant de fe para canalizar habilidades 
        virtual void escudoDeFe(); //crea una barrera divina q protege de dano
};