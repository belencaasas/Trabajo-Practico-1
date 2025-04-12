#include "../../../../archivosH/barbaro.h"


Barbaro::Barbaro():
    Guerreros(100,90,90,65,70), rabia(90){}

void Barbaro::golpeBrutal(){
   cout<< "El barbaro esta usando su golpe mas fuerte con una rabia de " << rabia << endl; 
} 

void Barbaro::maldad(){
    string maldad = "media" ;
    cout << "La maldad del barbaro es " << maldad << endl;

} 

string Barbaro::getNombre(){
    return "Barbaro";
}