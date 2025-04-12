#include "../../../../archivosH/garrote.h"

Garrote::Garrote():
    ArmasCombate("garrote", 40 , 5, 28 , "poca"), gravedadDeGolpe(28){}

void Garrote::golpear(){
    this->gravedadDeGolpe -= 1; 
    cout << "La gravedad del golpe del garrote quedo en: " << gravedadDeGolpe << endl; 
}

void Garrote::alcance(){
    int alcance = 40;
    cout << "El alcance del garrote es de " << alcance << endl;
}
string Garrote::getNombre(){
    return "Garrote";
}