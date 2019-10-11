#include<iostream>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<unistd.h>
#include<cstdlib>
#include<cstring>
#include<stdio.h>
#include <stdexcept>
using namespace std;
int bool_reg=0,bool_assign=0,bool_board=0,bool_unboard=0,a=0;
void bienvenida(){
    cout<<" ___       _______ .______        ______   .______    __    __   _______ .______     .___________.  ______   \n"
          "    /   \\     |   ____||   _  \\      /  __  \\  |   _  \\  |  |  |  | |   ____||   _  \\    |           | /  __  \\  \n"
          "   /  ^  \\    |  |__   |  |_)  |    |  |  |  | |  |_)  | |  |  |  | |  |__   |  |_)  |   `---|  |----`|  |  |  | \n"
          "  /  /_\\  \\   |   __|  |      /     |  |  |  | |   ___/  |  |  |  | |   __|  |      /        |  |     |  |  |  | \n"
          " /  _____  \\  |  |____ |  |\\  \\----.|  `--'  | |  |      |  `--'  | |  |____ |  |\\  \\----.   |  |     |  `--'  | \n"
          "/__/     \\__\\ |_______|| _| `._____| \\______/  | _|       \\______/  |_______|| _| `._____|   |__|      \\______/  \n"
          "                                                                                                                 ";
}
class Ticket
{

public:
    string nombre;
    string passengers;
    int no_ticket;
    int lugar;
    Ticket *siguiente;
    Ticket *next_name;
    Ticket *next_name2;
    Ticket *siguiente_asiento;

    Ticket();
    void Agregar_Nombre(Ticket *&, string);
    void AgregarRAZA(Ticket*& ,string);
    void Agregar_Num(Ticket *&, int);
    void Agregar_asiento(Ticket *&, int);
    void Mostrar_Pila(Ticket *&,Ticket *&,Ticket *&, int &, string &,int &);
    void Mostar_pila2(Ticket*&,string);
    void agregar();
    void listar();
};

Ticket::Ticket()
{

}

void Ticket::Agregar_Nombre(Ticket *&Pila_name, string name)
{
    Ticket *nuevo_nombre = new Ticket();
    nuevo_nombre->nombre =name;
    nuevo_nombre->next_name=Pila_name;
    Pila_name=nuevo_nombre;
}

void Ticket::AgregarRAZA(Ticket *&Pila_name2, string name2)
{
    Ticket *nuevaraza = new Ticket();
    nuevaraza->passengers =name2;
    nuevaraza->next_name=Pila_name2;
    Pila_name2=nuevaraza;
}
void Ticket::Agregar_Num(Ticket *&Pila, int n)
{
    Ticket *nuevo_ticket = new Ticket();
    nuevo_ticket->no_ticket = n;
    nuevo_ticket->siguiente=Pila;
    Pila = nuevo_ticket;
}

void Ticket::Agregar_asiento(Ticket *&Pila_chida, int asiento)
{
    Ticket *nuevo_asiento = new Ticket();
    nuevo_asiento->lugar = asiento;
    nuevo_asiento->siguiente_asiento=Pila_chida;
    Pila_chida = nuevo_asiento;
}

void Ticket::Mostrar_Pila(Ticket *&Pila,Ticket*&Pila_name,Ticket *&Pila_chida,int &n, string &name, int &ass)
{
    if(Pila !=NULL && Pila_chida !=NULL && Pila_name !=NULL){
        Ticket *aux = Pila;
        Ticket *aux1=Pila_name;
        Ticket  *aux2=Pila_chida;
        name= aux1->nombre;
        n=aux->no_ticket;
        ass=aux2->lugar;
        Pila_name=aux1->next_name;
        Pila=aux->siguiente;
        Pila_chida=aux2->siguiente_asiento;
        delete aux1;
        delete aux;
        delete  aux2;
    }
    else{
        cout<<"No hay nadie registrado para el vuelo revise bien la adquisicion de tickets"<<endl;
    }
}

void Ticket::Mostar_pila2(Ticket *&Pila_name2, string name2)
{
    Ticket *aux5=Pila_name2;
    name2= aux5->passengers;
    Pila_name2=aux5->next_name2;
    delete aux5;

}
//////////////////////////////////////////////////////////////////////
void menu();
void adquirirtickets();
int random(int personas);
//////////////////////////////////////////////////////
void stick_ticket();
void gotoxy(int x, int y);
int numero,opc=0,cont=0,cont2=0,cantidad,number;
int sum=0;


Ticket t;
Ticket *pila=NULL;
Ticket *pila_name=NULL;
Ticket *Pila_chida=NULL;
Ticket *Pila_name2=NULL;
string nombres[20]{"michi","Petra","Christian","Roberto",
                 "Carlos","Fer","Isai","Dulce","Brandon","Archuria","Merlin","Gael","Brandon","Ramon","Mario","Luigi","Peach","Pedro","Peabody"};
int folios[20]{1598,1599,65498,65432,74125,63652,47583,14987,64312,20046,65421,64315,14253,95841,25014,65341,98754,20316,20018,20019,};
int  asientos[20]{8,2,6,1,3,9,10,7,4,5,13,16,12,14,18,20,19,17,15,11};
int Lugagge[20]{3, 2, 1, 5, 4, 4, 3, 3, 1, 1, 5, 1, 4, 4, 4, 2, 2, 1, 3, 1};
int seat;
string nombre;
int g;
int folio;
void menu(){
    cout<<"1) Comprar Ticket (Empezar COLA de los tickets)"<<endl
        <<"2) Asignaciones de asiento "<<endl
        <<"3) Registro de Equipaje"<<endl
        <<"4) Abordar El Avion"<<endl
        <<"5) Bajar del Avion"<<endl
        <<"6) Tomar Taxi"<<endl;
        cout<<"elija una opcion:";
}

void adquirirtickets(){
    cout<<"Cuanta Gente va ingresar al vuelo? ";
    cin>>cantidad;
    cantidad=cantidad+sum;
    if (cantidad<=20)
        for(g=sum; g<cantidad; g++){
            nombre=nombres[g];
            folio=folios[g];
            seat=asientos[g];
            t.Agregar_Nombre(pila_name, nombre);
            t.AgregarRAZA(Pila_name2,nombre);
            t.Agregar_Num(pila,folio);
            t.Agregar_asiento(Pila_chida, seat);
            sum=sum+1;
            system("pause");
            stick_ticket();
            if (cantidad > 20)
                cout << "El avion solo soporta 20 personas" << endl;
            system("pause");
        }

}

void Pasajeros(){

    cout<<endl<<"No. de tickets registrados"<<endl;
//while (pila != NULL) {
    if(pila!=NULL&&pila_name!=NULL&&Pila_chida!=NULL){
        for(int d=0; d<sum; d++){
            cout<<"Pasajero: # "<<d+1<<endl;
            cout<<"Nombre del pasajero: "<<nombres[d]<<endl;
            cout<<"Folio: # "<<folios[d]<<endl;
            cout<<"Asiento de avion: # "<<asientos[d]<<endl<<endl;
            cont++;

        }

    }
    else{
        cout<<"No hay nadie registrado para el vuelo revise bien la adquisicion de tickets"<<endl;
    }


}



int Revision_equipaje(){
    bool_reg=1;
    srand(time(NULL));
    int num;

    int i=0,x=0;
    for(int t=0; t<sum; t++)
        for(i=1;i<=7;i++){
            for(x=0;x<=7;x++){
                do{
                    num= Lugagge[t];
                    switch (num) {
                        case 1:
                            Sleep(50);
                            if(x/i==0){
                                x = x+1;
                                system("cls");
                                gotoxy(x,5); cout<<"["<<nombres[t]<<"]";
                                gotoxy(x,2);cout<<" [T] ";
                                gotoxy(x,3);cout<<" /|\\ ";
                                gotoxy(x,4);cout<< " / \\ ";
                                gotoxy(x+5,3);cout<<"___";
                                gotoxy(x+5,4);cout<<"| |";
                                cout<<endl<<"_____________|"<<endl<<endl;
                            }
                            Sleep(50);
                            if(x/i!=0){
                                system("cls");
                                gotoxy(x,5); cout<<"["<<nombres[t]<<"]";
                                gotoxy(x,2);cout<<" [T] ";
                                gotoxy(x,3);cout<<" /|\\ ";
                                gotoxy(x,4);cout<<"  | ";
                                gotoxy(x+5,3);cout<<"___";
                                gotoxy(x+5,4);cout<<"| |";

                                i++;
                                cout<<endl<<"_____________|"<<endl<<endl;
                            }
                            break;
                        case 2:
                            Sleep(100);
                            if(x/i==0){

                                x = x+1;
                                system("cls");
                                gotoxy(x,5); cout<<"["<<nombres[t]<<"]";
                                gotoxy(x,2);cout<<" [T] ";
                                gotoxy(x,3);cout<<" /|\\ ";
                                gotoxy(x,4);cout<< " / \\ ";
                                gotoxy(x+5,1);cout<<"___";
                                gotoxy(x+5,2);cout<<"| |";
                                gotoxy(x+5,3);cout<<"___";
                                gotoxy(x+5,4);cout<<"| |";
                                cout<<endl<<"_____________|"<<endl<<endl;
                            }
                            Sleep(100);
                            if(x/i!=0){
                                system("cls");
                                gotoxy(x,5); cout<<"["<<nombres[t]<<"]";
                                gotoxy(x,2);cout<<" [T] ";
                                gotoxy(x,3);cout<<" /|\\ ";
                                gotoxy(x,4);cout<<"  | ";
                                gotoxy(x+5,1);cout<<"___";
                                gotoxy(x+5,2);cout<<"| |";
                                gotoxy(x+5,3);cout<<"___";
                                gotoxy(x+5,4);cout<<"| |";
                                i++;
                                cout<<endl<<"_____________|"<<endl<<endl;
                            }
                            break;
                        case 3:
                            Sleep(150);
                            if(x/i==0){
                                x = x+1;
                                system("cls");
                                gotoxy(x,5); cout<<"["<<nombres[t]<<"]";
                                gotoxy(x,2);cout<<" [T] ";
                                gotoxy(x,3);cout<<" /|\\ ";
                                gotoxy(x,4);cout<<"  | ";
                                gotoxy(x+5,-1);cout<<"___";
                                gotoxy(x+5,0);cout<<"| |";
                                gotoxy(x+5,1);cout<<"___";
                                gotoxy(x+5,2);cout<<"| |";
                                gotoxy(x+5,3);cout<<"___";
                                gotoxy(x+5,4);cout<<"| |";
                                cout<<endl<<"_____________|"<<endl<<endl;
                            }
                            Sleep(150);
                            if(x/i!=0){
                                system("cls");
                                gotoxy(x,5); cout<<"["<<nombres[t]<<"]";
                                gotoxy(x,2);cout<<" [T] ";
                                gotoxy(x,3);cout<<" /|\\ ";
                                gotoxy(x,4);cout<<"  | ";
                                gotoxy(x+5,-1);cout<<"___";
                                gotoxy(x+5,0);cout<<"| |";
                                gotoxy(x+5,1);cout<<"___";
                                gotoxy(x+5,2);cout<<"| |";
                                gotoxy(x+5,3);cout<<"___";
                                gotoxy(x+5,4);cout<<"| |";
                                i++;
                                cout<<endl<<"_____________|"<<endl<<endl;
                            }
                            break;
                        case 4:
                            Sleep(200);
                            if(x/i==0){
                                x = x+1;
                                system("cls");
                                gotoxy(x,5); cout<<"["<<nombres[t]<<"]";
                                gotoxy(x,2);cout<<" [T] ";
                                gotoxy(x,3);cout<<" /|\\ ";
                                gotoxy(x,4);cout<<"  | ";
                                gotoxy(x+5,-1);cout<<"___";
                                gotoxy(x+5,0);cout<<"| |";
                                gotoxy(x+5,1);cout<<"___";
                                gotoxy(x+5,2);cout<<"| |";
                                gotoxy(x+5,3);cout<<"___";
                                gotoxy(x+5,4);cout<<"| |";
                                gotoxy(x+9,3);cout<<"___";
                                gotoxy(x+9,4);cout<<"| |";
                                cout<<endl<<"_____________|"<<endl<<endl;
                            }
                            Sleep(200);
                            if(x/i!=0){
                                system("cls");
                                gotoxy(x,5); cout<<"["<<nombres[t]<<"]";
                                gotoxy(x,2);cout<<" [T] ";
                                gotoxy(x,3);cout<<" /|\\ ";
                                gotoxy(x,4);cout<<"  | ";
                                gotoxy(x+5,-1);cout<<"___";
                                gotoxy(x+5,0);cout<<"| |";
                                gotoxy(x+5,1);cout<<"___";
                                gotoxy(x+5,2);cout<<"| |";
                                gotoxy(x+5,3);cout<<"___";
                                gotoxy(x+5,4);cout<<"| |";
                                gotoxy(x+9,3);cout<<"___";
                                gotoxy(x+9,4);cout<<"| |";
                                i++;
                                cout<<endl<<"_____________|"<<endl<<endl;
                            }
                            break;
                        case 5:
                            Sleep(300);
                            if(x/i==0){

                                x = x+1;
                                system("cls");
                                gotoxy(x,5); cout<<"["<<nombres[t]<<"]";
                                gotoxy(x,2);cout<<" [T] ";
                                gotoxy(x,3);cout<<" /|\\ ";
                                gotoxy(x,4);cout<<"  | ";
                                gotoxy(x+5,-1);cout<<"___";
                                gotoxy(x+5,0);cout<<"| |";
                                gotoxy(x+5,1);cout<<"___";
                                gotoxy(x+5,2);cout<<"| |";
                                gotoxy(x+5,3);cout<<"___";
                                gotoxy(x+5,4);cout<<"| |";
                                gotoxy(x+10,3);cout<<"___";
                                gotoxy(x+10,4);cout<<"| |";
                                gotoxy(x+10,1);cout<<"___";
                                gotoxy(x+10,2);cout<<"| |";
                                cout<<endl<<endl<<endl<<"__________________________"<<endl<<endl;
                            }
                            Sleep(300);
                            if(x/i!=0){
                                system("cls");
                                gotoxy(x,5); cout<<"["<<nombres[t]<<"]";
                                gotoxy(x,2);cout<<" [T] ";
                                gotoxy(x,3);cout<<" /|\\ ";
                                gotoxy(x,4);cout<<"  | ";
                                gotoxy(x+5,-1);cout<<"___";
                                gotoxy(x+5,0);cout<<"| |";
                                gotoxy(x+5,1);cout<<"___";
                                gotoxy(x+5,2);cout<<"| |";
                                gotoxy(x+5,3);cout<<"___";
                                gotoxy(x+5,4);cout<<"| |";
                                gotoxy(x+10,3);cout<<"___";
                                gotoxy(x+10,4);cout<<"| |";
                                gotoxy(x+10,1);cout<<"___";
                                gotoxy(x+10,2);cout<<"| |";
                                i++;
                                cout<<endl<<endl<<endl<<"__________________________"<<endl<<endl;
                            }
                            break;
                    }
                }while(x<=7);
            }
        }
}

void Taxi_cab();
void gotoxy(int x, int y);
void Avion_subida(){
    gotoxy(1,0);cout<<"					    |";
    gotoxy(1,1);cout<<"				          .-'-.";
    gotoxy(1,2);cout<<"	                                 ' ___ '";
    gotoxy(1,3);cout<<"	                       ---------'  .-.  '---------";
    gotoxy(1,4);cout<<"	       _________________________'  '-'  '_________________________";
    gotoxy(1,5);cout<<"	        ''''''-|---|--/    \\==][^',_m_,'^][==/    \\--|---|-''''''";
    gotoxy(1,6);cout<<"	                      \\    /  ||/   H   \\||  \\    /";
    gotoxy(1,7);cout<<"	                       '--'   OO   O|O   OO   '--'";
}


void Avion_bajada(){
    gotoxy(14,0);cout<<"					    |";
    gotoxy(14,1);cout<<"				          .-'-.";
    gotoxy(14,2);cout<<"	                                 ' ___ '";
    gotoxy(14,3);cout<<"	                       ---------'  .-.  '---------";
    gotoxy(14,4);cout<<"	       _________________________'  '-'  '_________________________";
    gotoxy(14,5);cout<<"	        ''''''-|---|--/    \\==][^',_m_,'^][==/    \\--|---|-''''''";
    gotoxy(14,6);cout<<"	                      \\    /  ||/   H   \\||  \\    /";
    gotoxy(14,7);cout<<"	                       '--'   OO   O|O   OO   '--'";

}
void gotoxy(int x,int y){
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y= y;
    SetConsoleCursorPosition(hcon,dwPos);
}
void Side_plane(){
    int count =0;
    while(count<20) {
        gotoxy(count, 2);
        cout << " _\\ _~-\\___\n";
        gotoxy(count, 2);
        cout<<"    =  = ==(____AA____D\n";
        gotoxy(count, 3);
        cout<<"                \\_____\\___________________,-~~~~~~~`-.._\n";
        gotoxy(count, 4);
        cout<<"                /     o O o o o o O O o o o o o o O o  |\\_\n";
        gotoxy(count, 5);
        cout<<"                `~-.__        ___..----..                  )\n";
        gotoxy(count, 6);
        cout<<"                      `---~~\\___________/------------`````\n";
        gotoxy(count, 7);
        cout<<"                      =  ===(_________D";
        system("cls");
        count++;

    }
}


void Board_planes(){
    bool_board=1;
    for(int t=0; t<sum; t++){
        int i=0,x=0;
        for(i=1;i<=7;i++){
            for(x=0;x<=7;x++){
                do{

                    if(x/i==0){

                        x = x+1;

                        system("cls");
                        gotoxy(x,1); cout<<"["<<nombres[t] <<"]";
                        gotoxy(x,2);cout<<" [T] ";
                        gotoxy(x,3);cout<<" /|\\ ";
                        gotoxy(x,4);cout<< " / \\ ";
                        cout<<endl<<"_____________|"<<endl<<endl;
                        gotoxy(95,0); Avion_bajada();

                    }




                    if(x/i!=0){
                        system("cls");
                        gotoxy(x,1); cout<<"["<<nombres[t]<<"]";
                        gotoxy(x,2);cout<<" [T] ";
                        gotoxy(x,3);cout<<" /|\\ ";
                        gotoxy(x,4);cout<<"  | ";

                        i++;
                        cout<<endl<<"_____________|"<<endl<<endl;
                        gotoxy(95,0); Avion_bajada();
                    }



                }while(x<=7);

            }
        }
    }
}

void Bajar_Avion(){
    bool_unboard=1;
    for(int t=0; t<sum; t++){
        int i=0,x=0;
        for(i=1;i<=50;i++){
            for(x=14;x<=50;x++){
                do{
                    if(x/i==0){
                        x = x+1;
                        system("cls");
                        gotoxy(x+54,7); cout<<"["<<nombres[t]<<"]";
                        gotoxy(x+54,8);cout<<" [T] ";
                        gotoxy(x+54,9);cout<<" /|\\ ";
                        gotoxy(x+54,10);cout<< " / \\ ";
                        gotoxy(0,0);cout<<"					    |";
                        gotoxy(0,1);cout<<"				          .-'-.";
                        gotoxy(0,2);cout<<"	                                 ' ___ '";
                        gotoxy(0,3);cout<<"	                       ---------'  .-.  '---------";
                        gotoxy(0,4);cout<<"	       _________________________'  '-'  '_________________________";
                        gotoxy(0,5);cout<<"	        ''''''-|---|--/    \\==][^',_m_,'^][==/    \\--|---|-''''''";
                        gotoxy(0,6);cout<<"	                      \\    /  ||/   H   \\||  \\    /";
                        gotoxy(0,7);cout<<"	                       '--'   OO   O|O   OO   '--'             ";
                    }
                    if(x/i!=0){
                        system("cls");
                        gotoxy(x+54,7); cout<<"["<<nombres[t]<<"]";
                        gotoxy(x+54,8);cout<<" [T]";
                        gotoxy(x+54,9);cout<<" /|\\ ";
                        gotoxy(x+54,10);cout<<"  | ";
                        i++;
                        gotoxy(0,0);cout<<"					    |";
                        gotoxy(0,1);cout<<"				          .-'-.";
                        gotoxy(0,2);cout<<"	                                 ' ___ '";
                        gotoxy(0,3);cout<<"	                       ---------'  .-.  '---------";
                        gotoxy(0,4);cout<<"	       _________________________'  '-'  '_________________________";
                        gotoxy(0,5);cout<<"	        ''''''-|---|--/    \\==][^',_m_,'^][==/    \\--|---|-''''''";
                        gotoxy(0,6);cout<<"	                      \\    /  ||/   H   \\||  \\    /";
                        gotoxy(0,7);cout<<"	                       '--'   OO   O|O   OO   '--'             ";
                    }
                }while(x<=50);
            }
        }
    }
}
void stick_ticket(){
    int z=0,x=0;
    for(z=1;z<=22;z++){
        for(x=0;x<=22;x++){
            do{
                if(x/z==0){
                    x = x+1;
                    system("cls");
                    gotoxy(x,1); cout<<"["<<nombres[g] <<"]";
                    gotoxy(x,2);cout<<" [T] ";
                    gotoxy(x,3);cout<<" /|\\ ";
                    gotoxy(x,4);cout<< " / \\ ";
                    gotoxy(30,0);cout<<"| [	 # 1  ] ";
                    gotoxy(30,1);cout<<"| [Tickets] |	";
                    gotoxy(30,2);cout<<"|___________|	";
                    gotoxy(30,3);cout<<"      @     |	";
                    gotoxy(30,4);cout<<" ____-|-____|	";
                    gotoxy(30,5);cout<<"|	            ";
                    gotoxy(30,6);cout<<"|____________	";
                    gotoxy(0,6) ;cout<<"____________________________"<<endl<<endl;
                }
                if(x/z!=0){
                    system("cls");
                    gotoxy(x,1); cout<<"["<<nombres[g]<<"]";
                    gotoxy(x,2);cout<<" [T] ";
                    gotoxy(x,3);cout<<" /|\\ ";
                    gotoxy(x,4);cout<<"  | ";
                    gotoxy(30,0);cout<<"| [	 # 1  ] ";
                    gotoxy(30,1);cout<<"| [Tickets] |	";
                    gotoxy(30,2);cout<<"|___________|	";
                    gotoxy(30,3);cout<<"      @     |	";
                    gotoxy(30,4);cout<<" ____-|-____|	";
                    gotoxy(30,5);cout<<"|	            ";
                    gotoxy(30,6);cout<<"|____________	";
                    z++;
                    gotoxy(0,6) ;cout<<"____________________________"<<endl<<endl;
                }


            }while(x<=22);

            cout<<"Datos: "<<endl;
            cout<<"Nombre: "<<nombres[g]<<endl;
            cout<<"Folio: #"<<folios[g]<<endl;
            cout<<"Asiento: #"<<asientos[g]<<endl;

        }
    }
}
void Asientos_Avion(){
    bool_assign=1;
    char n;
    char ass[20];
    int c=0;
    //if()
    for(int i=1;i<=20;i++){
        ass[i]=c;
        c++;
    }
    system("cls");
    for(int assign =0;assign <=cantidad;assign++){
        ass[assign]='64'+c;
        c++;


    }
    for(int j=1;j<=20;j++){
        //cout<<"[ "<<ass[j]<<"]";
        if(j%4==0) {
            //  cout<<"\n";}

        }
    }
    system("cls");
    switch(cantidad) {
        case 1:
            gotoxy(1, 1);
            cout << "|" << "[" << "michi" << "] " << "|" << " [" << 2 << " ]" << "|";
            gotoxy(1, 2);
            cout << "|" << "[" << 3 << "] " << "|" << " [" << 4 << " ]" << "|";
            gotoxy(1, 3);
            cout << "|" << "[" << 5 << "] " << "|" << " [" << 6 << " ]" << "|";
            gotoxy(1, 4);
            cout << "|" << "[" << 7 << "] " << "|" << " [" << 8 << " ]" << "|";
            gotoxy(1, 5);
            cout << "|" << "[" << 9 << "] " << "|" << " [" << 11 << "]" << "|";
            gotoxy(1, 6);
            cout << "|" << "[" << 12 << "]" << "| " << "[" << 13 << "]" << "|";
            gotoxy(1, 7);
            cout << "|" << "[" << 14 << "]" << "| " << "[" << 15 << "]" << "|";
            gotoxy(1, 8);
            cout << "|" << "[" << 16 << "]" << "| " << "[" << 17 << "]" << "|";
            gotoxy(1, 9);
            cout << "|" << "[" << 18 << "]" << "| " << "[" << 19 << "]" << "|";
            gotoxy(1, 9);
            cout << "|" << "[" << 20 << "]" << "| " << "[" << 21 << "]" << "|";
            Pasajeros();
            system("pause");
            break;
        case 2:
            gotoxy(1, 1);
            cout << "|" << "[" << "michi" << "] " << "|" << " [" << "Petra" << " ]" << "|";
            gotoxy(1, 2);
            cout << "|" << "[" << 3 << "] " << "|" << " [" << 4 << " ]" << "|";
            gotoxy(1, 3);
            cout << "|" << "[" << 5 << "] " << "|" << " [" << 6 << " ]" << "|";
            gotoxy(1, 4);
            cout << "|" << "[" << 7 << "] " << "|" << " [" << 8 << " ]" << "|";
            gotoxy(1, 5);
            cout << "|" << "[" << 9 << "] " << "|" << " [" << 11 << "]" << "|";
            gotoxy(1, 6);
            cout << "|" << "[" << 12 << "]" << "| " << "[" << 13 << "]" << "|";
            gotoxy(1, 7);
            cout << "|" << "[" << 14 << "]" << "| " << "[" << 15 << "]" << "|";
            gotoxy(1, 8);
            cout << "|" << "[" << 16 << "]" << "| " << "[" << 17 << "]" << "|";
            gotoxy(1, 9);
            cout << "|" << "[" << 18 << "]" << "| " << "[" << 19 << "]" << "|";
            gotoxy(1, 9);
            cout << "|" << "[" << 20 << "]" << "| " << "[" << 21 << "]" << "|";
            Pasajeros();
            system("pause");
            break;
        case 3:
            gotoxy(1, 1);
            cout << "|" << "[" << "michi" << "] " << "|" << " [" << "Petra" << " ]" << "|";
            gotoxy(1, 2);
            cout << "|" << "[" << "Christian" << "] " << "|" << " [" << 4 << " ]" << "|";
            gotoxy(1, 3);
            cout << "|" << "[" << 5 << "] " << "|" << " [" << 6 << " ]" << "|";
            gotoxy(1, 4);
            cout << "|" << "[" << 7 << "] " << "|" << " [" << 8 << " ]" << "|";
            gotoxy(1, 5);
            cout << "|" << "[" << 9 << "] " << "|" << " [" << 11 << "]" << "|";
            gotoxy(1, 6);
            cout << "|" << "[" << 12 << "]" << "| " << "[" << 13 << "]" << "|";
            gotoxy(1, 7);
            cout << "|" << "[" << 14 << "]" << "| " << "[" << 15 << "]" << "|";
            gotoxy(1, 8);
            cout << "|" << "[" << 16 << "]" << "| " << "[" << 17 << "]" << "|";
            gotoxy(1, 9);
            cout << "|" << "[" << 18 << "]" << "| " << "[" << 19 << "]" << "|";
            gotoxy(1, 9);
            cout << "|" << "[" << 20 << "]" << "| " << "[" << 21 << "]" << "|";
            Pasajeros();
            system("pause");
            break;
        case 4:
            gotoxy(1, 1);
            cout << "|" << "[" << "michi" << "] " << "|" << " [" << "Petra" << " ]" << "|";
            gotoxy(1, 2);
            cout << "|" << "[" << "Christian" << "] " << "|" << " [" << "Roberto" << " ]" << "|";
            gotoxy(1, 3);
            cout << "|" << "[" << 5 << "] " << "|" << " [" << 6 << " ]" << "|";
            gotoxy(1, 4);
            cout << "|" << "[" << 7 << "] " << "|" << " [" << 8 << " ]" << "|";
            gotoxy(1, 5);
            cout << "|" << "[" << 9 << "] " << "|" << " [" << 11 << "]" << "|";
            gotoxy(1, 6);
            cout << "|" << "[" << 12 << "]" << "| " << "[" << 13 << "]" << "|";
            gotoxy(1, 7);
            cout << "|" << "[" << 14 << "]" << "| " << "[" << 15 << "]" << "|";
            gotoxy(1, 8);
            cout << "|" << "[" << 16 << "]" << "| " << "[" << 17 << "]" << "|";
            gotoxy(1, 9);
            cout << "|" << "[" << 18 << "]" << "| " << "[" << 19 << "]" << "|";
            gotoxy(1, 9);
            cout << "|" << "[" << 20 << "]" << "| " << "[" << 21 << "]" << "|";
            Pasajeros();
            system("pause");
            break;
        case 5:
            gotoxy(1, 1);
            cout << "|" << "[" << "michi" << "] " << "|" << " [" << "Petra" << " ]" << "|";
            gotoxy(1, 2);
            cout << "|" << "[" << "Christian" << "] " << "|" << " [" << "Roberto" << " ]" << "|";
            gotoxy(1, 3);
            cout << "|" << "[" << "Carlos" << "] " << "|" << " [" << 6 << " ]" << "|";
            gotoxy(1, 4);
            cout << "|" << "[" << 7 << "] " << "|" << " [" << 8 << " ]" << "|";
            gotoxy(1, 5);
            cout << "|" << "[" << 9 << "] " << "|" << " [" << 11 << "]" << "|";
            gotoxy(1, 6);
            cout << "|" << "[" << 12 << "]" << "| " << "[" << 13 << "]" << "|";
            gotoxy(1, 7);
            cout << "|" << "[" << 14 << "]" << "| " << "[" << 15 << "]" << "|";
            gotoxy(1, 8);
            cout << "|" << "[" << 16 << "]" << "| " << "[" << 17 << "]" << "|";
            gotoxy(1, 9);
            cout << "|" << "[" << 18 << "]" << "| " << "[" << 19 << "]" << "|";
            gotoxy(1, 9);
            cout << "|" << "[" << 20 << "]" << "| " << "[" << 21 << "]" << "|";
            Pasajeros();
            system("pause");
            break;
        case 6:
            gotoxy(1, 1);
            cout << "|" << "[" << "michi" << "] " << "|" << " [" << "Petra" << " ]" << "|";
            gotoxy(1, 2);
            cout << "|" << "[" << "Christian" << "] " << "|" << " [" << "Roberto" << " ]" << "|";
            gotoxy(1, 3);
            cout << "|" << "[" << "Carlos" << "] " << "|" << " [" << "Fer" << " ]" << "|";
            gotoxy(1, 4);
            cout << "|" << "[" << 7 << "] " << "|" << " [" << 8 << " ]" << "|";
            gotoxy(1, 5);
            cout << "|" << "[" << 9 << "] " << "|" << " [" << 11 << "]" << "|";
            gotoxy(1, 6);
            cout << "|" << "[" << 12 << "]" << "| " << "[" << 13 << "]" << "|";
            gotoxy(1, 7);
            cout << "|" << "[" << 14 << "]" << "| " << "[" << 15 << "]" << "|";
            gotoxy(1, 8);
            cout << "|" << "[" << 16 << "]" << "| " << "[" << 17 << "]" << "|";
            gotoxy(1, 9);
            cout << "|" << "[" << 18 << "]" << "| " << "[" << 19 << "]" << "|";
            gotoxy(1, 9);
            cout << "|" << "[" << 20 << "]" << "| " << "[" << 21 << "]" << "|";
            Pasajeros();
            system("pause");
            break;
        case 7:
            gotoxy(1, 1);
            cout << "|" << "[" << "michi" << "] " << "|" << " [" << "Petra" << " ]" << "|";
            gotoxy(1, 2);
            cout << "|" << "[" << "Christian" << "] " << "|" << " [" << "Roberto" << " ]" << "|";
            gotoxy(1, 3);
            cout << "|" << "[" << "Carlos" << "] " << "|" << " [" << "Fer" << " ]" << "|";
            gotoxy(1, 4);
            cout << "|" << "[" << "Isai" << "] " << "|" << " [" << 8 << " ]" << "|";
            gotoxy(1, 5);
            cout << "|" << "[" << 9 << "] " << "|" << " [" << 11 << "]" << "|";
            gotoxy(1, 6);
            cout << "|" << "[" << 12 << "]" << "| " << "[" << 13 << "]" << "|";
            gotoxy(1, 7);
            cout << "|" << "[" << 14 << "]" << "| " << "[" << 15 << "]" << "|";
            gotoxy(1, 8);
            cout << "|" << "[" << 16 << "]" << "| " << "[" << 17 << "]" << "|";
            gotoxy(1, 9);
            cout << "|" << "[" << 18 << "]" << "| " << "[" << 19 << "]" << "|";
            gotoxy(1, 9);
            cout << "|" << "[" << 20 << "]" << "| " << "[" << 21 << "]" << "|";
            Pasajeros();
            system("pause");
            break;
        case 8:
            gotoxy(1, 1);
            cout << "|" << "[" << "michi" << "] " << "|" << " [" << "Petra" << " ]" << "|";
            gotoxy(1, 2);
            cout << "|" << "[" << "Christian" << "] " << "|" << " [" << "Roberto" << " ]" << "|";
            gotoxy(1, 3);
            cout << "|" << "[" << "Carlos" << "] " << "|" << " [" << "Fer" << " ]" << "|";
            gotoxy(1, 4);
            cout << "|" << "[" << "Isai" << "] " << "|" << " [" << "Dulce" << " ]" << "|";
            gotoxy(1, 5);
            cout << "|" << "[" << 9 << "] " << "|" << " [" << 11 << "]" << "|";
            gotoxy(1, 6);
            cout << "|" << "[" << 12 << "]" << "| " << "[" << 13 << "]" << "|";
            gotoxy(1, 7);
            cout << "|" << "[" << 14 << "]" << "| " << "[" << 15 << "]" << "|";
            gotoxy(1, 8);
            cout << "|" << "[" << 16 << "]" << "| " << "[" << 17 << "]" << "|";
            gotoxy(1, 9);
            cout << "|" << "[" << 18 << "]" << "| " << "[" << 19 << "]" << "|";
            gotoxy(1, 9);
            cout << "|" << "[" << 20 << "]" << "| " << "[" << 21 << "]" << "|";
            Pasajeros();
            system("pause");
            break;
    }

}
void tomar_taxi(){
    for(int t=0; t<sum; t++){
        int i=0,x=0;
        for(i=1;i<=15;i++){
            for(x=0;x<=15;x++){
                do{

                    if(x/i==0){

                        x = x+1;
                        system("cls");
                        gotoxy(x,6); cout<<"["<<nombres[t]<<"]";
                        gotoxy(x,7);cout<<" [T] ";
                        gotoxy(x,8);cout<<" /|\\ ";
                        gotoxy(x,9);cout<< " / \\ ";

                        gotoxy(20,7);cout<<" 	 ______";
                        gotoxy(20,8);cout<<" 	/|_||_ \\`.__";
                        gotoxy(20,9);cout<<"   (   _    _ _\\";
                        gotoxy(20,10);cout<<"  =`-(_)--(_)-'";

                    }




                    if(x/i!=0){
                        system("cls");
                        gotoxy(x,6); cout<<"["<<nombres[t]<<"]";
                        gotoxy(x,7);cout<<" [T] ";
                        gotoxy(x,8);cout<<" /|\\ ";
                        gotoxy(x,9);cout<<"  | ";

                        i++;
                        gotoxy(20,7);cout<<" 	 ______";
                        gotoxy(20,8);cout<<" 	/|_||_ \\`.__";
                        gotoxy(20,9);cout<<"   (   _    _ _\\";
                        gotoxy(20,10);cout<<"  =`-(_)--(_)-'";
                    }
                }while(x<cantidad);

            }
        }
        Taxi_cab();
    }

}
void Taxi_cab()
{
    system("cls");

    for(int go=0;go<=60;go++){
        gotoxy(0,0);
        cout<<"taxi="<<a;
    gotoxy(go,0);
    cout<<"                .\n";
    gotoxy(go,1);
          cout<<"    __         |\\\n";
    gotoxy(go,2);
          cout<<" __/__\\___________| \\_\n";
    gotoxy(go,3);
          cout<<" |   ___    |  ,|   ___`-.\n";
    gotoxy(go,4);
          cout<<" |  /   \\   |___/  /   \\  `-.\n";
    gotoxy(go,5);
          cout<<" |_| (O) |________| (O) |____|\n";
    gotoxy(go,6);
          cout<<"    \\___/          \\___/";
        a++;
    }

    sleep(2);

}

int main(){
    system("cls");
    bienvenida();
    system("pause");
    cout<<endl<<endl;
    do{
        system("cls");
        int opc;
        menu();
        opc=getch();
        switch (opc) {
            case '1':
                adquirirtickets();
                break;

            case '2':
                Asientos_Avion();
                break;
            case '3':

                if(pila!=NULL && pila_name!=NULL){
                    Revision_equipaje();
                }
                else{
                    cout<<"No hay nadie registrado para el vuelo revise bien la adquisicion de tickets"<<endl;
                    system("pause");
                }
                break;

            case '4':
                if(bool_assign==0||bool_reg==0){
                    cout<<"trying to board plane with no elements registered\n";
                    system("pause");
                    break;
                }
                if(pila!=NULL && pila_name!=NULL)
                {
                    Board_planes();
                    Side_plane();

                }
                else{
                    cout<<"trying to board plane with no elements registered"<<endl;
                    system("pause");
                }
                break;

            case '5':
                if(bool_reg==0||bool_assign==0||bool_board==0){
                    cout<<"trying to descend from plane with no registered elemnts\n";
                    system("pause");
                    break;
                }
                if(pila!=NULL && pila_name!=NULL){
                    Bajar_Avion();
                }
                else{
                    cout<<"trying to descend from plane with no registered elemnts\n";
                    system("pause");
                }
                break;

            case '6':
                if(bool_assign==0||bool_reg==0||bool_board==0||bool_unboard==0){
                    cout<<"trying to take taxi with invalid range\n";
                    system("pause");
                    break;
                }
                if(pila!=NULL && pila_name!=NULL){
                    tomar_taxi();
                }
                else{
                    cout<<"trying to take taxi with no elements registered\n";
                    system("pause");
                }
                break;
        }

    }while(opc!='0');

}


