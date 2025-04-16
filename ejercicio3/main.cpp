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
    srand(time(nullptr)); 

    // === Crea el Jugador 1 fijo ===
    unique_ptr<Personaje> jugador1 = make_unique<Brujo>();
    unique_ptr<Arma> arma1 = make_unique<Baston>();  
    cout << "\nTu personaje es un " << jugador1->getNombre()
    << " con un " << arma1->getNombre() << ".\n" << endl;
    jugador1->setArmas(move(arma1));
    
    // === Crea el Jugador 2 de manera aleatoria ===
    unique_ptr<Personaje> jugador2 = PersonajeFactory::crearPersonaje();
    cout << "El enemigo sera un " << jugador2->getNombre() << "." << endl;

    unique_ptr<Arma> arma2 = PersonajeFactory::crearArma();
    cout << "El enemigo usara un(a) " << arma2->getNombre() << "." << endl;
    jugador2->setArmas(move(arma2));

    // === Iniciar batalla ===
    Batalla batalla(move(jugador1), move(jugador2));
    batalla.ejecutarBatalla();

    return 0;
}
