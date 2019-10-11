#include <iostream>
#include <cstdlib>
#include <string.h>
#include <conio.h>
#include <cstdlib>


using namespace std;

template<typename T>
class Nodo{
public:
    Nodo();
    Nodo(T,T);
    ~Nodo();
    Nodo *next;
    T id;
    T nombre;
    void print();
};
template<typename T>
Nodo<T>::Nodo()
{   id= NULL;
    nombre=NULL;
    next=NULL;
}

template<typename T>
Nodo<T>::Nodo(T id_,T nombre_ )
{
    id=id_;
    nombre=nombre_;
    next=NULL;
}
template<typename T>
void Nodo<T>::print()
{
    cout<<"Id:"<<id<<endl;
    cout<<"Nombre:"<<nombre<<endl;

}
template<typename T>
Nodo<T>::~Nodo(){}

template<class T>

class List
{
private:
    Nodo<T> *ptrHead;
    int number_nodo;
public:
    List();
    ~List();

    void add_head(T,T);
    void add_end(T,T);
    void add_sort(T,T);
    void delete_position(int);
    void print();
    void Search(T);
    void buscar_pos(int);
    void invertir();
    void buscar_nom(T);
    void Eliminar_Todo();
    void Ordenar();
    void Modificar(int);
    //int compareFunction(string cad1, string cad2);
};
template<typename T>
List<T>::List()
{
    number_nodo=0;
    ptrHead=NULL;
}
template<typename T>
List<T>::~List(){}

//Insertar al inicio
template<typename T>
void List<T>::add_head(T id_,T nombre_)
{
    Nodo<T> *new_nodo=new Nodo<T>(id_,nombre_);
    Nodo<T> *temp = ptrHead;
    if(!ptrHead){
        ptrHead=new_nodo;
    }
    else{
        new_nodo->next=ptrHead;
        ptrHead= new_nodo;
        while(temp){
            temp=temp->next;
        }
    }
    number_nodo++;
}

template <typename T>
void List<T>::add_sort(T id_,T nombre_)
{
    Nodo<T> *new_nodo= new Nodo<T> (id_,nombre_);
    Nodo<T> *temp=ptrHead;
    if (!ptrHead){
        ptrHead=new_nodo;
    }
    else{
        if(ptrHead->id==id_){
            new_nodo->next=ptrHead;
            ptrHead=new_nodo;
        }
        else{
            while(temp->next!=NULL){
                temp= temp->next;
            }
            new_nodo->next=temp->next;
            temp->next=new_nodo;
        }
    }
    number_nodo++;
}
template<typename T>
void List<T>::delete_position(int pos)
{
    Nodo<T>*temp=ptrHead;
    Nodo<T>*temp1=temp->next;
    if(pos<1||pos>number_nodo){
        cout<<"Fuera de rango\n";
    }
    else if(pos==1){
        ptrHead=temp->next;
        delete temp;
        number_nodo--;
    }
    else{
        for(int i=2;i<=pos;i++){
            if(i==pos){
                Nodo<T>*aux_nodo=temp1;
                temp->next=temp1->next;
                delete aux_nodo;
                number_nodo--;
            }
            temp=temp->next;
            temp1=temp1->next;
        }
    }
}

template<typename T>
void List<T>::print()
{
    Nodo<T> *temp=ptrHead;
    if(!ptrHead){
        cout<<"La Agenda esta vacia\n";
    }
    else{
        while(temp){
            temp->print();
            cout<<"\n\n";
            temp=temp->next;
        }
    }

}

template<typename T>
void List<T>::Search(T id_)
{
    Nodo<T> *temp=ptrHead;
    int count1=1,count2=0;
    while(temp){
        if(temp->id==id_){
            cout<<"Encontrado en la posicion:"<<count1<<endl;
            count2++;
        }
        temp=temp->next;
        count1++;
    }
    if(count2==0){
        cout<<"No existe el dato\n";
    }
    cout<<"\n\n";
}
template<typename T>
void List<T>::buscar_pos(int pos)
{
    int band=0;
    Nodo<T> *aux=ptrHead;
    if(number_nodo==0)
        cout<<"Agenda esta vacia\n";
    else{
        if(pos<number_nodo+1&&pos>0){
            for(int i=1;i<pos;i++){
                cout<<"aux"<<i<<"="<<aux->id<<endl;
                aux=aux->next;
            }
            cout<<"Id-."<<aux->id<<endl;
            cout<<"Nombre-."<<aux->nombre<<endl;

        }
        else
            cout<<"Posicion invalida\n";
    }
}
template<typename T>
void List<T>::buscar_nom(T) {

}
int compareFunction(string cad1, string cad2)
{
    // comparing both using inbuilt function
    int x = cad1.compare(cad2);
    if(x == 0){
        return x;
    }

}
template<typename T>
void List<T>::Ordenar()
{
    if(ptrHead==NULL)
        cout<<"La agenda esta vacia\n";
    else {
        string cad,cad1,cad2;
        int i=0,j=0;
        Nodo<T>* aux1=ptrHead;
        Nodo<T>* aux3=ptrHead;
        Nodo<T>* aux2=ptrHead->next;
        if(ptrHead->next==NULL)
            cout<<"La agenda no puede ser ordenada\n";
        else {
            char cha3[3],cha4[3];
            while(aux3->next!=NULL){
                aux2=ptrHead->next;
                aux1=ptrHead;
                i++;
                aux3->nombre;
                while(aux2!=NULL){
                    cad1=aux1->nombre;
                    cad2=aux2->nombre;
                    j++;
                    compareFunction(cad1,cad2);
                    if(compareFunction(cad1,cad2)==1){
                        cad=aux1->id;
                        aux1->id=aux2->id;
                        aux2->id=cad;

                        cad=aux1->nombre;
                        aux1->nombre=aux2->nombre;
                        aux2->nombre=cad;


                    }
                    aux1=aux1->next;
                    aux2=aux2->next;
                }
                aux3=aux3->next;
            }
            cout<<"La agenda esta ordenada\n";
        }
    }
}


int main (int argc,char *argv[])
{
    List<string> list1;
    int element,dimention,pos,dat;
    string id_ ,nombre_,correo_,numero_,direccion_;
    char opc;
    do{

        cout<<"1-.Agregar contacto \n";
        cout<<"2-.Buscar contacto.\n";
        cout<<"3-.Eliminar contacto.\n";
        cout<<"4-.Buscar por posicion\n";
        cout<<"5-.Invertir\n";
        cout<<"6-.Buscar por nombre\n";
        cout<<"7-.Ordenar alfabeticamente\n";
        cout<<"8-.Imprimir datos\n";
        cout<<"9-.Modificar\n";
        cout<<"10-.Eliminar Todo\n";
        cout<<"0-.Salir..\n";
        cout<<"Seleccione un opcion\n";
        do{
            cin.sync();
            cin>>opc;
            if(opc<='0' || opc>='9'){
                cout<<"Ingresa puros numeros"<<endl;
            }
        }while(opc<='0'|| opc>='9');



        switch (opc){
            case '1':{
                system ("CLS");
                cin.sync();
                cout<<"ID \n";
                do{

                    getline(cin,id_);

                    if(id_<="0" || id_>="9"){
                        cout<<"Ingresa puros numeros"<<endl;
                    }
                }while(id_<="0"|| id_>="9");


                cout<<"Nombre \n";
                getline(cin,nombre_);


                list1.add_head(id_,nombre_);
                list1.print();
                break;
            }

            case '2':{
                getline(cin,id_);
                cout<<"Busca un elemento\n";
                do{

                    getline(cin,id_);
                    if(id_<="0" || id_>="9"){
                        cout<<"Ingresa puros numeros"<<endl;
                    }
                }while(id_<="0"|| id_>="9");
                list1.Search(id_);
                break;
            }
            case '3':{
                cout<<"Elimina posicion\n";
                cin>>pos;
                list1.delete_position(pos);
                list1.print();
                break;
            }
            case '4':{
                cout<<"Ingresa la posicion que quieres buscar\n";
                cin.sync();
                cin>>element;
                list1.buscar_pos(element);
                break;
            }
            case '5':{
                cout<<"invertir lista ";
                /*list1.print();
                list1.invertir();
                cout<<"Se ha invertido la lista\n";
                list1.print();*/
                break;
            }
            case '6':{
                cout<<"buscar por nombre";
                /*getline(cin,id_);
                cout<<"Ingresa el nombre a buscar\n";
                getline(cin,id_);
                list1.buscar_nom(id_);*/
                break;
            }
            case '7':{
                cout<<"ordenar";

                list1.print();
                list1.Ordenar();
                list1.print();
                break;
            }
            case '8':{
                list1.print();
                break;
            }
            case '9':{
                cout<<"ordenar";
                /*
                cout<<"Ingresa la posicion del dato a modificar\n";
                cin.sync();
                cin>>dat;
                list1.Modificar(dat);
                */
                 break;
            }
            case '0':{
                /*
                list1.Eliminar_Todo();
                */
                break;
            }

        }
        cout<<endl;
        system("pause");
        system("cls");
    }while(opc!=0);
    return 0;
}
