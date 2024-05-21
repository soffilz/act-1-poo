#include "tv.h"
#include <iostream>

using std::cout;
using std::endl;

TV::TV(string modelo, double precio) : modelo(modelo), precio(precio) {

}

void TV::mostrarDetalles(){
    cout << "Modelo: " << modelo << ", precio: " << precio << endl;
}

string TV::getModelo() const {
    return modelo;
}
