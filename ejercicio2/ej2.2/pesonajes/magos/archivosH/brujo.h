#include "../magos.h"

class Brujo: public Magos{
    public: 
        Brujo(); 
        int almasRecogidas(); // cant de armas brujo ha recolectado 
        virtual void pactarconDemonios();
};