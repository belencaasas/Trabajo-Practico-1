#include "../../../archivosH/guerreros.h"

void Guerreros::recargarEnergia(){
    cout << "Recargando energia..."; 
    vida += 15; 
    cout << "Energia recargada. Vida actual: " << vida << endl;
}

void Guerreros::atacar(){
    cout << "El guerrero esta atacando con: " << ataque << endl;
}

void Guerreros::bloquear(){
    vida -= 20;
    cout << "El guerrero bloqua el ataque con defensa de: " << defensa<< " Vida actual: " << endl;

}

void Guerreros::provocar(){
    cout << "El guerrero esta provocando al enemigo, aumentado su agilidad: " << agilidad << endl;

}

void Guerreros::distraer(){
    cout << "El guerrero esta distrayendo al enemigo, usando su inteligencia: " << inteligencia << endl;

}

void Guerreros::setArmas(vector<shared_ptr<Arma>> armas){
    this->armas = armas;

}

vector<shared_ptr<Arma>> Guerreros::getArmas(){
    return armas;
}

int Guerreros::getVida(){
    return vida;
} 

void Guerreros::reducirVida(){
    vida -= 10; 
    if (vida == 0){
        cout << "El personaje se quedo sin vida." << endl;
    } 
    else { 
        cout << "Vida restante: " << vida << endl;
    }
}