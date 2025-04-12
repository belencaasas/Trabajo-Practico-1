#include "../../../../archivosH/hachasimple.h"

HachaSimple::HachaSimple():
    ArmasCombate("hacha simple", 40 , 20 , 55, "mucha"), afilado(50){}

void HachaSimple::afilar(){
    this->afilado += 15;
    cout << "Se ha afilado el hacha simple, su filo es de: " << afilado << endl;
}

void HachaSimple::alcance(){
    int alcance = 90;
    cout << "El alcance del hacha simple es de " << alcance << endl;
}

string HachaSimple::getNombre(){
    return "Hacha Simple";
}