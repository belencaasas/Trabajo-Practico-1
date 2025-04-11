#include "../../../../archivosH/conjurador.h"

Conjugador::Conjugador():
    Magos(100,40,40,50,20), carisma(80){}

void Conjugador::invocarCriaturas(){ 
    cout << "Conjugador invocando criaturas.." << endl; 
    this->carisma -= 5 ; 
    cout << "Carisma actulizado del conjugador" << endl;
    
}