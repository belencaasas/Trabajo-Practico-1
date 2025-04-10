#include "../Empresa/empresa.h"
class Empleado;

class Departamento: public Empresa{
    private:
        vector<unique_ptr<Empleado>> empleados; 
        static int cantEmpleadosDepts;

    public: 
        Departamento(string nombre, string ubicacion, int cantEmpleadosDepts);
        string nombre; 
        string ubicacion; 
        static int contarEmpleados();
        Empleado getEmployees();
        bool contratarEmpleado(Empleado);
        bool despedirEmpleado(Empleado);
};