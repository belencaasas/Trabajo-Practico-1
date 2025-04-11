#include <iostream>
#include "archivosH/espada.h"
#include "archivosH/amuleto.h"
#include "archivosH/barbaro.h"
#include "archivosH/brujo.h"
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