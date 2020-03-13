#include <iostream>
#include "vector.h"
Vector<int> v;
int item,usrpos;
int opc;
using namespace std;
enum opciones{
    SIZE =1,
    CAPACITY,
    INSERT_POS,
    PRINTALL,
    SHOW_AT,
    PUSHBACK,
    POPBACK,
    ERASE,
    CLEAR
};
void menu(){
    cout<<SIZE<<")size"<<endl<<
        CAPACITY<<")capacity"<<endl<<
        INSERT_POS<<")insertar por posicion"<<endl<<
        PRINTALL<<")mostrar todo"<<endl<<
        SHOW_AT<<")mostrar posicion"<<endl<<
        PUSHBACK<<")insertar siguiente"<<endl<<
        POPBACK<<")remover ultimo agregado"<<endl<<
        ERASE<<")borrar por posicion"<<endl<<
        CLEAR<<")Borrar todo"<<endl;

    cout<<")que desea hacer? "<<endl;
}
int main(){
    do{
        menu();
        cin>>opc;
        switch(opc){
            case SIZE:
                cout<<v.size();
                system("\npause");
                system("cls");
                system("\npause");
                system("cls");
                break;
            case CAPACITY:
                cout<<v.capacity();
                system("\npause");
                system("cls");
                system("\npause");
                system("cls");
                break;
            case INSERT_POS:
                cout<<"inserte posicion"<<endl;
                cin>>usrpos;
                cout<<"inserte item a insertar"<<endl;
                cin>>item;
                v.insert(usrpos,item);
                system("\npause");
                system("cls");
                break;
            case PRINTALL:
                v.PrintAll();
                system("\npause");
                system("cls");
                break;
            case SHOW_AT:
                cout<<"inserte posicion: ";
                cin>>usrpos;
                v.at(usrpos);
                system("\npause");
                system("cls");
                break;
            case PUSHBACK:
                cout<<"inserte un valor";
                cin>>item;
                v.push_back(item);
                system("\npause");
                system("cls");
                break;
            case POPBACK:
                v.pop_back();
                system("\npause");
                system("cls");
                break;
            case ERASE:
                cout<<"inserte una posicion para borrar";
                cin>>usrpos;
                v.erase(usrpos);
                system("\npause");
                system("cls");
                break;
            case CLEAR:
                v.clear();
                cout<<"arrat ha sido borrado."<<endl;
                system("\npause");
                system("cls");
                break;

        }

    }while(opc!=0);
}
