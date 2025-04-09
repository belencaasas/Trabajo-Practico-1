#include "../Entidad_Organizativa/entidadOrganizativa.h"
class GerenteAlto; 
class GerenteMedio; 
class Empresa;

class CentralRegional: public EntidadOrganizativa{
    private: 
        int cantEmpleados;
        vector<unique_ptr<GerenteAlto>> getGerentesAlto; 
        vector<unique_ptr<GerenteMedio>> gerentesMedio; 
        vector<unique_ptr<Empresa>> empresas; 

    public:
        CentralRegional(string paises);
        string paises; 
        int getCantEmpleados();
        string getEmpNames();
        GerenteAlto getGerentesAlto(); 
        GerenteMedio getGerentesMedio(); 

};