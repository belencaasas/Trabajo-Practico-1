#include "guerreros.h"

class Gladiador: public Guerreros{
    public:
        Gladiador();
        int fuerza;
        virtual void llamaAlPublico();
        void maldad() override;

};