#include "../../../../archivosH/lanza.h"

Lanza::Lanza():
    ArmasCombate("lanza", 20, 5, 25, "poca" ), alcance(50){}

void Lanza::mejorarAlcance(){
    this->alcance += 10;
    cout << "Se ha mejorado el alcance de la lanza, ahora es de: " << alcance << endl;
}
