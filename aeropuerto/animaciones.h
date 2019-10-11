#ifndef AEROPUERTO_ANIMACIONES_H
#define AEROPUERTO_ANIMACIONES_H
#include <iostream>
#include <time.h>
#include <windows.h>
#include "Pila.h"
using namespace std;
int pass,count=0,random_pick;
string names[20]{"michi","juanita","Christian","Mike",
                 "Carlos","Fer","Isai","Dulce","Brandon","Archuria","Merlin","Gael","Brandon","Ramon","Mario","Luigi","Peach","Pedro","Peabody"};
Pila::Pila()
{
    raiz = NULL;
}

void Pila::insertar(string name)
{
    Nodo *nuevo;
    nuevo = new Nodo();
    nuevo->info = name;
    if (raiz == NULL)
    {
        raiz = nuevo;
        nuevo->sig = NULL;
    }
    else
    {
        nuevo->sig = raiz;
        raiz = nuevo;
    }
}

void Pila::imprimir()
{
    Nodo *reco = raiz;
    cout << "Listado de todos los elementos de la pila.\n";
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << "\n";
}

string Pila::extraer()
{
    if (raiz != NULL)
    {
        string informacion = raiz->info;
        Nodo *bor = raiz;
        raiz = raiz->sig;
        delete bor;
        return informacion;
    }
    else
    {
        return nullptr;
    }
}

Pila::~Pila()
{
    Nodo *reco = raiz;
    Nodo *bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}
////////////////////////////////
void gotoxy(int x, int y){
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y= y;
    SetConsoleCursorPosition(hcon,dwPos);
}
void menu(){
    cout << "1) Compra de Ticket" << endl;
    cout << "2) Asignacion de lugar" << endl;
    cout << "3) Registro de equipaje" << endl;
    cout << "4) Abordar vuelo" << endl;
    cout << "5) Salida Avion" << endl;
    cout << "6) Tomar Taxi" << endl;
    cout << "7) Salir" << endl;

}

void plane() {

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
void stickwalk() {
    while (count < pass) {
        for (int walk = 10; walk <= 60; walk++) {
            gotoxy(walk,1);
            cout<<names[random_pick+count];
            gotoxy(1, 2);
            cout << "_________________________________________________________________________";
            gotoxy(1, 9);
            cout << "_________________________________________________________________________";
            gotoxy(walk, 5);
            cout << " [T]\n";
            if (walk % 2 == 0) {
                gotoxy(walk, 6);
                cout << " \\|/\n";
            } else {
                gotoxy(walk, 6);
                cout << " /|\\\n";
            }
            gotoxy(walk, 7);
            cout << "  |";
            if (walk % 2 == 0) {
                gotoxy(walk, 8);
                cout << " / \\";
            } else {
                gotoxy(walk, 8);
                cout << "  |";
            }
            Sleep(20);
            system("cls");
        }
        cout << "pasajero ha abordado!!";
        Sleep(600);
        system("cls");
        count++;
    }
}
void bienvenida(){
    cout<<" ______     ______     ______     ______     ______   __  __     ______     ______     ______   ______    \n"
          "/\\  __ \\   /\\  ___\\   /\\  == \\   /\\  __ \\   /\\  == \\ /\\ \\/\\ \\   /\\  ___\\   /\\  == \\   /\\__  _\\ /\\  __ \\   \n"
          "\\ \\  __ \\  \\ \\  __\\   \\ \\  __<   \\ \\ \\/\\ \\  \\ \\  _-/ \\ \\ \\_\\ \\  \\ \\  __\\   \\ \\  __<   \\/_/\\ \\/ \\ \\ \\/\\ \\  \n"
          " \\ \\_\\ \\_\\  \\ \\_____\\  \\ \\_\\ \\_\\  \\ \\_____\\  \\ \\_\\    \\ \\_____\\  \\ \\_____\\  \\ \\_\\ \\_\\    \\ \\_\\  \\ \\_____\\ \n"
          "  \\/_/\\/_/   \\/_____/   \\/_/ /_/   \\/_____/   \\/_/     \\/_____/   \\/_____/   \\/_/ /_/     \\/_/   \\/_____/ \n";
}
void compratickets() {
        for (int walk = 10; walk <= 60; walk++) {
            gotoxy(80, 2);
            cout << "____________________________________________\n";
            gotoxy(80, 3);
            cout << "|____________________________________________|\n";
            gotoxy(80, 4);
            cout << "|__||  ||___||  |_|___|___|__|  ||___||  ||__|\n";
            gotoxy(80, 5);
            cout << "||__|  |__|__|  |___|___|___||  |__|__|  |__||\n";
            gotoxy(80, 6);
            cout << "|__||  ||___||  |_|___|___|__|  ||___||  ||__|\n";
            gotoxy(80, 7);
            cout << "||__|  |__|__|  |    || |    |  |__|__|  |__||\n";
            gotoxy(80, 8);
            cout << "|__||  ||___||  |    || |    |  ||___||  ||__|\n";
            gotoxy(80, 9);
            cout << "||__|  |__|__|  |    || |    |  |__|__|  |__||\n";
            gotoxy(80, 10);
            cout << "|__||  ||___||  | ScS|| |    |  ||___||  ||__|\n";
            gotoxy(80, 11);
            cout << "||__|  |__|__|  |    || |    |  |__|__|  |__||\n";
            gotoxy(80, 12);
            cout << "|__||  ||___||  |   O|| |O   |  ||___||  ||__|\n";
            gotoxy(80, 13);
            cout << "||__|  |__|__|  |    || |    |  |__|__|  |__||\n";
            gotoxy(80, 14);
            cout << "|__||  ||___||  |    || |    |  ||___||  ||__|\n";
            gotoxy(80, 15);
            cout << "||__|  |__|__|__|____||_|____|  |__|__|  |__||\n";
            gotoxy(80, 16);
            cout << "|LLL|  |LLLLL|______________||  |LLLLL|  |LLL|\n";
            gotoxy(80, 17);
            cout << "|LLL|  |LLL|______________|  |  |LLLLL|  |LLL|\n";
            gotoxy(80, 18);
            cout << "|LLL|__|L|______________|____|__|LLLLL|__|LLL|";
            gotoxy(80, 19);
            cout << "_________________________________________________________________________";
            gotoxy(80, 20);
            cout << "_________________________________________________________________________";

            gotoxy(walk, 17);
            cout << " [T]\n";
            if (walk % 2 == 0) {
                gotoxy(walk, 18);
                cout << " \\|/\n";
            } else {
                gotoxy(walk, 18);
                cout << " /|\\\n";
            }
            gotoxy(walk, 19);
            cout << "  |";
            if (walk % 2 == 0) {
                gotoxy(walk, 20);
                cout << " / \\";
            } else {
                gotoxy(walk, 20);
                cout << "  |";
            }
            Sleep(20);
            system("cls");

        }


}
void tickets_purchase(){
    cout<<"cuantos pasajeros entraran?";
    cin>>pass;
    Pila pila1;
    while(count<pass){
        srand (time(NULL));
        random_pick = rand() % 20+1;
        pila1.insertar(names[random_pick]);
        cout<<"folio:"<<random_pick<<endl;
        cout<<"pasajero"<<names[random_pick]<<endl;
        pila1.imprimir();

        system("pause");
        //stickwalk();
        count++;
    }
    system("cls");
}

void seat_assign(){
    cout<<"[1] [2]\n"
          "[3] [4]\n"
          "[5] [6]\n"
          "[7] [8]\n"
          "[9] [10]\n"
          "[11] [12]\n"
          "[13] [14]\n"
          "[15] [16]\n"
          "[17] [18]\n"
          "[19] [20]";

system("pause");
}

#endif //AEROPUERTO_ANIMACIONES_H
