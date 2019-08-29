#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    char dat[50];
    unsigned char line;
    ifstream infile("ethernet_1.bin",ios::in | ios::binary);
    streampos beg,end;
    if(infile.is_open()) {
        for(int i=0;i<=50;i++){
            infile >> dat[i];
            cout<<dat[i]<<"\n";
        }
    }
    else
        cout<<"el archivo no esta en la carpeta o no existe"<<endl;
   return 0;
}
