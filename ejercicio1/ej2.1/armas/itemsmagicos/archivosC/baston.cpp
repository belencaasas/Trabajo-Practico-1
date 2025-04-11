#include "../../../../archivosH/baston.h"


Baston::Baston():
    ItemsMagicos( "baston" , 20  , 70 , 30 , "poca"), fuerzaEncantamiento(100)
{}

void Baston::activarEncantamiento(){
    cout << "Se ha activado el encantamiento..." << endl;
    this->fuerzaEncantamiento -= 10; 
    cout << "La fuerza de encantamiento ha quedado en: " << fuerzaEncantamiento << endl;
}

void Baston::reparar(){
    durabilidad += 30; //puede mejorar su estado original 
    cout << "El baston se ha reparado, su durabilidad es: " << durabilidad << endl;
}