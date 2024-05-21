#ifndef _TIENDA_H_
#define _TIENDA_H_

#include "tv.h"
#include <string>
#include <vector>
using std::string;
using std::vector;

class Tienda{
    private:
        string nombre;
        vector<TV> inventarioTV;
    public:
        Tienda(string nombre);
        void agregarTV(TV tv);
        void procesarCompra(string modelo);
        void entregarDomicilio();
};

#endif
