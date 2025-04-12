#include "../../../../archivosH/lanza.h"

Lanza::Lanza():
    ArmasCombate("lanza", 20, 5, 25, "poca" ), _alcance(50){}

void Lanza::mejorarAlcance(){
    this->_alcance += 10;
    cout << "Se ha mejorado el alcance de la lanza, ahora es de: " << alcance << endl;
}

void Lanza::alcance(){
    int alcance = 90;
    cout << "El alcance de la lanza es de " << alcance << endl;
}

string Lanza::getNombre(){
    return "Lanza";
}