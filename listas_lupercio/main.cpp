#include <iostream>
#include <cstdlib>
#include <cstring>
#include <conio.h>
#include <cstdlib>
#include <list>
#include<windows.h>
#include <regex>
using namespace std;
int coutX=12,coutY=4;
void gotoxy(int x,int y){
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y= y;
    SetConsoleCursorPosition(hcon,dwPos);
}
template<typename T>
class Nodo{
public:
    Nodo();
    Nodo(T,T,T,T,T);
    ~Nodo();
    Nodo *next;
    T id;
    T nombre;
    T telefono;
    T direccion;
    T correo;
    void print();
};
template<typename T>
Nodo<T>::Nodo()
{   id= NULL;
    nombre=NULL;
    next=NULL;
}

template<typename T>
Nodo<T>::Nodo(T id_,T nombre_,T direccion_,T telefono_,T correo_ )
{
    id=id_;
    nombre=nombre_;
    direccion=direccion_;
    telefono=telefono_;
    correo=correo_;
    next=NULL;
}
template<typename T>
void Nodo<T>::print()
{
    cout<<"Id:"<<id<<endl;
    cout<<"Nombre:"<<nombre<<endl;
    cout<<"Direccion:"<<direccion<<endl;
    cout<<"Telefono:"<<telefono<<endl;
    cout<<"Correo:"<<correo<<endl;

}

template<typename T>
Nodo<T>::~Nodo(){

}

template<class T>

class List
{
private:
    Nodo<T> *ptrHead;
    int number_nodo;
public:
    List();
    ~List();

    void add_head(T,T,T,T,T);
    void add_end(T,T);
    void add_sort(T,T);
    void delete_position(int);
    void print();
    void Search(T);
    void NameSearch(T name);
    void buscar_pos(int);
    void invertir();
    void clear();
    void Ordenar();
    void Modificar(int,string ,string,string,string,string);

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
void List<T>::add_head(T id_,T nombre_,T direccion_,T telefono_,T correo_)
{
    Nodo<T> *new_nodo=new Nodo<T>(id_,nombre_,direccion_,telefono_,correo_);
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
            coutX++;coutY++;
        }
    }

}

template<typename T>
void List<T>::NameSearch(T name){
    Nodo<T> *temp=ptrHead;
    int count1=1,count2=0;
    while(temp){
        if(temp->nombre==name){
            cout<<"Encontrado en la posicion:"<<count1<<endl;
            cout<<"Id: "<<temp->id<<endl;
            cout<<"Nombre: "<<temp->nombre<<endl;
            cout<<"Direccion: "<<temp->direccion<<endl;
            cout<<"Telefono: "<<temp->telefono<<endl;
            cout<<"Correo: "<<temp->correo<<endl;
            count2++;
        }
        temp=temp->next;
        count1++;
    }
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

                        cad=aux1->direccion;
                        aux1->direccion=aux2->direccion;
                        aux2->direccion=cad;


                        cad=aux1->telefono;
                        aux1->telefono=aux2->telefono;
                        aux2->telefono=cad;


                        cad=aux1->correo;
                        aux1->correo=aux2->correo;
                        aux2->correo=cad;


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
template<typename T>
void List<T>::invertir(){
    cout<<"invertir lista ";
    int j = number_nodo,i = 0,cont,cont2;
    Nodo<T>* inicio= ptrHead;
    Nodo<T>* aux=ptrHead;
    Nodo<T>* temp=ptrHead;
    Nodo<T>* fin=ptrHead;
    string cad,cad1,cad2;
    if(ptrHead==NULL)
        cout<<"La agenda esta vacia\n";
    else {
        while(i<j){
            inicio = ptrHead;
            fin = ptrHead;
            cont = 1;
            cont2 =number_nodo;
            while(cont<j){
                fin = fin->next;
                cont++;
            }
            while(cont2-i<number_nodo){

                inicio = inicio->next;
                cont2++;
            }
            cad1 = fin->nombre;
            cad2 = inicio->nombre;
            cad = cad2;
            inicio->nombre=cad1;
            fin->nombre =cad2;

            cad1 = fin->id;
            cad2 = inicio->id;
            cad = cad2;
            inicio->id=cad1;
            fin->id=cad2;

            cad1 = fin->nombre;
            cad2 = inicio->nombre;
            cad = cad2;
            inicio->nombre=cad1;
            fin->nombre =cad2;

            cad1 = fin->id;
            cad2 = inicio->id;
            cad = cad2;
            inicio->id=cad1;
            fin->id=cad2;

            cad1 = fin->direccion;
            cad2 = inicio->direccion;
            cad = cad2;
            inicio->direccion=cad1;
            fin->direccion=cad2;


            cad1 = fin->telefono;
            cad2 = inicio->telefono;
            cad = cad2;
            inicio->telefono=cad1;
            fin->telefono=cad2;


            cad1 = fin->correo;
            cad2 = inicio->correo;
            cad = cad2;
            inicio->correo=cad1;
            fin->correo=cad2;
            inicio = fin;
            fin = aux;
            i++;
            j--;
        }
    }
}
template<typename T>
void List<T>::buscar_pos(int pos) {
    int band = 0;
    Nodo<T> *aux = ptrHead;
    if (number_nodo == 0)
        cout << "Agenda esta vacia\n";
    else {
        if (pos < number_nodo + 1 && pos > 0) {
            for (int i = 1; i < pos; i++) {
                cout << "aux" << i << "=" << aux->id << endl;
                aux = aux->next;
            }
            cout << "Id-." << aux->id << endl;
            cout << "Nombre-." << aux->nombre << endl;

        } else
            cout << "Posicion invalida\n";
    }
}
template <typename T>
void List<T>::Modificar(int pos,string id_,string nombre_,string direccion_, string telefono_, string correo_)
{
    Nodo<T> *aux=ptrHead;
    if(number_nodo==0)
        cout<<"Agenda esta vacia\n";
    else{
        if(pos<number_nodo+1&&pos>0){
            for(int i=1;i<pos;i++){
                cout<<"auxiliar"<<i<<"="<<aux->id<<endl;
                aux=aux->next;
            }
            aux->id = id_;
            aux->nombre = nombre_;
            aux->direccion=direccion_;
            aux->telefono=telefono_;
            aux->correo=correo_;
            cout<<"El nuevo ID es: "<<aux->id<<endl;
            cout<<"Nombre:  "<<aux->nombre<<endl;
            cout<<"Direccion "<<aux->direccion<<endl;
            cout<<"Telefono "<<aux->telefono<<endl;
            cout<<""<<aux->correo<<endl;

        }
        else
            cout<<"Posicion invalida\n";
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
            cout<<"Id: "<<temp->id<<endl;
            cout<<"Nombre: "<<temp->nombre<<endl;
            cout<<"Direccion: "<<temp->direccion<<endl;
            cout<<"Telefono: "<<temp->telefono<<endl;
            cout<<"Correo: "<<temp->correo<<endl;
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
void List<T>::clear(){
    Nodo<T> *aux = NULL;
    if(ptrHead==NULL){
        cout<<"Imposible eliminar en una lista vacia"<<endl;
    }else{
        while(ptrHead!=NULL){
            aux = ptrHead;
            ptrHead = ptrHead->next;
            delete aux;
            number_nodo--;
        }
    }
}

string validacionTelefono(string a){
    unsigned int valido =0,cont=0,tamanio;
    int num;
    string numValido;
    char numero[30],valor[30];
    strcpy(numero,a.c_str());
    num = atoi(numero);
    cin>>numero;
    cin.ignore(256,'\n');

    do{
        tamanio= strlen(numero);
        if (tamanio < 11 and tamanio > 8){
            if(isdigit(numero[cont])){
                if(cont+1==tamanio){
                    valido= 1;
                    num = atoi(numero);
                }
            }else{
                system("cls");
                cout << "Ingrese un numero de telefono valido: ";
                cin>>numero;
                cin.ignore(256,'\n');
                tamanio = strlen(numero);
                cont = cont -1;
            }
            cont++;
        }
        else{
            system("cls");
            cout << "ingrese un numero de telefono valido: ";
            for (int i=0;i < 31;i++){
                numero[i] = valor[i];
            }
        }
    }while(valido==0);
    numValido = static_cast<std::ostringstream*>(&(std::ostringstream() << num))->str();
    return numValido;
}

bool IsLetters(string nombre_)
{
    for (int i = 0; i < nombre_.size(); i++)
    {
        int uppercaseChar = toupper(nombre_[i]);
        if (uppercaseChar < 'A' || uppercaseChar > 'Z')
        {
            return false;
        }
    }

    return true;
}
int main () {
    List<string> list1;
    char correo3_[100];
    bool valido, valido2;
    unsigned long long int *ptr=0,*ptr2=0;
    unsigned long long int telefono2_,id2_;
    int element, dimention, pos, dat,index=1,out;
    int notdigit;
    regex mail("(^[A-Za-z])\\w{0,1000}(([._-]{0,1})([A-Za-z0-9])){0,1000}[@]{1}(?!com)(?!net)(?!NET)(?!org)(?!ORG)(?!gob)(?!GOB)([A-Za-z]{1,1000}[-.]{0,1}(?!com)(?!net)(?!NET)(?!org)(?!ORG)(?!gob)(?!GOB)[A-Za-z0-9]{0,1000})[.]{1}(com|net|org|gob|edu|mx){1}");
    string id_, nombre_, correo_, numero_, direccion_,correo2_,telefono_;
    char opc;
    do {

        cout << "              ________________________________________________\n"
                "            /                                                \\\n"
                "           |    _________________________________________     |\n"
                "           |   |                                         |    |\n"
                "           |   |  C:\\> _  1-.Agregar contacto           |    |\n"
                "           |   |        2-.Buscar contacto por posicion  |    |\n"
                "           |   |        3-.Eliminar contacto.            |    |\n"
                "           |   |        4-.Buscar por posicion           |    |\n"
                "           |   |        5-.Invertir                      |    |\n"
                "           |   |        6-.Buscar por nombre             |    |\n"
                "           |   |        7-.Ordenar alfabeticamente       |    |\n"
                "           |   |        8-.Imprimir datos                |    |\n"
                "           |   |        9-.Modificar                     |    |\n"
                "           |   |        0-.Eliminar Todo                 |    |\n"
                "           |   |                                         |    |\n"
                "           |   |                                         |    |\n"
                "           |   |_________________________________________|    |\n"
                "           |                                                  |\n"
                "            \\_________________________________________________/";
        cout<<"\nseleccione una opcion: ";

        do {
            cin.sync();
            cin >> opc;
            if (opc < '0' || opc > '9') {
                cout << "Ingresa puros numeros" << endl;
            }
        } while (opc < '0' || opc > '9');


        switch (opc) {
            case '1': {
                system("cls");
                system("CLS");
                cin.sync();
                id_=to_string(index);
                index++;

                cout << "Nombre \n";
                do{
                    out=0;
                    cout<<"inserte nombre";
                    getline(cin, nombre_);
                    if(IsLetters(nombre_)){
                        cout<<"\nnombre valido";
                        system("\npause");
                        system("cls");
                    }
                    else{
                        cout<<"no valido\n";
                        out=1;
                        system("\npause");
                        system("cls");
                    }
                }while(out);



                cout<<"\nDireccion: ";
                getline(cin,direccion_);
                cout<<"\nTelefono: ";
                do {
                    getline(cin, telefono_);

                    if (telefono_ <= "0" || telefono_ >= "9") {
                        cout << "Ingresa puros numeros" << endl;

                    }
                    //cin.ignore();
                } while (telefono_<= "0" || telefono_ >= "9");


                cout<<"\nCorreo electronico: ";
                do{
                    notdigit=0;
                    getline(cin,correo_);
                    cin.ignore(256,'\n');
                    valido=regex_match(correo_,mail);
                    if(valido==true){
                        cout<<"correo aceptado"<<endl;
                    }
                    else{
                        cout<<"Ingrese un dato valido ";
                        notdigit = 1;
                    }

                }while(notdigit);
                system("cls");

                opc=getch();
                list1.add_head(id_, nombre_,direccion_,telefono_,correo_);
                list1.print();
                system("\npause");
                system("cls");

                break;
            }

            case '2': {
                system("cls");
                getline(cin, id_);
                cout << "Busca un elemento\n";
                do {

                    getline(cin, id_);
                    if (id_ <= "0" || id_ >= "9") {
                        cout << "Ingresa puros numeros" << endl;
                    }
                } while (id_ <= "0" || id_ >= "9");
                list1.Search(id_);
                break;
            }

            case '3': {
                system("cls");
                cout << "Elimina posicion\n";
                cin >> pos;
                list1.delete_position(pos);
                list1.print();
                break;
            }
            case '4': {
                system("cls");
                cout << "Ingresa la posicion que quieres buscar\n";
                cin.sync();
                cin >> element;
                list1.buscar_pos(element);
                break;
            }
            case '5':{
                system("cls");
                list1.print();
                list1.invertir();
                cout << "Se ha invertido la lista\n";
                list1.print();

                break;
            }
            case '6': {
                system("cls");
                cin.ignore();
                //getline(cin, id_);
                cout << "buscar por nombre\n";
                cout << "Ingresa el nombre a buscar\n";
                getline(cin, id_);
                list1.NameSearch(id_);
                system("\npause");
                system("cls");
                break;
            }
            case '7': {
                system("cls");
                cout << "ordenar";
                list1.print();
                list1.Ordenar();
                list1.print();
                system("\npause");
                system("cls");
                break;
            }
            case '8': {
                system("cls");
                list1.print();
                system("\npause");
                system("cls");
                break;
            }
            case '9': {

                system("cls");
                cout << "modificar\n";
                cout << "Para modificar ingresa la posicion\n";
                cin.sync();
                cin >> dat;
                cin.ignore();
                cout << "Ingresa Nuevo Nombre: ";
                getline(cin,nombre_);
                cout<<"\nIngrese nueva direccion : ";
                getline(cin,direccion_);
                cout<<"\nIngrese nuevo numero: ";
                do {
                    getline(cin, telefono_);

                    if (telefono_ <= "0" || telefono_ >= "9") {
                        cout << "Ingresa puros numeros" << endl;

                    }
                    //cin.ignore();
                } while (telefono_<= "0" || telefono_ >= "9");
                cin.sync();
                cout<<"ingrese nuevo correo: ";
                do{

                    cin>>correo_;
                    cin.ignore(256,'\n');
                    notdigit = 0;
                    valido=regex_match(correo_,mail);
                    if(valido){
                        cout<<"correo aceptado"<<endl;
                    }
                    else{
                        cout<<"Ingrese un dato valido ";
                        notdigit = 1;
                    }

                }while(notdigit);
                list1.Modificar(dat, id_, nombre_, direccion_,telefono_,correo_);
            }

                break;
            case '0': {
                system("cls");
                list1.clear();
                break;
            }

        }

    }while (opc != 10);return 0;
}
