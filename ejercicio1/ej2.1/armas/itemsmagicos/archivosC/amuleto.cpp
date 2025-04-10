#include "../archivosH/amuleto.h"

Amuleto::Amuleto():
    ItemsMagicos( "amuleto" ,  5 ,  60 , 60 , "mucha"), poder("curar")
{}

void Amuleto::habilidadActiva(){
    cout << "Se ha activado la habilidad dde curar." << endl;
}