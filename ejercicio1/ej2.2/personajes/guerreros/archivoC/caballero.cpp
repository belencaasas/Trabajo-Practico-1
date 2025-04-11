#include "../../../../archivosH/caballero.h"

Caballero::Caballero():
    Guerreros(100,90,90,65,60), habilidadConArmas(100){}

void Caballero::desafiar(){
    cout << "Caballero desafiando al enemigo con una habilidad para las armas de " << habilidadConArmas << endl;
    
}

void Caballero::maldad(){
    string maldad = "nula" ;
    cout << "La maldad del caballero es " << maldad << endl;

}