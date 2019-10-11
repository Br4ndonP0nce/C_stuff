#include <iostream>
#include "Pila.h"

#include "animaciones.h"
using namespace std;
int opc;
int main() {
    bienvenida();
    system("\npause");
    while(opc!=8) {
        menu();
        cout << "seleccione una opcion";
        cin >> opc;
        switch (opc) {
            case 1:
                tickets_purchase();
                break;
            case 2:
                seat_assign();
                break;
            case 3:

                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;

        }
    }
    plane();
    //compratickets();
}
