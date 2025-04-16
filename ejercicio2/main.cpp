#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include <vector>
#include "personajeFactory.h"
using namespace std;

int main(){
    srand(time(0));

    int cantidadPersonajes = rand() % 5 + 3; 
    vector<unique_ptr<Personaje>> personajes;
    cout << "\n -----CREANDO " << cantidadPersonajes << " PERSONAJES CON ARMAS-----" << endl;

    
    for (int i = 0 ; i < cantidadPersonajes; i++){
        personajes.push_back(PersonajeFactory::crearPersonajeConArma());
    } 

    cout << "\n -----MOSTRANDO PERSONAJES Y SUS ARMAS-----\n" << endl;
    for (size_t i = 0; i < personajes.size() ; i++){
        //unique_ptr<Personaje> personaje = personajes[i];
        Personaje* personaje = personajes[i].get();

        cout << i + 1 << ") Personaje: " << personaje->getNombre() << endl;
        const vector<unique_ptr<Arma>>& armas = personaje->getArmas();   

        if(armas.empty()){
            cout << " sin armas." << endl;
        }
        else{ 
            for (auto& arma: armas){
                cout << " Arma: " << arma->getNombre() << endl; 
            }
        }
    }
       
        
};

