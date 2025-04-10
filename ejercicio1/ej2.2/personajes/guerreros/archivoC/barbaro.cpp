#include "../archivoH/barbaro.h"

Barbaro::Barbaro():
    Guerreros(100,90,90,65,70), rabia(90){}

void Barbaro::golpeBrutal(){
   cout<< "El barbaro esta usando su golpe mas fuerte con una rabia de " << rabia << endl; 
}