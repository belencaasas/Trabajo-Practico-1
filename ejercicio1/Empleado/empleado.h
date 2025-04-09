#pragma once 
#include <iostream>
#include <vector>
#include <memory>
using namespace std; 

class Empleado{
    private:
        int antiguedad;
        float salario; 

    public:
        Empleado(int antiguedad, float salario, string nombre, string puesto);
        string nombre;
        string puesto;
        int getAntiguedad();
        bool updateSalario(float);
        float getSalario();
};