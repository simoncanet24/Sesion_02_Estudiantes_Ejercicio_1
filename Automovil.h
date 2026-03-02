#ifndef SESION_02_ESTUDIANTES_AUTOMOVIL_H
#define SESION_02_ESTUDIANTES_AUTOMOVIL_H
#include <string>
using namespace std;

class Automovil: public Vehiculo
{
protected:
    string marca;
    string modelo;
    int year;
public:

    Automovil()
    {
        marca = "";
        modelo = "";
        year = 0;
    };

    Automovil(string mar, string mod, int yr)
    {
        marca = mar;
        modelo = mod;
        year = yr ;
    };
};


#endif //SESION_02_ESTUDIANTES_AUTOMOVIL_H