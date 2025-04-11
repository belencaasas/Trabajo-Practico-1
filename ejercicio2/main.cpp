#include <cstdlib> // para el rand()
#include <ctime> // para el time()
#include <iostream>
#include <vector>
#include "personajeFactory.h"
using namespace std;

int main(){
    srand(time(NULL));
    PersonajeFactory factory; 

    int cantidadPersonajes = rand() % 5 + 3; 
    cout << "---CREANDO " << cantidadPersonajes << " PERSONAJES CON ARMAS---" << endl;
    
}