#include <iostream>
#include <cstdlib>
using namespace std;
    int * factorial(int *valor){
        int *res= (int*)malloc(sizeof(int));
        cout<<*res<<endl;
        *res=*valor;
        for(int i=1 ;i<*valor;i++){
            *res=(*res)*i;
    }
    return res;
    }
int numero=0;
    int*ptr;
    int main(int argc, char** argv){
        system("cls");
        cout<<"ingrese valor"<< endl;
        cin >>numero;
        ptr =&numero;
        cout<<"el factorial es:"<<*factorial(ptr)<<endl;
        system("pause>>cls");
        return 0;
    }