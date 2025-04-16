#pragma once 
#include <memory>
#include <string>
#include "../ejercicio1/archivosH/personajes.h"
#include "../ejercicio1/archivosH/armas.h"
using namespace std; 


class PersonajeFactory{
    public: 
        static unique_ptr<Personaje> crearPersonaje(); 
        static unique_ptr<Arma> crearArma();
        static unique_ptr<Personaje> crearPersonajeConArma();
};