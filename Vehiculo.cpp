#include "Vehiculo.h"
#include <string>
using namespace std;

Vehiculo::Vehiculo()
{
    nombre="";
    tipo="";
};

Vehiculo::Vehiculo(string nom, string tip)
{
    nombre=nom;
    tipo=tip;
};

void Vehiculo::toString()
{
    cout << "Vehiculo: " << nombre << endl;
}

Vehiculo::~Vehiculo() {}