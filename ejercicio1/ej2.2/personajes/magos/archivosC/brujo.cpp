#include "../../../../archivosH/brujo.h"

Brujo::Brujo():
    Magos(100,60,60,90,20), almasRecogidas(50){}

void Brujo::pactarconDemonios(){ 
    cout << "Brujo pactando con demonios...";
    this->almasRecogidas += 5; 
    cout << "Cantidad de almas recogidas actualizadas: " << almasRecogidas << endl;
    
}

void Brujo::age(){
    int edad = 100;
    cout << "La edad del brujo es " << edad << endl; 
} 

string Brujo::getNombre(){
    return "Brujo";
}