#include "../archivosH/brujo.h"

Brujo::Brujo():
    Magos(100,60,60,90,20), almasRecogidas(50){}

void Brujo::pactarconDemonios(){ 
    cout << "Brujo pactando con demonios.." << endl;
    this->almasRecogidas += 5; 
    cout << "Cantidad de almas recogidas actualizadas: " << almasRecogidas << endl;
    
}