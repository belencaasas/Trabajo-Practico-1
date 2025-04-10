#include "personajeFactory.h"
#include <memory>
#include <stdexcept>
#include <iostream>

shared_ptr<Personaje> PersonajeFactory::crearPersonaje(string& tipoPersonaje, shared_ptr<Arma> arma){
    if(tipoPersonaje == "Mago"){
        auto mago = make_shared<Mago>(); //crea un mago
        return mago;
    }

}