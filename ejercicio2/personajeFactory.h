#pragma once 
#include <memory>
#include <string>
#include "../ejercicio1/archivosH/personajes.h"
#include "../ejercicio1/archivosH/armas.h"
using namespace std; 


class PersonajeFactory{
    public: 
        static shared_ptr<Personaje> crearPersonaje(); 
        static shared_ptr<Arma> crearArma();
        static shared_ptr<Personaje> crearPersonajeConArma();
};