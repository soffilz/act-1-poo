#include "tienda.h"
#include "tv.h"
#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;

Tienda::Tienda(string nombre) : nombre(nombre) {
}

void Tienda::agregarTV(TV tv){
    inventarioTV.push_back(tv);
    cout << "Añadiste una TV: " << tv.getModelo() << endl;
}

void Tienda::procesarCompra(string modelo){
    auto it = std::find_if(inventarioTV.begin(), inventarioTV.end(), [&modelo](const TV& tv) {
        return tv.getModelo() == modelo;
    });

    if (it != inventarioTV.end()){
        inventarioTV.erase(it);
        cout << "Compraste una TV " << modelo << endl;
    } else {
        cout << "Esta TV no está en stock" << endl;
    }
}

void Tienda::entregarDomicilio(){
    cout << "La TV está en camino a su domicilio" << endl;
}

