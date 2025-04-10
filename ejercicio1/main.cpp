#include <iostream>
#include "ej2.1/armas/armascombate/archH/espada.h"
#include "ej2.1/armas/itemsmagicos/archivosH/amuleto.h"
#include "ej2.2/personajes/guerreros/archivoH/barbaro.h"
#include "ej2.2/personajes/magos/archivosH/brujo.h"
using namespace std;

int main(){
    cout << "------PROBANDO ARMAS------" << endl;

    Espada espada; 
    espada.afilar();

    espada.usar();
    espada.golpear();
    espada.mejorar();
    espada.verDurabilidad();
    espada.destruir();

    cout << endl;

    Amuleto amuleto;
    amuleto.habilidadActiva();

    amuleto.usar();
    amuleto.golpear();
    amuleto.mejorar();
    amuleto.verDurabilidad();
    amuleto.destruir();

    cout << "\n------PROBANDO PERSONAJES------" << endl;

    Barbaro barbaro;
    barbaro.golpeBrutal();

    barbaro.atacar();
    barbaro.bloquear();
    barbaro.recargarEnergia();
    barbaro.provocar();
    barbaro.distraer();

    cout << endl; 

    Brujo brujo; 
    brujo.pactarconDemonios();

    brujo.atacar();
    brujo.bloquear();
    brujo.recargarEnergia();
    brujo.provocar();
    brujo.distraer();

    return 0; 

}