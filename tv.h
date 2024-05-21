#ifndef _TV_H_
#define _TV_H_

#include <string>
using std::string;

class TV{
    private:
        string modelo;
        double precio;
    public:
        TV(string modelo, double precio);
        void mostrarDetalles();
        string getModelo() const;
};

#endif
