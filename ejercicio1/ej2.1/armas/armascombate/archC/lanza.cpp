#include "../../../../archivosH/lanza.h"

Lanza::Lanza():
    ArmasCombate("lanza", 20, 5, 25, "poca" ), material("madera"){}

void Lanza::mostrarMateria(){
    cout << "El material de la Lanza es " << material << endl;
}

void Lanza::alcance(){
    int alcance = 90;
    cout << "El alcance de la lanza es de " << alcance << endl;
}

string Lanza::getNombre(){
    return "Lanza";
}