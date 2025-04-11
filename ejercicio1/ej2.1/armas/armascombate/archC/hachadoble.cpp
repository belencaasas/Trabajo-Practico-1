#include "../../../../archivosH/hachadoble.h"

HachaDoble::HachaDoble():
    ArmasCombate("hacha doble", 50 , 30 , 70, "mucha"), fuerzaRequerida(60){}

void HachaDoble::lanzar(){
    cout << "Se ha lanzado el hacha doble.." << endl;
}