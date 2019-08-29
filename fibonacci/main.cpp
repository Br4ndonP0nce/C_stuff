#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    double numero=0, sig=1, resul=0, cont,quantity;
    do {
        cout << "cuantos numeros desea mostrar?\n";
        cin >> quantity;

        //cout<<"Primeros 10 digitos de la serie de Fibonacci\n";

        for (cont = 1; cont <= quantity; cont++) {
            if (resul == 1) {
                cout << "1,";
            }

            cout << resul << ",";
            resul = numero + sig;
            numero = sig;
            sig = resul;
        }
        cout << "\n";
        system("pause");

    }
    while(quantity!=0);
}
