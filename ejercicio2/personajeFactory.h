#pragma once 
#include <memory>
#include <string>
#include "../ejercicio1/ej2.2/personajes/personajes.h"
#include "../ejercicio1/ej2.1/armas/armas.h"
using namespace std; 


class PersonajeFactory{
    public: 
        static shared_ptr<Personaje> crearPersonaje(string& tipoPersonaje , shared_ptr<Arma> arma = nullptr);
        static shared_ptr<Arma> crearArma(string& tipoArma);
        static shared_ptr<Personaje> crearPersonajeConArma(string& tipoPersonaje, string& tipoArma);
};