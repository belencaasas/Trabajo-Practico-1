#pragma once 
#include <memory>
#include "../ejercicio1/archivosH/personajes.h"
#include "../ejercicio1/archivosH/armas.h"
using namespace std;


enum OpcionAtaque{ //opciones que tiene cada jugador para pelear 
    GolpeFuerte = 1,
    GolpeRapido = 2, 
    DefensaYGolpe = 3,
}; 

class Batalla{
    private: 
        shared_ptr<Personaje> jugador1; 
        shared_ptr<Personaje> jugador2;
    
    public: 
        Batalla(shared_ptr<Personaje> p1 , shared_ptr<Personaje> p2); //inicializa los personajes q van a pelar 
        void mostrarEstado(); //muesta la vida de cada personaje 
        OpcionAtaque obtenerOpcionJ1(); // obtiene la opcion que elige el j1 para pelear
        OpcionAtaque obtenerOpcionJ2(); // obtiene de manera random la opcion que elige el j2 para pelear 
        void ejecutar(OpcionAtaque j1 , OpcionAtaque j2); //compara las acciones de ambos personajes 
        void ejecutarBatalla(); //controla toda la batalla hasta que uno se quede sin vida 
        void mostrarAccion(shared_ptr<Personaje> atacante, OpcionAtaque opcion, shared_ptr<Personaje> defensor); //muestra los movimientos del jugador


};
