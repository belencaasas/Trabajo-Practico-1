#include "../archivosH/pocion.h"

Pocion::Pocion():
    ItemsMagicos( "pocion" , 5  , 60 , 55 , "media"), efecto("invisibilidad")
{}

void Pocion::usarPocion(){ 
    cout << "Se esta utilizando el poder de " << efecto << "..." << endl;
    
}