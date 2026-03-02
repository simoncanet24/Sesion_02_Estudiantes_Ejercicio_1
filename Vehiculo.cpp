#include <iostream>
#include "Vehiculo.h"
#include <string>
using namespace std;

Vehiculo::Vehiculo()
{
    nombre="";
    tipo="";
};

Vehiculo::Vehiculo(string nombre, string tipo)
{
    this->nombre=nombre;
    this->tipo=tipo;
};

void Vehiculo::toString()
{
    cout << "Vehiculo: " << nombre << endl;
}

Vehiculo::~Vehiculo() {}