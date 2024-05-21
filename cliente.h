#ifndef _CLIENTE_H_
#define _CLIENTE_H_
#include <string>
#include "tienda.h"
using std::string;

class Cliente{
    public:
        Cliente(string nombre, int tarjetaCredito);
        void comprarTV(Tienda tienda, string modelo);
    private:
        std::string nombre;
        int numeroTarjeta;
};

#endif