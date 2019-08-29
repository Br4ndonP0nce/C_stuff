#include <iostream>
#include <cstdlib>
using namespace std;

    union weight{
        //weight(){};


        float kg;
        int gr;
    };

    struct pet{
        string name;
        int age;
        float weight;
        string type;
        bool WeightUnit;
    };
    enum OPTIONS{
        OPT_ADD = 1,
        OPT_SHOW,
        OPT_EXIT

    };
int main() {
    const int SIZE = 20;
    pet pets[SIZE];
    int opt,P_count =0;

    do{
        cout<<OPT_ADD<<")Add\n"<<OPT_SHOW<<")mostrar\n"<<OPT_EXIT<<")Salir";
        cin>>opt;
    }
    while(opt!=OPT_EXIT);
    switch(opt){
        case OPT_ADD:
            if(P_count < SIZE){
            cout<<"ingrese el nombre de la mascota";
            cin.ignore();
            getline(cin,pets[P_count].name);
            cout<<"Ingrese la edad:";
            cin>>pets[P_count].age;
            cout<<"la edad sera en 1)kilos o en 2)gramos?";
            cin>>(pets[P_count].WeightUnit);
            if()

            }
            else{
                cout<<"imposible agregar"<<endl;
            }


        break;
        case OPT_SHOW:


        break;
        case OPT_EXIT:


        break;
        default:

        break;
    }

}