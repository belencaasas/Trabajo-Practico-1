#include "../../../../archivosH/pocion.h"


Pocion::Pocion():
    ItemsMagicos( "pocion" , 5  , 60 , 55 , "media"), efecto("invisibilidad")
{}

void Pocion::usarPocion(){ 
    cout << "Se esta utilizando el poder de " << efecto << "..." << endl;
    
}

void Pocion::reparar(){
    durabilidad += 30; //puede mejorar su estado original 
    cout << "La pocion se ha reparado, su durabilidad es: " << durabilidad << endl;
}

string Pocion::getNombre(){
    return "Pocion";
}