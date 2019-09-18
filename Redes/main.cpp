#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include<stdio.h>
#include <conio.h>
const int IPV4 = 8,ARP=14,RARP=16,IPV6=34525,arr_size=50;

using namespace std;
int s_type=0,count=0;
unsigned char dat[arr_size],ipv4[arr_size],icmpv4[arr_size];
char bin[arr_size];
void printbincharpad(char c){
    for (int i = 7; i >= 0; --i)
    {
     icmpv4[count]=putchar( (c & (1 << i)) ? '1' : '0' );
        count++;
    }
    putchar('\n');
}

int main() {


    unsigned char line;
    ifstream infile("ethernet_ipv4_icmp_ping.bin",ios::in | ios::binary);
    streampos beg,end;
    if(infile.is_open()) { //runs only when infile instance in ouorcase our bin file is open
        for(int i=0;i<=100;i++){
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
        switch(s_type){
            case IPV4://=8
                cout<<": IPV4\n";

                for(int save=14;save<=50;save++) {
                    ipv4[count] = dat[save];
                    count++;
                }

                for(int test=0;test<=50;test++){
                    printf("%02x",ipv4[test]);//prints ipv4 array to check
                }

                cout<<"\nversion y tamanio de cabecera: ";
                count =0;
                for(int version=0;version<1;version++){
                    printbincharpad(ipv4[version]);

                    count++;
                }

                cout<<"\nServicio :";
                for(int servicio=1;servicio<=1;servicio++){
                    printf("%02x ",ipv4[servicio]);
                }

                cout<<"\n";
                cout<<"\n";
                count=0;
                cout<<"tamaño de la cabecera: ";
                for(int lenght=2;lenght<=3;lenght++){
                    printf("%i",ipv4[lenght]);
                }
                cout<<" bytes";
                cout<<"\n";

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
