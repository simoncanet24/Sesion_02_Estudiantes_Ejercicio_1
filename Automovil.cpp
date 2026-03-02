#include "Automovil.h"
#include <string>
using namespace std;

Automovil::Automovil()
{
    marca = "";
    modelo = "";
    year = 0;
};

Automovil::Automovil(string marca, string modelo, int year)
{
    this->marca = marca;
    this->modelo = modelo;
    this->year = year ;
};

void Automovil::toString() {
    cout << "Soy un automovil especifico." << endl;
}

void Automovil::tocarClaxon() {
    cout << "¡Beep beep! (Metodo exclusivo de Automovil)" << endl;
}

