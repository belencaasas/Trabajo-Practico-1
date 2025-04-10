#include "../Entidad_Organizativa/entidadOrganizativa.h"
class Departamento;

class Empresa: public EntidadOrganizativa{
    private:
        vector<unique_ptr<Departamento>> departamento; 

    public:
        Empresa(string direccion, string nombre);
        string direccion;
        Departamento getDepByNames(string); 
        Departamento getDepNames(); 
};