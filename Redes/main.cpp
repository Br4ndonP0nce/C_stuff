#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include<stdio.h>
#include <conio.h>
const int IPV4 = 8,ARP=14,RARP=16,IPV6=34525;

using namespace std;

int main() {
    int s_type=0;
    char dat[50];
    unsigned char line;
    ifstream infile("ethernet_ipv4_icmp_ping.bin",ios::in | ios::binary);
    streampos beg,end;
    if(infile.is_open()) { //runs only when infile instance in ouorcase our bin file is open
        for(int i=0;i<=30;i++){
            infile >> dat[i];
            printf("%02X",dat[i]);    //if needed prints entire bin file content
        }

        cout<<"\nHemos terminado de leer los paquetes"<<endl;
        system("pause");
        cout<<"Direccion origen:"<<endl;
        for(int r=0;r<6;r++){
            printf("%02X:", dat[r]);//runs first 6 bytes to show origin
        }

        cout<<"\nDireccion destino: "<<endl;
        for(int a =6;a<12;a++){
            printf("%02X:",dat[a]); //runs next 6 bytes to show destination
        }
        cout<<"\nTipo:\n";

        for(int type=12;type<14;type++){//runs 2 more bytes to show type
            printf("%02x",dat[type]);
            s_type+=dat[type];//applying a sum to a variable that will allows to compare it with the other types


        }
        cout<<"\n";
        switch(s_type){
            case IPV4://=8
                cout<<"IPV4\n";
                for(int protocol=13;protocol<16;protocol++){
                    printf("%b",dat[protocol]);



                }


                break;
            case ARP:
                cout<<"ARP\n";//=14
                break;
            case RARP:
                cout<<"RARP\n";//=16
                break;
            case IPV6:
                cout<<"IPV6\n"<<endl;//=34525
                break;
            default:
                cout<<"tipo no reconocible"<<endl;
                break;

        }
        system("\npause");
         }
    else
        cout<<"el archivo no esta en la carpeta o no existe"<<endl;
   return 0;
}
