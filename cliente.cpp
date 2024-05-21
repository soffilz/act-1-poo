#include "cliente.h"
#include "tienda.h"
#include <string>

using std::string;

Cliente::Cliente(string nombre, int tarjetaCredito){
    
}

void Cliente::comprarTV(Tienda tienda, string modelo) {
    tienda.procesarCompra(modelo);
    tienda.entregarDomicilio();
}