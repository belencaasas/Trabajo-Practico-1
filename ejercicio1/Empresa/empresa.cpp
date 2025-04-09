#include "empresa.h"
Empresa::Empresa(string direccion,string nombre) : EntidadOrganizativa(nombre) , direccion(direccion){}

Departamento Empresa::getDepByNames(string nombreDepartamento){

}

Departamento Empresa:: getDepNames(){
    if(!departamento.empty()){
        return *departamento[0]; //devuelve el primero
    }else{
        return nullptr;
    }
}