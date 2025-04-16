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

unique_ptr<Personaje> PersonajeFactory::crearPersonaje(){ // crea un personaje, el tipo de personaje lo crea de forma aleatoria
    int numero = rand() % 9 + 1; //(9-1 + 1) + 1

    switch (numero){
        case 1: return make_unique<Hechicero>();  
        case 2: return make_unique<Conjugador>();
        case 3: return make_unique<Brujo>();
        case 4: return make_unique<Nigromante>();
        case 5: return make_unique<Barbaro>();
        case 6: return make_unique<Paladin>();
        case 7: return make_unique<Caballero>();
        case 8: return make_unique<Mercenario>();
        case 9: return make_unique<Gladiador>();
        default: return nullptr;
    }
} 

unique_ptr<Arma> PersonajeFactory::crearArma(){ // crea un arma, el tipo de personaje lo crea de forma aleatoria
    int numero = rand() % 9 + 1; //(9-1 + 1) + 1
    switch (numero){
        case 1: return make_unique<Baston>();
        case 2: return make_unique<LibroDeHechizos>();
        case 3: return make_unique<Pocion>();
        case 4: return make_unique<Amuleto>();
        case 5: return make_unique<HachaSimple>();
        case 6: return make_unique<HachaDoble>(); 
        case 7: return make_unique<Espada>();
        case 8: return make_unique<Lanza>();
        case 9: return make_unique<Garrote>();
        default: return nullptr;
    }
} 

unique_ptr<Personaje> PersonajeFactory::crearPersonajeConArma(){
    unique_ptr<Personaje> personaje = crearPersonaje();
    int cantDeArmas = rand() % 3;

    for(int i=0; i < cantDeArmas; i++){
        unique_ptr<Arma> arma = crearArma();
        personaje->setArmas(move(arma));
    }
    return personaje;

}  




