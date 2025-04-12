#include "../../../../archivosH/hechicero.h"

Hechicero::Hechicero():
    Magos(100,80,80,90,20), sabiduria(90){}

void Hechicero::leerFuturo(){ 
    cout << "hechicero leyendo el futuro y tiene una sabiduria de: " << sabiduria << endl;
    
}

void Hechicero::age(){
    int edad = 70;
    cout << "La edad del hechicero es " << edad << endl; 
} 

string Hechicero::getNombre(){
    return "Hechicero";
}