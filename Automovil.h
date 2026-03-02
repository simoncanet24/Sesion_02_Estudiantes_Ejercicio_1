#ifndef SESION_02_ESTUDIANTES_AUTOMOVIL_H
#define SESION_02_ESTUDIANTES_AUTOMOVIL_H
#include <string>
#include <iostream>
#include "Vehiculo.h"
using namespace std;

class Vehiculo;

class Automovil: public Vehiculo
{
protected:
    string marca;
    string modelo;
    int year;
public:

    Automovil();

    Automovil(string marca, string modelo, int year);

    void toString() override;
    void tocarClaxon();

};


#endif //SESION_02_ESTUDIANTES_AUTOMOVIL_H