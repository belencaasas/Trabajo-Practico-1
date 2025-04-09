#include "../archH/espada.h"

//def del constructor
Espada::Espada():
    ArmasCombate("espada" , 30 , 10 , 40 , "mediana"), filo(100)
{} 

void Espada::afilar(){
    this->filo += 20; 
    cout << "El filo de la espada es: " << filo << endl;
}