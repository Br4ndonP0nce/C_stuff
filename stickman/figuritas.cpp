#include "figuritas.h"
void figuritas::plane() {
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

void figuritas::gotoxy(int x, int y){
     HANDLE hcon;
     hcon = GetStdHandle(STD_OUTPUT_HANDLE);
     COORD dwPos;
     dwPos.X = x;
     dwPos.Y= y;
     SetConsoleCursorPosition(hcon,dwPos);
}

void figuritas::stickwalk() {
    while (count < passengers) {
        for (int walk = 10; walk <= 60; walk++) {
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

void figuritas::setPassengers(int val) {
    this->passengers=val;
}
int figuritas::getPassengers(){
    return this->passengers;

}