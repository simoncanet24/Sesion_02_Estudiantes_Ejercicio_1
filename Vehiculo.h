#ifndef SESION_02_ESTUDIANTES_VEHICULO_H
#define SESION_02_ESTUDIANTES_VEHICULO_H
#include <string>
using namespace std;

class Vehiculo {
protected:
    string nombre;
    string tipo;

public:
    Vehiculo();

    Vehiculo(string nombre, string tipo);

    virtual void toString();

    virtual ~Vehiculo();
};


#endif