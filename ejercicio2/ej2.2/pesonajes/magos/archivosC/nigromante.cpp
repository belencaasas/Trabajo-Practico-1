#include "../archivosH/nigromante.h"

Nigromante::Nigromante():
    Magos(100,20,20,85,50), necromancia(100){}

void Nigromante::resusitarMuertos(){ 
    cout << "Nigromante resusitanto muertos.." << endl; 
    this-> necromancia -= 10; 
    cout << "Actualizacion de su necromancia: " << necromancia << endl;
    
}