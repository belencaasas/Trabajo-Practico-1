#include <iostream>
#include <memory>
#include <cstdlib>
#include <ctime>

#include "../ejercicio1/archivosH/brujo.h"
#include "../ejercicio1/archivosH/barbaro.h"
#include "../ejercicio1/archivosH/espada.h"
#include "../ejercicio1/archivosH/baston.h"
#include "batalla.h"

#include "../ejercicio2/personajeFactory.h"

using namespace std;

int main() {
    srand(time(nullptr)); // Semilla para aleatoriedad

    // === Jugador 1 fijo ===
    shared_ptr<Personaje> jugador1 = make_shared<Brujo>();
    shared_ptr<Arma> arma1 = make_shared<Baston>();
    jugador1->setArmas({arma1});

    cout << "Tu personaje es un " << jugador1->getNombre()
         << " con un2 " << arma1->getNombre() << ".\n" << endl;
    
    // === Jugador 2 aleatorio ===
    shared_ptr<Personaje> jugador2 = PersonajeFactory::crearPersonaje();
    cout << "El enemigo sera un " << jugador2->getNombre() << "." << endl;

    shared_ptr<Arma> arma2 = PersonajeFactory::crearArma();
    jugador2->setArmas({arma2});
    cout << "El enemigo usara un(a) " << arma2->getNombre() << "." << endl;

    // === Iniciar batalla ===
    Batalla batalla(jugador1, jugador2);
    batalla.ejecutarBatalla();

    return 0;
}
