#include "../../../../archivosH/hachasimple.h"

HachaSimple::HachaSimple():
    ArmasCombate("hacha simple", 40 , 20 , 55, "mucha"), afilado(50){}

void HachaSimple::afilar(){
    this->afilado += 15;
    cout << "Se ha afilado el hacha simple, su filo es de: " << afilado << endl;
}