#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <string>
using namespace std;

class Empleado {
private:
    string codigo;
    string nombre;
    string domicilio;
    string puesto;

public:
    Empleado(string codigo, string nombre, string domicilio, string puesto);
    string obtenerCodigo();
    string obtenerNombre();
    string obtenerDomicilio();
    string obtenerPuesto();
};

#endif
