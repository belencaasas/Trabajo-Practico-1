#include "itemsmagicos.h"
void ItemsMagicos::usar(){
    cout << "Usando el item magico: " << tipoDeItem << endl; 
}

void ItemsMagicos::golpear(){
    durabilidad -= 1; 
    cout << "Golpeando con el item magico: " << tipoDeItem << ". Durabilidad restante: " << durabilidad << endl;
}

void ItemsMagicos::mejorar(){
    nivelDePoder += 1; 
    cout << "Mejorando el item magico: " << tipoDeItem << ". Nivel de poder: " << endl; 
}

void ItemsMagicos::destruir(){
    durabilidad = 0; 
    cout << "El item magico: " << tipoDeItem << " ha sido destruido" << endl;
}

void ItemsMagicos::verDurabilidad(){
    cout << "La durabilidad del item magico: " << tipoDeItem << " es " << durabilidad << endl;
}

int main(){
    return 0;
}