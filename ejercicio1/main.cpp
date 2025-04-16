#include <iostream>
#include <memory>
#include "archivosH/espada.h"
#include "archivosH/amuleto.h"
#include "archivosH/barbaro.h"
#include "archivosH/brujo.h"
using namespace std;

int main(){
    cout << "\n------PROBANDO ARMAS------\n" << endl;

    cout << "...........ESPADA...........\n";
    unique_ptr<Espada> espada = make_unique<Espada>();
    espada->afilar();

    espada->usar();
    espada->golpear();
    espada->mejorar();
    espada->verDurabilidad();
    espada->destruir();

    cout << endl;

    cout <<"...........AMULETO...........\n";
    unique_ptr<Amuleto> amuleto = make_unique<Amuleto>();
    amuleto->habilidadActiva();

    amuleto->usar();
    amuleto->golpear();
    amuleto->mejorar();
    amuleto->verDurabilidad();
    amuleto->destruir();

    cout << "\n------PROBANDO PERSONAJES------\n" << endl;

    cout <<".............BARBARO.............\n";
    unique_ptr<Barbaro> barbaro = make_unique<Barbaro>();
    barbaro->golpeBrutal();

    barbaro->atacar();
    barbaro->bloquear();
    barbaro->recargarEnergia();
    barbaro->provocar();
    barbaro->distraer();

    cout << endl; 

    cout <<"............BRUJO...........\n";
    unique_ptr<Brujo> brujo = make_unique<Brujo>();
    brujo->pactarconDemonios();

    brujo->atacar();
    brujo->bloquear();
    brujo->recargarEnergia();
    brujo->provocar();
    brujo->distraer();

    return 0; 

}