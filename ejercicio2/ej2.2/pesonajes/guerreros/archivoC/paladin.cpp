#include "../archivoH/paladin.h"

Paladin::Paladin():
    Guerreros(100,80,80,50,70), fe(100){}

void Paladin::escudoDeFe(){
    cout << "creando una barrera divina para protege." << endl; 
    this->fe -= 10;
}