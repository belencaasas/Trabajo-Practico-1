#include "../../../../archivosH/hachadoble.h"

HachaDoble::HachaDoble():
    ArmasCombate("hacha doble", 50 , 30 , 70, "mucha"), fuerzaRequerida(60){}

void HachaDoble::lanzar(){
    cout << "Se ha lanzado el hacha doble.." << endl;
}
void HachaDoble::alcance(){
    int alcance = 80;
    cout << "El alcance del hacha doble es de " << alcance << endl;
}

string HachaDoble::getNombre(){
    return "Hacha Doble";
}