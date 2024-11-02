#include "../include/empleado.hpp"

Empleado::Empleado(string codigo, string nombre, string domicilio, string puesto)
    : codigo(codigo), nombre(nombre), domicilio(domicilio), puesto(puesto) {}

string Empleado::obtenerCodigo() {
    return codigo;
}

string Empleado::obtenerNombre() {
    return nombre;
}

string Empleado::obtenerDomicilio() {
    return domicilio;
}

string Empleado::obtenerPuesto() {
    return puesto;
}
