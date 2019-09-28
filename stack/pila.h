#ifndef STACK_PILA_H
#define STACK_PILA_H
#include <iostream>
using namespace std;
#include <windows.h>
class pila{
private:
    int datos[10];
    int tope;
public:
    pila();
    void push(int);
    void pop();
    int empty();
    int full();
    void mostrarTope();
    void mostrarPila();
    void gotoxy(int,int);
};

pila::pila(){
    tope = -1;
}

void pila::push(int num){
    if (full() == 0){
        tope++;
        datos[tope] = num;

    }
}

void pila::pop(){
    if (empty() == 0){
        datos[tope]=0;
        tope--;
    }
}

int pila::empty(){
    if (tope == -1){
        std::cout << "Pila empty,no hay datos" << std::endl;
        return 1;
    }
    else{
        return 0;
    }
}

int pila::full(){
    if (tope == 9){
        std::cout << "Pila full, demasiados datos" << std::endl;
        return 1;
    }
    else{
        return 0;
    }
}

void pila::mostrarTope(){
    if (empty() == 0){
        std::cout << "Tope es :" << datos[tope] << std::endl;
    }
}

void pila::mostrarPila(){
    if (empty() == 0){

        gotoxy(53,1); printf("%c%c%c%c%c%c%c%c%c         ",201,196,196,196,196,196,196,196,187);
        for (int i=tope;i>=0;i--){

            gotoxy(53,i+2); printf("%c",195);
            gotoxy(48,i+2);std::cout << "->";
            gotoxy(54,i+2);std::cout <<"\t "<< datos[i]; gotoxy(61,i+2);printf("%c",195);
            gotoxy(53,14);printf("%c%c%c%c%c%c%c%c%c",201,196,196,196,196,196,196,196,187);

        }
    }
}

void pila:: gotoxy(int x,int y){
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y= y;
    SetConsoleCursorPosition(hcon,dwPos);
}


#endif //STACK_PILA_H
