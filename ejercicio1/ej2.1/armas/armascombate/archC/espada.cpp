#include "../../../../archivosH/espada.h"

//def del constructor
Espada::Espada():
    ArmasCombate("espada" , 30 , 10 , 40 , "mediana"), filo(100)
{} 

void Espada::afilar(){
    this->filo += 20; 
    cout << "El filo de la espada es: " << filo << endl;
}

void Espada::alcance(){
    int alcance = 60;
    cout << "El alcance de la espada es de " << alcance << endl;
}

string Espada::getNombre(){
    return "Espada";
}