/* 
  Una Empresa que vende “GAS en Garrafas de distintos Tamaños y demás accesorios” nos convoca para la realización de una App que permita registrar los Pedidos de Equipos de los clientes. 

Marco Practico

Implementar en C++ el caso anterior permitiendo:

Cargar Articulos.
Cargar Clientes
Cargar Empleados
Cargar Pedidos de Artículos Asignados a los Clientes.
Mostrar los pedidos de los Clientes.

La aplicación deberá realizarse Implementando los Objetos Correspondientes.
Deberá mostrar por consola los pedidos de los clientes.

*/

#include <iostream>
#include "include/articulo.hpp"
#include "include/cliente.hpp"
#include "include/empleado.hpp"
#include "include/pedido.hpp"

int main() 
{
    Articulo* articulo1= new Articulo("A001", "Garrafa de 2kg", 12000.45);
    Articulo* articulo2= new Articulo("A002", "Garrafa de 8kg", 22350.00);
    Articulo* articulo3= new Articulo("A003", "Cilindro de propano de 10 kg", 20000.00);
    Articulo* articulo4= new Articulo("A004", "Cilindro de propano de 40 kg", 70000.50);
    Articulo* articulo5= new Articulo("A005", "Manguera 8mm x 25 mts.", 8000.60);
    Articulo* articulo6= new Articulo("A006", "Termocupla con rosca 8x1 250mm", 6500.35);
    Articulo* articulo7= new Articulo("A007", "Calentador para 10kg", 7500.00);
    Articulo* articulo8= new Articulo("A008", "Farol a gas", 6000.00);

    Cliente* cliente1 = new Cliente("C001", "Magali Incendiaria", "Volatil 900");
    Cliente* cliente2 = new Cliente("C002", "Marcelo Quillo", "Manicomio 2222");
    Cliente* cliente3 = new Cliente("C003", "Nico Gollo", "Unicornios 6000");

    Empleado* empleado1 = new Empleado("E001", "Olga Raffa","Circular 360", "Supervisora");
    Empleado* empleado2 = new Empleado("E002", "Felipe Doliquido","Olorin 190", "Vendedor");

    Pedido* pedidoCliente1 = new Pedido("P001", cliente1, empleado1);
    pedidoCliente1->adjuntar(articulo8);
    pedidoCliente1->adjuntar(articulo4);
    pedidoCliente1->adjuntar(articulo2);

    Pedido* pedidoCliente2 = new Pedido("P002", cliente2, empleado2);
    pedidoCliente2->adjuntar(articulo1);
    pedidoCliente2->adjuntar(articulo3);

    Pedido* pedidoCliente3 = new Pedido("P003", cliente3, empleado1);
    pedidoCliente3->adjuntar(articulo5);
    pedidoCliente3->adjuntar(articulo7);
    pedidoCliente3->adjuntar(articulo6);
    pedidoCliente3->adjuntar(articulo8);
    pedidoCliente3->adjuntar(articulo1);

    std::cout << "**************" << std::endl;
    std::cout << "LA EXPLOSIVA GAS ENVASADO Y ACCESORIOS " << std::endl;
    std::cout << "**************" << std::endl;
    std::cout << std::endl;
    std::cout << "LISTA DE ARTICULOS:" << std::endl;
    std::cout << std::endl;

    pedidoCliente1->mostrar();
    pedidoCliente2->mostrar();
    pedidoCliente3->mostrar();

    delete articulo1;
    delete articulo2;
    delete articulo3;
    delete articulo4;
    delete articulo5;
    delete articulo6;
    delete articulo7;
    delete articulo8;
    delete cliente1;
    delete cliente2;
    delete cliente3;
    delete empleado1;
    delete empleado2;
    delete pedidoCliente1;
    delete pedidoCliente2;
    delete pedidoCliente3;

    return 0;
}
