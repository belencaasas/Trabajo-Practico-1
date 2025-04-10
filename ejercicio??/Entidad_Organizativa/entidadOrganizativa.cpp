#include "entidadOrganizativa.h"

EntidadOrganizativa::EntidadOrganizativa(string nombre) : nombre(nombre){};

void EntidadOrganizativa::agregarSubentidad(unique_ptr<EntidadOrganizativa> subentidad){
    subentidades.push_back(subentidad);
}

int EntidadOrganizativa::contarSubentidades(){
    return subentidades.size();
}