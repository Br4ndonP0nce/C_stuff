#include<iostream>
#include<stdlib.h>
#include <time.h>
#include<cstring>
#include<windows.h>

using namespace std;

class cola{
private:
    int inicio,fin;
    int cont=0;
    //int  dato[10];

public:
    cola();
    int lleno();
    int vacio();
    void llenar( );
    void consultar_inicio();
    void consultar_final();
    void mostrar_cola();
    void eliminar();
    string dato[10]={};

};
cola::cola(){
    fin=0;
    inicio=0;
}
void cola::llenar(){
    int x,i,random;
    string gente[10]{"Carlos","Isai","Merlin","Pedro","Rene","Mike","Brandon","Lupercio","Chris","Juan"};
    srand(time(NULL));
    for (x = 0; x < 10; x++){
        //cout << x << endl;
        random = rand()%10;
        dato[x] = gente[random];
        for (i = 0; i < 10; i++){
            if(x != i && dato[x] == dato[i]){
                random = rand()%10;
                dato[x] = gente[random];
                i=-1;
            }
        }
        fin ++;
    }
}

void cola::consultar_inicio(){
    if(vacio()==0){
        int aux=0;
        cout << endl << "\tBANCO"<<endl<<endl;
        cout<<"\nEL inicio es  "<<dato[aux]<<endl<<endl;
        system("pause");
    }
}

void cola::consultar_final(){
    if(vacio()==0){
        int fin=9;
        cout << endl << "\tBANCO "<<endl<<endl;
        cout<<"\nEl final es  "<<dato[fin]<<endl<<endl;
        system("pause");
    }
}

void cola::mostrar_cola(){
    if(vacio()==0){
        system("cls");
        cout << endl << "\tBANCO "<<endl<<endl;
        cout << "\t       Fila General' " << endl << endl;
        cout << "  TURNO n  \t Persona" << endl;
        for(int i=9;i>=0;i--){
            Sleep(500);
            cout << "|" <<i << "|\t  " <<dato[i]<<endl;
        }
    }
}

void cola::eliminar(){
    string pagos[10];
    string cuentas[10];
    string seguros[10];
    srand(time(NULL));
    int cont2=0,random2,contpagos=0,contcuentas=0,contseguros=0;
    while(inicio<10){
        random2 = rand()%3+1;
        switch(random2)
        {
            case 1:
                pagos[contpagos] = dato[inicio];
                contpagos++;
                break;
            case 2:
                cuentas[contcuentas] = dato[inicio];
                contcuentas++;
                break;
            case 3:
                seguros[contseguros] = dato[inicio];
                contseguros++;
                break;
        }
        inicio++;
    }
    cout << "//////////////////////////////////////////////////////////////////////" ;
    cout << endl << "\tBANCO "<<endl<<endl;
    cout << "\t       Caja 1: atencion al cliente " << endl << endl;
    cout << "  TURNO  " << endl << endl;
    cout << "Usuarios atendidos" << endl << endl;
    while(cont2<contpagos){
        Sleep(500);
        cout << "[   " << cont2 << "   ]" <<"\t" << pagos[cont2] << endl;
        cont2++;
    }
    cont2 = 0;
    cout << "//////////////////////////////////////////////////////////////////////" << endl;
    cout << "\tBANCO "<<endl<<endl;
    cout << "\t       Caja 2: tarjetas de credito " << endl <<endl;
    cout << "Usuarios atendidos" << endl << endl;
    while(cont2<contcuentas){
        Sleep(500);
        cout << "[   " << cont2 << "   ]" << "\t" << cuentas[cont2] << endl;
        cont2++;
    }
    cont2 = 0;
    cout << "//////////////////////////////////////////////////////////////////////" << endl;
    cout << "\tBANCO "<<endl<<endl;
    cout << "\t       Caja 3:ahorro " << endl << endl;
    cout << "Usuarios atendidos" << endl <<endl;
    while(cont2<contseguros){
        Sleep(500);
        cout << "[   " << cont2 << "   ]" << "\t" << seguros[cont2] << endl;
        cont2++;
    }
    cout << endl << endl << "Usuarios atendidos" << endl <<endl;
}

int cola::lleno(){
    if(fin==9){
        cout<<"LA COLA ESTA LLENA"<<endl;
        system("pause");
        return 1;
    }else{
        return 0;
    }
}
int cola::vacio(){
    if(fin==-1){
        cout<<"LA COLA ESTA VACIA"<<endl;
        system("pause");
        return 1;
    } else{
        return 0;
    }
}




int main(){
    int opc,num,x;
    reinicio:
    int *Validacion_De_Entero(int *num);
    int *ptr0;
    ptr0 =&opc;
    cola c;
    do{
        system("cls");
        cout << "\t Banco \t"<<endl;
        cout << "\t MENU DE OPCIONES"<< endl << endl;
        cout << "  OPCION\t"<< endl;
        cout<<"\n|1| Generar \n|2| Inicio\n|3| Fin\n|4| Correr cola\n|5| Mostrar cola\n|6| Salir\n|7| Limpiar"<<endl<<endl;
        cout << "Eleccion ";
        *Validacion_De_Entero(ptr0);
        switch(*ptr0){
            case 1:
                c.llenar();
                system("cls");
                cout << "\tBanco:"<<endl<<endl;
                cout << "\tCola creada" << endl << endl;
                system("pause");
                break;
            case 2:
                c.consultar_inicio();
                break;
            case 3:
                c.consultar_final();
                break;
            case 4:
                system("cls");
                c.eliminar();
                system("pause");
                break;
            case 5:
                system("cls");
                c.mostrar_cola();
                system("pause");
                break;
            case 6:
                cout << "Adios" << endl;
                return 0;
            case 7:
                cout << "confirmar: 1=yes 2=no " <<endl;
                cin >> x;
                if(x==1) {
                    system("clear");
                    goto reinicio;
                }
                if(x==2){
                    cout << "Adios" << endl;
                    return 0;
                }
            default:
                cout << "Dato invalido se le pide que ingrese un valor valido porfavor" << endl;

        }
    }while(opc!=7);
}



int *Validacion_De_Entero(int *num){
    int aprobacion =0,cont=0,extension;
    char numero[100000];
    cin>>numero;
    cin.ignore(256,'\n');
    extension= strlen(numero);
    do{
        if(isdigit(numero[cont])){
            if(cont+1==extension){
                aprobacion= 1;
                *num = atoi(numero);
            }
        }else{
            cout<<"Ingrese caracteres adecuados"<<std::endl;
            cin>>numero;
            cin.ignore(256,'\n');
            extension = strlen(numero);
            cont=-1;
        }
        cont++;
    }while(aprobacion==0);
    return num;
}
