#include "cola.h"
cola::cola() {
    fin=-1;
    inicio=0;
}
void cola::llenar() {
    int x;
    if(lleno()==0) {
        cout << "ingresa dato" << endl;
        cin>>x;
        dato[fin]=x;
    }

}
void cola::consultar_inicio() {
    if(vacio()==1){
        int aux=0;
        cout<<"el incio es"<<dato[aux];
        system("pause");
    }
}
void cola::consultar_final() {
    if(vacio()==0){
        cout<<"el final es"<<dato[fin];
        system("pause");
    }

}
void cola::mostrar_cola() {
    if(vacio()==0){
        system("cls");
        for(int i=9;i>0;i--){
            if (dato[i]!=-2) {
                cout << dato[i] << endl;
            }
        }
    }
}
void cola::eliminar() {
    if(vacio()==0){
        for(int i=0;i<=fin;i++){
            dato[i]=dato[i+1];
        }
        dato[fin]=-2;
        fin--;
    }
}
int cola::lleno() {
    if(fin==9){
        cout<<"La cola esta llena"<<endl;
        system("pause");
        return 1;
    }
    else{
        return 0;
    }
}
int cola::vacio() {
    if(fin==-1){
        cout<<"la cola esta vacia"<<endl;
        system("pause");
        return 1;
    }
    else{
        return 0;
    }
}