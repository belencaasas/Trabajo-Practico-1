#include "batalla.h"

Batalla::Batalla(shared_ptr<Personaje> p1 , shared_ptr<Personaje> p2){
    jugador1 = p1; 
    jugador2 = p2; 
}

void Batalla::mostrarEstado(){
    cout << "-----ESTADO DE LA BATALLA-----" << endl; 
    cout << jugador1->getNombre() << " tiene " << jugador1->getVida() << endl; 
    cout << jugador2->getNombre() << " tiene " << jugador2->getVida() << endl;
    cout << "- - - - - - - - - - - - - - - - - - - -" << endl;  
} 

OpcionAtaque Batalla::obtenerOpcionJ1(){
    int opcion; 
    cout << "Elige tu ataque: " << endl;
    cout << "1. Golpe Fuerte" << endl; 
    cout << "2. Golpe Rapido" << endl; 
    cout << "3. Defensa y Golpe" << endl; 
    cout << "Tu opcion: "; 
    cin >> opcion;

    while (opcion < 1 || opcion > 3){
        cout << "Opcion invalida, intenta de nuevo: "; 
        cin >> opcion;
    }
    return static_cast<OpcionAtaque>(opcion);
} 

OpcionAtaque Batalla::obtenerOpcionJ2(){
    int opcion = rand() % 3 + 1; 
    return static_cast<OpcionAtaque>(opcion);
} 

void Batalla::mostrarAccion(shared_ptr<Personaje> atacante, OpcionAtaque opcion, shared_ptr<Personaje> defensor){
    cout << atacante->getNombre() << " ataca con "; 
    switch (opcion){

        case GolpeFuerte: 
            cout << "Golpe Fuerte"; 
            break; 
        
        case GolpeRapido: 
            cout << "Golpe Rapido"; 
            break;  

        case DefensaYGolpe: 
            cout << "Defensa y Golpe";
            break; 
    } 
    cout << " contra " << defensor->getNombre() << "." << endl; 

} 

void Batalla::ejecutar(OpcionAtaque j1 , OpcionAtaque j2){
    mostrarAccion(jugador1, j1 , jugador2);
    mostrarAccion(jugador2, j2, jugador1);

    if (j1 == j2){
        cout << "Empate, ningun jugador recibe daño. " << endl; 
        return;
    }

    bool ganaJu1 = 
    (j1 == GolpeFuerte && j2 == GolpeRapido) ||
    (j1 == GolpeRapido && j2 == DefensaYGolpe) ||
    (j1 == DefensaYGolpe && j2 == GolpeFuerte);

    if (ganaJu1){
        cout << jugador2->getNombre() << " recibe 10 puntos de daño." << endl; 
        jugador2->reducirVida();
    } else { 
        cout << jugador1->getNombre() << " recibe 10 puntos de daño." << endl; 
        jugador1->reducirVida();
    }
} 

void Batalla::ejecutarBatalla(){
    cout << "\n Comienza la batalla!" << endl; 

    while (jugador1->getVida() > 0 && jugador2->getVida() > 0){
        mostrarEstado(); 

        OpcionAtaque opcion1 = obtenerOpcionJ1();
        OpcionAtaque opcion2 = obtenerOpcionJ2(); 

        ejecutar(opcion1,opcion2); 
        cout << "------------------------------------" << endl; 
    } 

    //resultado final 
    if (jugador1->getVida() <= 0 && jugador2->getVida() <= 0){
        cout << "Ambos jugadores han caido!! es un empate." << endl; 
    } else if (jugador1->getVida() <= 0){
        cout << jugador2->getNombre() << " ha ganado la batalla." << endl; 
    } else { 
        cout << jugador1->getNombre() << " ha ganado la batalla." << endl;
    }
}