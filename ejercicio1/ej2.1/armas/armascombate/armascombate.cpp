#include "../../../archivosH/armascombate.h"

void ArmasCombate::usar(){
    cout << "Usando el arma de combate: (" << tipoDeArma << ")" << endl;
}

void ArmasCombate::golpear(){
    durabilidad -= 1;
    cout << "Golpeando con el arma (" << tipoDeArma << "). Durabilidad restante: " << durabilidad << endl;
}

void ArmasCombate::mejorar(){
    nivelDePoder += 1;
    cout<< "Mejorando el arma (" << tipoDeArma << "). Nivel de poder: " << nivelDePoder << endl;
}

void ArmasCombate::destruir(){
    durabilidad = 0; 
    cout << "El arma de combate (" << tipoDeArma << ") ha sido destruida, su durabilidad es " << durabilidad << endl;
}

void ArmasCombate::verDurabilidad(){
    cout << "La durabilidad del arma de combate (" << tipoDeArma << ") es " << durabilidad << endl; 
}



