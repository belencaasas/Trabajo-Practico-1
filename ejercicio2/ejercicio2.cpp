#include "personajeFactory.h"
#include <memory>
#include <stdexcept>
#include <iostream>
#include <vector>
#include "../ejercicio1/archivosH/amuleto.h"
#include "../ejercicio1/archivosH/barbaro.h"
#include "../ejercicio1/archivosH/baston.h"
#include "../ejercicio1/archivosH/brujo.h"
#include "../ejercicio1/archivosH/caballero.h"
#include "../ejercicio1/archivosH/conjurador.h"
#include "../ejercicio1/archivosH/espada.h"
#include "../ejercicio1/archivosH/garrote.h"
#include "../ejercicio1/archivosH/gladiador.h"
#include "../ejercicio1/archivosH/hachadoble.h"
#include "../ejercicio1/archivosH/hachasimple.h"
#include "../ejercicio1/archivosH/hechicero.h"
#include "../ejercicio1/archivosH/lanza.h"
#include "../ejercicio1/archivosH/librodehechizos.h"
#include "../ejercicio1/archivosH/mercenario.h"
#include "../ejercicio1/archivosH/nigromante.h"
#include "../ejercicio1/archivosH/paladin.h"
#include "../ejercicio1/archivosH/pocion.h"

shared_ptr<Personaje> PersonajeFactory::crearPersonaje(){
    srand(time(NULL));
    int numero = rand() % 9 + 1; //(9-1 + 1) + 1
    switch (numero){
        case 1: return make_shared<Hechicero>();
        case 2: return make_shared<Conjugador>();
        case 3: return make_shared<Brujo>();
        case 4: return make_shared<Nigromante>();
        case 5: return make_shared<Barbaro>();
        case 6: return make_shared<Paladin>();
        case 7: return make_shared<Caballero>();
        case 8: return make_shared<Mercenario>();
        case 9: return make_shared<Gladiador>();
        default: return nullptr;
    }
} 

shared_ptr<Arma> PersonajeFactory::crearArma(){
    srand(time(NULL));
    int numero = rand() % 9 + 1; //(9-1 + 1) + 1
    switch (numero){
        case 1: return make_shared<Baston>();
        case 2: return make_shared<LibroDeHechizos>();
        case 3: return make_shared<Pocion>();
        case 4: return make_shared<Amuleto>();
        case 5: return make_shared<HachaSimple>();
        case 6: return make_shared<HachaDoble>();
        case 7: return make_shared<Espada>();
        case 8: return make_shared<Lanza>();
        case 9: return make_shared<Garrote>();
        default: return nullptr;
    }
} 

shared_ptr<Personaje> PersonajeFactory::crearPersonajeConArma(){
    shared_ptr<Personaje> personaje = crearPersonaje();
    srand(time(NULL));
    int cantDeArmas = rand() % 3;
    vector<shared_ptr<Arma>> armas;

    for(int i=0; i < cantDeArmas; i++){
        shared_ptr<Arma> arma = crearArma();
        armas.push_back(arma);
    }
    personaje->setArmas(armas);
    return personaje;

}  




