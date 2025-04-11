#include "../../../../archivosH/amuleto.h"


Amuleto::Amuleto():
    ItemsMagicos( "amuleto" ,  5 ,  60 , 60 , "mucha"), poder("curar")
{}

void Amuleto::habilidadActiva(){
    cout << "Se ha activado la habilidad dde curar." << endl;
}

void Amuleto::reparar(){
    durabilidad += 30; //puede mejorar su estado original 
    cout << "El amuleto se ha reparado, su durabilidad es: " << durabilidad << endl;
}