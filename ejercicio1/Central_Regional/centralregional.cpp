#include "centralregional.h"

CentralRegional::CentralRegional(string paises) : paises(paises), cantEmpleados(0) {}

int CentralRegional::getCantEmpleados(){
    return cantEmpleados;
}

string CentralRegional::getEmpNames(){
    string names = "";
    for (size_t i=0; i< empresas.size(); i++){
        names += empresas[i]->getNombre();
    }
    return names;

}

GerenteAlto CentralRegional::getGerentesAlto(){
    if(!getGerentesAlto.empty()){
        return *getGerentesAlto[0];
    }
    return GerenteAlto(); //si no hay devuelve un obj vacio
} 

GerenteMedio CentralRegional::getGerentesMedio(){
    if(!getGerentesMedio.empty()){
        return *getGerentesMedio[0];
    }
    return GerenteMedio(); //si no hay devuelve un obj vacio
} 
