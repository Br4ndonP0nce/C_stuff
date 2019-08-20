using namespace std;
#include <iostream>
#include <cstring>

void alta();
int buscar(int cve);
int edit(int cve);
void mostrar(int pos);
void eliminar(int pos);
void all();


struct agenda{
    int id;//ID
    char nombre[30];  //Array for new user
    char telefono[10];  //New use phone
    char direccion[20];  // user address
}a[10];

int main (){    //main function
    int opc=0;
    int cve =0;

    do{
        system("cls");
        cout<<"MENU"<<endl<<endl;
        cout<<"1) Alta"<<endl;
        cout<<"2) Buscar"<<endl;
        cout<<"3) Editar "<<endl;
        cout<<"4) Remover"<<endl;
        cout<<"5) lista"<<endl;
        cin>>opc;

        switch (opc) {
            case 1:{
                alta();
                break;
            }
            case 2:{
                cout<<"Ingrese el Id" <<endl;
                cin>> cve;
                mostrar(buscar(cve));
                break;
            }
            case 3:{
                cout<<"Ingrese el Id" <<endl;
                cin>> cve;
                edit(cve);
                break;


            }
            case 4:{
                cout<<"Ingrese el ID a remover";
                cin>>cve;
                eliminar(cve-1);
                break;
            }
            case 5:{
                all();

            }

        }
        system("pause");
        cout<< "continuar[1] Salir [2]";
        cin>>opc;

    }while(opc!=2);
    return 0;
}


int index =0;//Indice

void alta() {
    system("cls");
    cout<< "ingrese ID" <<endl;
    cin>> a[index].id;

    cout<<"ingrese nombre" <<endl;
    cin>> a[index].nombre;

    cout<< "ingrese telefono"<<endl;
    cin>> a[index].telefono;

    cout<< "ingrese direccion"<<endl;
    cin>> a[index].direccion;
    index++;
}

int buscar(int cve){
    system("cls");
    int x=0, pos=0;//Position variables initialized in 0;
    int ban=0;
    while (x < 10  && ban == 0) {
        if (cve == a[x].id){
            ban=1;
            pos=x;
        }
        else{
            ban=1;
            cout<<"No se ecuentra el Usuario"<<endl;
            system("pause");
        }
        x++;
    }
    return pos;

}

void mostrar (int pos){
    system("cls");
    cout<< "Id: "<<a[pos].id<<endl,
            cout<< "Nombre: "<<a[pos].nombre <<endl,
            cout<< "direccion: "<<a[pos].direccion <<endl,
            cout<< "telefono: "<<a[pos].telefono <<endl;
    system("pause");

}

int edit (int cve){//edit
    system("cls");
    int x=0, pos=0;
    int dif=0;
    while(x<10 && dif==0){//while start
        if(cve == a[x].id){
            pos = x;
            dif = 1;

            cout<<"Ingrese Nombre"<<endl;
            cin>>a[x].nombre;

            cout<<"Ingrese direccion"<<endl;
            cin>>a[x].direccion;

            cout<<"Ingrese Telefono"<<endl;
            cin>>a[x].telefono;

        }
        else{
            dif=1;
            cout<<"No se encontro el Usuario"<<endl;
        }
        x++;
    }//"while end"
    return pos;
}//Edit function


void eliminar(int pos){
    system("cls");
    for(int x=pos; x<10; x++){//inicio for
        a[x].id = a[x+1].id;
        strcpy(a[x].nombre,a[x+1].nombre);
        strcpy(a[x].direccion,a[x+1].direccion);
        strcpy(a[x].telefono,a[x+1].telefono);

    }
    index--;
}

void all(){
    system("cls");
    cout<<"LISTA"<<endl;
    for(int x=0; x<index; x++){
        cout<<"ID:"<<a[x].id<<endl;
        cout<<"Nombre:"<<a[x].nombre<<endl;
        cout<<"Telefono:"<<a[x].telefono<<endl;
        cout<<"Direccion:"<<a[x].direccion<<endl<<endl;
    }
}
