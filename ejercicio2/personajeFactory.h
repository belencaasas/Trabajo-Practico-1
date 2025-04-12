#pragma once 
#include <memory>
#include <string>
#include "../ejercicio1/archivosH/personajes.h"
#include "../ejercicio1/archivosH/armas.h"

/*#include "../ejercicio1/archivosH/amuleto.h"
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
#include "../ejercicio1/archivosH/pocion.h"*/


using namespace std; 


class PersonajeFactory{
    public: 
        static shared_ptr<Personaje> crearPersonaje();
        static shared_ptr<Arma> crearArma();
        static shared_ptr<Personaje> crearPersonajeConArma();
};