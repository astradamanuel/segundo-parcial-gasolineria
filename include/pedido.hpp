#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <list>
#include <string>
#include "articulo.hpp"
#include "cliente.hpp"
#include "empleado.hpp"
using namespace std;

class Pedido {
private:
    string codigo;
    Cliente* cliente;
    Empleado* vendedor;
    list<Articulo*> articulos;

public:
    Pedido(string codigo, Cliente* cliente, Empleado* vendedor);
    string obtenerCodigo();
    void adjuntar(Articulo* articulo);
    void mostrar();
};

#endif
