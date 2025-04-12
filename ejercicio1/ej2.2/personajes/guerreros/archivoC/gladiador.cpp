#include "../../../../archivosH/gladiador.h"

Gladiador::Gladiador():
    Guerreros(100,80,80,65,80), fuerza(100){}

void Gladiador::llamaAlPublico(){
    cout << "Gladiador incentivando al publico.." << endl;
}

void Gladiador::maldad(){
    string maldad = "media" ;
    cout << "La maldad del gladiados es " << maldad << endl;

}

string Gladiador::getNombre(){
    return "Gladiador";
}