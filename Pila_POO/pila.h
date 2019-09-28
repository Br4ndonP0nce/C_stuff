#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#include<windows.h>
class pila{
    private:
        int datos[10];
        int tope;
    public:
        pila();
        void push(int);
        void pop();
        int vacia();
        int llena();
        void mostrarTope();
        void mostrarPila();
        void gotoxy(int,int);
};

pila::pila(){
    tope = -1;
}

void pila::push(int num){
    if (llena() == 0){
        tope++;
        datos[tope] = num;

    }
}

void pila::pop(){
    if (vacia() == 0){
        datos[tope]=0;
        tope--;
    }
}

int pila::vacia(){
    if (tope == -1){
        std::cout << "La pila esta vacia,Insuficiencia de datos" << std::endl;
        return 1;
    }
    else{
        return 0;
    }
}

int pila::llena(){
    if (tope == 9){
        std::cout << "La pila esta llena,Desbordamiento de datos" << std::endl;
        return 1;
    }
    else{
        return 0;
    }
}

void pila::mostrarTope(){
    if (vacia() == 0){
        std::cout << "El Tope de la Pila es: " << datos[tope] << std::endl;
    }
}

void pila::mostrarPila(){
    if (vacia() == 0){

        gotoxy(53,1); printf("%c%c%c%c%c%c%c%c%c         ",201,205,205,205,205,205,205,205,187);
        for (int i=tope;i>=0;i--){

                gotoxy(53,i+2); printf("%c",186);
                system("COLOR 4E");gotoxy(48,i+2);std::cout << "-- >";
                gotoxy(54,i+2);std::cout << datos[i]; gotoxy(61,i+2);printf("%c",186);
                gotoxy(53,14);printf("%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,188);
                system("COLOR 3E");
                system("COLOR 0F");

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
#endif // PILA_H_INCLUDED
