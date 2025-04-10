#pragma once 
#include <iostream>
#include <vector>
#include <string>
#include <memory>
using namespace std;

class EntidadOrganizativa{
    protected: 
        vector<unique_ptr<EntidadOrganizativa>> subentidades; //una lista de subentidades de una entidad oganizativa 
    
    public: 
        string nombre;
        EntidadOrganizativa(string nombre);
        virtual ~EntidadOrganizativa(){}  //destructor
        void agregarSubentidad(unique_ptr<EntidadOrganizativa> subentidad);
        int contarSubentidades();
};