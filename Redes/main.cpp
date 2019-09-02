#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include<stdio.h>
#include <conio.h>

using namespace std;

int main() {
    char dat[50];
    unsigned char line;
    ifstream infile("ethernet_1.bin",ios::in | ios::binary);
    streampos beg,end;
    if(infile.is_open()) {
        for(int i=0;i<=30;i++){
            infile >> dat[i];
            //cout<<dat[i]<<"\n";
        }
        cout<<"Hemos terminado de leer los paquetes"<<endl;
        system("pause");
        cout<<"Direccion origen:\n"<<endl;
        for(int r=4;r<6;r++){
            printf("%02X:", dat[r]);
        }
        system("\npause");

        /*for(int type=12;type<30;++type) {

        }
        */
         }
    else
        cout<<"el archivo no esta en la carpeta o no existe"<<endl;
   return 0;
}
