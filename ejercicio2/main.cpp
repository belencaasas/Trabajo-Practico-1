#include <cstdlib> // para el rand()
#include <ctime> // para el time()
#include <iostream>
#include <vector>
#include "personajeFactory.h"
using namespace std;

// int main(){
//     srand(time(NULL));

//     int cantidadPersonajes = rand() % 5 + 3; 
//     vector<shared_ptr<Personaje>> personajes;
//     cout << "---CREANDO " << cantidadPersonajes << " PERSONAJES CON ARMAS---" << endl; 

//     PersonajeFactory::crearPersonajeConArma();

//     for (int i = 0 ; i < cantidadPersonajes; i++){
//         personajes.push_back(PersonajeFactory::crearPersonajeConArma());
//     }

//     //ITERAR SOBRE EL VECTOR Y MOSTRAR EL PERSONAJE CON SUS X CANT DE ARMAS
    
    
// };