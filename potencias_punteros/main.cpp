#include<iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
    int * potencia(int *valor, int *potencia){
        int *res= (int*)malloc(sizeof(int));
        *res =*valor;
        *res=pow(*valor,*potencia);

        return res;
    }


int numero=0,pot =0;
    int*ptr,*ptr2;
    int main(int argc, char** argv){
        system("cls");
        cout<<"ingrese valor"<< endl;
        cin >>numero;
        ptr =&numero;
        cout<<"ingrese la potencia"<<endl;
        cin>>pot;
        ptr2= &pot;
        cout<<"el resultado es:"<<*potencia(ptr,ptr2)<<endl;
        system("pause>>cls");
        return 0;
    }
