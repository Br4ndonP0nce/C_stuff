#ifndef TESTFIELD_LDL_H
#define TESTFIELD_LDL_H

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <string.h>


using namespace std;
//Contruccion de la clase NodoLDL hago los elementos que se van a ocupar en el proyecto
class NodoLDL
{
public:
    NodoLDL();
    ~NodoLDL();
    NodoLDL *siguiente;
    NodoLDL *anterior;
    NodoLDL(string,string,string,string,string,string,string,string,string);
    string ID;
    string Matricula;
    string Modelo;
    string Marca;
    string Espacio_Estacionamiento;
    string Propietario;
    string Hora_Entrada;
    string Hora_Salida;
    string Costo;
};
//Asignacion de todos los elementos de mi DATO principal a NULL
NodoLDL::NodoLDL()
{
    ID = nullptr;
    Matricula = nullptr;
    Modelo = nullptr;
    Marca = nullptr;
    Espacio_Estacionamiento = nullptr;
    Propietario = nullptr;
    Hora_Entrada = nullptr;
    Costo = nullptr;
    anterior = nullptr;
    siguiente = nullptr;
}
//Asignacion de los prototipos de la clase NodoLDL  a sus variables
NodoLDL::NodoLDL(string Id,string Placas,string Auto,string Company,string Lugar,string Patron,string Llegada,string Salida,string Precio)
{
    ID = Id;
    Matricula = Placas;
    Modelo = Auto;
    Marca = Company;
    Espacio_Estacionamiento = Lugar;
    Propietario = Patron;
    Hora_Entrada = Llegada;
    Hora_Salida = Salida;
    Costo = Precio;
}
//Declaracion de la clase lista la cual servira para los prototipos de todas las funciones
class LDL
{
    NodoLDL *h;
    NodoLDL *t;
public:
    LDL();
    ~LDL();
    void start();
    bool empty();
    int size();
    void show();
    void push_front(string,string,string,string,string,string,string,string,string);
    void push_back(string,string,string,string,string,string,string,string,string);
    void push_position(string,string,string,string,string,string,string,string,string, int position);
    void clear_all();
    void erase_position(int position);
    bool find_position(int position);
    bool find_info(string dato);
    void modify(string Placas,string Auto,string Company,string Patron,string Llegada,string Salida,string Precio,int position);
    bool twice_plate(string elemento);
    bool find_parking(string numero);

};

LDL::LDL()
{

}

LDL::~LDL()
{

}

void LDL::start()
{
    h = nullptr;
    t = nullptr;
}

bool LDL::empty()
{
    if(h==nullptr && t==nullptr)
    {
        return true;
    }
    else{
        return false;
    }
}

int LDL::size()
{
    int cont=0;
    NodoLDL *aux;
    aux = h;
    while (aux != nullptr) {
        cont++;
        aux=aux->siguiente;
    }
    return cont;
}

void LDL::show()
{
    NodoLDL *aux;
    aux=h;
    while (aux!=nullptr) {
        cout<<"ID: "<<aux->ID<<endl;
        cout<<"MATRICULA: "<<aux->Matricula<<endl;
        cout<<"Auto: "<<aux->Modelo<<endl;
        cout<<"Marca: "<<aux->Marca<<endl;
        cout<<"Espacio del Parking: "<<aux->Espacio_Estacionamiento<<endl;
        cout<<"Propietario: "<<aux->Propietario<<endl;
        cout<<"Hora de Entrada: "<<aux->Hora_Entrada<<endl;
        cout<<"Hora de Salida: "<<aux->Hora_Salida<<endl;
        aux=aux->siguiente;
    }
}

void LDL::push_front(string Id, string Placas, string Auto, string Company, string Lugar, string Patron, string Llegada, string Salida, string Precio)
{
    NodoLDL *temp = new NodoLDL(Id, Placas, Auto, Company, Lugar, Patron, Llegada, Salida, Precio);
    temp->ID = Id;
    temp->Matricula = Placas;
    temp->Modelo = Auto;
    temp->Marca = Company;
    temp->Espacio_Estacionamiento = Lugar;
    temp->Propietario = Patron;
    temp->Hora_Entrada = Llegada;
    temp->Hora_Salida = Salida;
    temp->Costo = Precio;
    temp->siguiente=nullptr;
    temp->anterior=nullptr;
    if(empty())
    {
        h=temp;
        t=temp;
    }
    else {
        temp->siguiente=h;
        h->anterior=temp;
        h=temp;

    }
}

void LDL::push_back(string Id, string Placas, string Auto, string Company, string Lugar, string Patron, string Llegada, string Salida, string Precio)
{
    NodoLDL *temp = new NodoLDL(Id, Placas, Auto, Company, Lugar, Patron, Llegada, Salida, Precio);
    temp->ID = Id;
    temp->Matricula = Placas;
    temp->Modelo = Auto;
    temp->Marca = Company;
    temp->Espacio_Estacionamiento = Lugar;
    temp->Propietario = Patron;
    temp->Hora_Entrada = Llegada;
    temp->Hora_Salida = Salida;
    temp->Costo = Precio;
    temp->siguiente=nullptr;
    temp->anterior=nullptr;
    if(empty())
    {
        h=temp;
        t=temp;
    }
    else
    {
        t->siguiente=temp;
        temp->anterior=t;
        t=temp;
    }
}

void LDL::push_position(string Id, string Placas, string Auto, string Company, string Lugar, string Patron, string Llegada, string Salida, string Precio, int position)
{
    NodoLDL *temp = new NodoLDL(Id, Placas, Auto, Company, Lugar, Patron, Llegada, Salida, Precio);
    temp->ID = Id;
    temp->Matricula = Placas;
    temp->Modelo = Auto;
    temp->Marca = Company;
    temp->Espacio_Estacionamiento = Lugar;
    temp->Propietario = Patron;
    temp->Hora_Entrada = Llegada;
    temp->Hora_Salida = Salida;
    temp->Costo = Precio;
    temp->siguiente=nullptr;
    temp->anterior=nullptr;
    if(empty())
    {
        h=temp;
        t=temp;
    }
    else
    {
        if(position == 1)
        {
            push_front(Id, Placas, Auto, Company, Lugar, Patron, Llegada, Salida, Precio);
        }
        else if(position == size() + 1)
        {
            push_back(Id, Placas, Auto, Company, Lugar, Patron, Llegada, Salida, Precio);
        }
        else if(position > 1 && position < size() + 1)
        {
            NodoLDL *aux;
            aux = h;
            for(int i=1; i<position; i++)
            {
                aux=aux->siguiente;
            }
            aux->anterior->siguiente=temp;
            temp->siguiente=aux;
            temp->anterior=aux->anterior;
            aux->anterior=temp;
        }
        else
        {
            cout<<("No me quieras ver la cara muchachito, posicion invalida")<<endl;
        }
    }
}

void LDL::clear_all()
{
    NodoLDL *aux=nullptr;
    NodoLDL *aux2=nullptr;
    while (h != nullptr)
    {
        aux=h;
        h=h->siguiente;
        aux2=aux;
        aux2=nullptr;
    }
    start();
    cout<<"\t!!Estacionamiento en busca de clientes!!"<<endl;
}

void LDL::erase_position(int position)
{
    NodoLDL *aux2;
    if(position == 1)
    {
        aux2 = h;
        h = h->siguiente;
     aux2= nullptr;
    }
    else if(position == size())
    {
        aux2 = t;
        t = t->anterior;
         aux2=nullptr;
    }
    else if(position > 1 || position < size())
    {
        aux2=h;
        for(int i = 1; i < position; i++)
        {
            aux2 = aux2->siguiente;
        }
        aux2->anterior->siguiente=aux2->siguiente;
        t->anterior=aux2->anterior;
        aux2= nullptr;
    }
    else
    {
        cout<<"No me quieras ver la cara muchachito, posicion invalida"<<endl;
    }
}

bool LDL::find_position(int position)
{
    NodoLDL *aux;
    aux = h;
    if(position >= 1 && position <= size())
    {
        for(int i = 1; i < position; i++)
        {
            aux = aux->siguiente;
        }
        cout<<"ID: "<<aux->ID<<endl;
        cout<<"MATRICULA: "<<aux->Matricula<<endl;
        cout<<"Auto: "<<aux->Modelo<<endl;
        cout<<"Marca: "<<aux->Marca<<endl;
        cout<<"Espacio del Parking: "<<aux->Espacio_Estacionamiento<<endl;
        cout<<"Propietario: "<<aux->Propietario<<endl;
        cout<<"Hora de Entrada: "<<aux->Hora_Entrada<<endl;
        cout<<"Hora de Salida: "<<aux->Hora_Salida<<endl;
        return true;

    }
    else{
        cout<<"Posicion Invalida"<<endl;
        return false;


    }
}

bool LDL::find_info(string dato)
{
    NodoLDL *aux=h;
    int count1=1,count2=0;
    while(aux!=nullptr){
        if(aux->Matricula == dato){
            cout<<"!! EXITO !! se ha encontrado en el Parking # "<<count1<<endl<<endl;
            cout<<"ID: "<<aux->ID<<endl;
            cout<<"MATRICULA: "<<aux->Matricula<<endl;
            cout<<"Auto: "<<aux->Modelo<<endl;
            cout<<"Marca: "<<aux->Marca<<endl;
            cout<<"Espacio del Parking: "<<aux->Espacio_Estacionamiento<<endl;
            cout<<"Propietario: "<<aux->Propietario<<endl;
            cout<<"Hora de Entrada: "<<aux->Hora_Entrada<<endl;
            cout<<"Hora de Salida: "<<aux->Hora_Salida<<endl;
            count2++;
            return true;
        }
        aux = aux->siguiente;
        count1++;
    }

    if(count2==0){
        cout<<"Elemento no encontrado"<<endl;
    }

    return 0;
}

void LDL::modify(string Placas, string Auto, string Company, string Patron, string Llegada, string Salida, string Precio, int position)
{
    NodoLDL *aux=h;
    if(empty())
        cout<<("!! ESTACIONAMIENTO VACIO NO SE QUE QUIERE MODIFICAR !!")<<endl<<endl;
    if(position < size() + 1 && position > 0)
    {
        for(int i = 1;i < position;i++)
        {
            aux=aux->siguiente;
        }
        aux->Matricula = Placas;
        aux->Modelo = Auto;
        aux->Marca = Company;
        aux->Propietario = Patron;
        aux->Hora_Entrada = Llegada;
        aux->Hora_Salida = Salida;
        aux->Costo = Precio;
        cout<<"LOS CAMBIOS SE HAN EFECTUADO\n";
        system("Pause");
        cout<<"ID: "<<aux->ID<<endl;
        cout<<"MATRICULA: "<<aux->Matricula<<endl;
        cout<<"Auto: "<<aux->Modelo<<endl;
        cout<<"Marca: "<<aux->Marca<<endl;
        cout<<"Espacio del Parking: "<<aux->Espacio_Estacionamiento<<endl;
        cout<<"Propietario: "<<aux->Propietario<<endl;
        cout<<"Hora de Entrada: "<<aux->Hora_Entrada<<endl;
        cout<<"Hora de Salida: "<<aux->Hora_Salida<<endl;
    }
}

bool LDL::twice_plate(string elemento)
{
    NodoLDL *aux=h;
    int count1=1,count2=0;
    while(aux!=nullptr){
        if(aux->Matricula == elemento){
            cout<<"!! AHHH caray !! esas placas ya estan regitrdas pertenecen al siguiente usuario: "<<count1<<endl<<endl;
            cout<<"Id: "<<aux->ID<<endl;
            cout<<"Placas: "<<aux->Matricula<<endl;
            cout<<"Modelo: "<<aux->Modelo<<endl;
            cout<<"Marca: "<<aux->Marca<<endl;
            cout<<"No. de parking: "<<aux->Espacio_Estacionamiento<<endl;
            cout<<"Nombre del Propietario: "<<aux->Propietario<<endl;
            cout<<"Hora de Entrada: "<<aux->Hora_Entrada<<endl;
            cout<<"Hora de Salida: "<<aux->Hora_Salida<<endl;
            cout<<"Costo: "<<aux->Costo<<endl<<endl<<endl;
            count2++;
            return true;
        }
        aux=aux->siguiente;
        count1++;
    }
    if(count2==0){
        cout<<"!! HA INGRESADO CON EXITO !! "<<endl<<endl;
    }
    return 0;
}

bool LDL::find_parking(string numero)
{
    NodoLDL *aux=h;
    int count1=1,count2=0;
    while(aux!=nullptr)
    {
        if(aux->Espacio_Estacionamiento == numero)
        {
            count2++;
            return true;
        }
        aux=aux->siguiente;
        count1++;
    }
    if(count2==0)
    {
        cout<<"Parking Libre"<<endl;
        return false;
    }
    return 0;
}


#endif //TESTFIELD_LDL_H
