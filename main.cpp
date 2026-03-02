#include <iostream>
#include <string>
using namespace std;
#include "automovil.h"

int main() {
    Vehiculo* miVehiculo = new Automovil();

    Automovil* miAuto = dynamic_cast<Automovil*>(miVehiculo);

    if (miAuto != nullptr) {
        miAuto->tocarClaxon();
    } else {
        cout << "ERROR" << endl;
    }

    delete miVehiculo;

    return 0;
}

//test