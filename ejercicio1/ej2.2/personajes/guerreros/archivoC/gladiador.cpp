#include "../archivoH/gladiador.h"

Gladiador::Gladiador():
    Guerreros(100,80,80,65,80), fuerza(100){}

void Gladiador::llamaAlPublico(){
    cout << "Gladiador incentivando al publico.." << endl;
}