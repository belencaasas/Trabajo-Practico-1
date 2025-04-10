#include "../Empleado/empleado.h"

class Manager: public Empleado{
    private:
        string level;
        float bono; 
    public:
        Manager(string level, float bono,string nombre, string puesto, int antiguedad , float salario);
        bool updateBono(float);
        float getBono();
        bool setLevel(string);

};
