#include "cliente.h"
#include "tienda.h"
#include "tv.h"


int main(){
    Tienda tienda("SofShop");

    TV tv1("pantalla impresionante 4000k",3000);
    TV tv2("pantalla triste",500);

    tienda.agregarTV(tv1);
    tienda.agregarTV(tv2);

    Cliente cliente("Sof",2567);
    cliente.comprarTV(tienda,"pantalla impresionante 4000k");
    cliente.comprarTV(tienda,"pantalla no existente");

    return 0;
}
