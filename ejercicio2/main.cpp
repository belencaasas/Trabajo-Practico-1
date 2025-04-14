#include <cstdlib> // para el rand()
#include <ctime> // para el time()
#include <iostream>
#include <vector>
#include "personajeFactory.h"
using namespace std;

int main(){
    srand(time(0));

    int cantidadPersonajes = rand() % 5 + 3; 
    vector<shared_ptr<Personaje>> personajes;
    cout << "---CREANDO " << cantidadPersonajes << " PERSONAJES CON ARMAS---" << endl;

    
    for (int i = 0 ; i < cantidadPersonajes; i++){
        personajes.push_back(PersonajeFactory::crearPersonajeConArma());
    } 

    cout << "\n -----MOSTRANDO PERSONAJES Y SUS ARMAS-----\n" << endl;
    for (size_t i = 0; i < personajes.size() ; i++){
        shared_ptr<Personaje> personaje = personajes[i];

        cout << i + 1 << ") Personaje: " << personaje->getNombre() << endl;
        vector<shared_ptr<Arma>> armas = personaje->getArmas();  //HACER 

        if(armas.empty()){
            cout << " sin armas." << endl;
        }
        else{ 
            for (auto& arma: armas){
                cout << " Arma: " << arma->getNombre() << endl; //HACER
            }
        }
    }
       
        
};

