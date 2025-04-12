#include "../../../../archivosH/mercenario.h"

Mercenario::Mercenario():
    Guerreros(100,60,60,85,90), punteria(100){}

void Mercenario::usarPunteria(){
    cout << "Mercenario apuntando para disparar con una punteria de " << punteria << endl; 
    this -> punteria -= 10;
}

void Mercenario::maldad(){
    string maldad = "mucha" ;
    cout << "La maldad del mercenario es " << maldad << endl;

}

string Mercenario::getNombre(){
    return "Mercenario";
}