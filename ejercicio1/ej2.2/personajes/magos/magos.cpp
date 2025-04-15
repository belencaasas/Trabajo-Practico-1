#include "../../../archivosH/magos.h"

void Magos::recargarEnergia(){
    cout << "Recargando energia..."; 
    vida += 15; 
    cout << "Energia recargada. Vida actual: " << vida << endl;
}

void Magos::atacar(){
    cout << "El mago esta atacando con: " << ataque << endl;
}

void Magos::bloquear(){
    vida -= 20;
    cout << "El mago bloqua el ataque con defensa de: " << defensa<< " Vida actual: " << endl;
}

void Magos::provocar(){
    cout << "El mago esta provocando al enemigo, aumentado su agilidad: " << agilidad << endl;
}

void Magos::distraer(){
    cout << "El mago esta distrayendo al enemigo, usando su inteligencia: " << inteligencia << endl;
}

void Magos::setArmas(vector<shared_ptr<Arma>> armas){
    this->armas = armas;

}

vector<shared_ptr<Arma>> Magos::getArmas(){
    return armas;
}

int Magos::getVida(){
    return vida;
} 

void Magos::reducirVida(){
    vida -= 10; 
    if (vida == 0){
        cout << "El personaje se quedo sin vida." << endl;
    }
    else { 
        cout << "Vida restante: " << vida << endl;
    }
}