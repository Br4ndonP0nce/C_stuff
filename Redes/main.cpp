#include <iostream>
#include <fstream>
#include <string>
#include<stdio.h>
#include "bit_func.h"
#include <stdlib.h>
#include <stdio.h>
const int IPV4 = 8,ARP=14,RARP=16,IPV6=34525,arr_size=50;

using namespace std;
int s_type=0,count=0,prototype =0;
unsigned char dat[arr_size],ipv4[arr_size],bin[arr_size],bin_de1[8],bin_de2[8],bin_de3[8],bin_de4[8];



int main() {


    unsigned char line;
    ifstream infile("ethernet_ipv4_icmp_ping.bin",ios::in | ios::binary);
    streampos beg,end;
    if(infile.is_open()) { //runs only when infile instance in ouorcase our bin file is open
        for(int i=0;i<=100;i++){
            infile >> dat[i];
            //printf("%02X",dat[i]);    //if needed prints entire bin file content
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
                cout<<"///////////////////////////////\n";

                 cout<<"\nversion :";
                count =0;
                for(int version=0;version<1;version++){
                    nonprintbincharpad(ipv4[version]);
                    count++;
                }
                cout<<"4\n";
                for(int a=0;a<4;a++){
                    cout<<icmpv4[a];
                }
                cout<<"\n";
                cout<<"\ntamanio:\n";
                for(int a=4;a<10;a++){
                    cout<<icmpv4[a];
                }
                cout<<"160 bits\n";
                cout<<"\n\nServicio :";
                for(int servicio=1;servicio<2;servicio++){
                    nonprintbincharpad(ipv4[servicio]);
                }
                for(int s=0;s<3;s++){
                    cout<<icmpv4[s];
                }
                cout<<"\nprioritario";
                cout<<"\n";
                for(int p=3;p<8;p++){
                    cout<<icmpv4[p];
                }
                cout<<"\nretardo:bajo\n";
                cout<<"rendimiento: bajo\n";
                cout<<"fiabilidad : alta\n";
                cout<<"\n";
                cout<<"\n";
                count=0;

                cout<<"logitud total: \n";
                for(int lenght=2;lenght<4;lenght++){
                    nonprintbincharpad(ipv4[lenght]);
                    printf("%i",ipv4[lenght]);
                }

                cout<<" bytes\n";
                cout<<"\nidentificador: \n";

                for(int id=4;id<=5;id++) {
                    printbincharpad(ipv4[id]);

                }
                cout<<"\n";
                cout<<"flags:\n";
                for(int flag=6;flag<7;flag++){
                    nonprintbincharpad(ipv4[flag]);
                }
                for(int act_flag=0;act_flag<3;act_flag++){
                    cout<<icmpv4[act_flag];

                    switch(icmpv4[act_flag]){
                        case 0:
                            cout<<"ultimo fragmento";
                            break;
                        case 1:
                            cout<<"no divisible";
                    }
                }
                cout<<"\n";
                cout<<"posicion fragmento:\n";
                for(int frag=7;frag<8;frag++){
                    printf("%i",ipv4[frag]);
                }
                cout<<"\n";
                for(int ttl=8;ttl<9;ttl++){
                    nonprintbincharpad(ipv4[ttl]);
                    printf("tiempo de vida->%i",ipv4[ttl]);
                }
                cout<<"\n";
                cout<<"protocolo:\n";
                for(int prot=9;prot<10;prot++){
                    nonprintbincharpad(ipv4[prot]);

                    switch(ipv4[prot]) {
                        case 1:
                            cout << "ICMPV4";
                            prototype=1;
                            break;
                        case 2:
                            cout << "IGMP";
                            break;
                    }

                }
                cout<<"\n";
                cout<<"direccion origen :\n";
                for(int ori=11;ori<=14;ori++){
                    nonprintbincharpad(ipv4[ori]);
                    printf("%i.",ipv4[ori]);
                }
                cout<<"\n";
                cout<<"direccion destino :\n";
                for(int dest=15;dest<=18;dest++){
                    nonprintbincharpad(ipv4[dest]);
                    printf("%i.",ipv4[dest]);
                }
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
    else{
        cout<<"el archivo no esta en la carpeta o no existe"<<endl;

        return 0;}
    if(prototype==1){
        cout<<"ICMPV4:\n";
        for(int ic=20;ic<=21;ic++){
            //icmpv4binchar(ipv4[ic]);
            switch(ic){
                case 20:
                    cout<<"type: ";
                    printf("%x", ipv4[ic]);
                    switch(ic[ipv4]){
                        case 0:
                            printf("\nna");
                            break;

                        case 8:
                            printf("\necho");
                                break;
                    }


                    break;
                case 21:
                    cout<<"code: ";
                    printf("%x", ipv4[ic]);
                    switch (ipv4[ic]){
                        case 0:
                            printf("\nnot reachable");
                            break;

                    }
            }
            cout<<"\n";
        }
        cout<<"checksum:";
        printf("%d",ipv4[22]+ipv4[23]);
        cout<<"\n";
        /*for(int trans=0;trans<8;trans++)
           bin_de1[trans]=translate[trans];
           cout<<bin_de1[trans];

        }
        cout<<"\n";
        for(int trans1=8;trans1<16;trans1++){
            bin_de2[trans1]=translate[trans1];
            cout<<bin_de2[trans1];
           // cout<<"\n";
        }
        cout<<"\n";
        for(int trans2=16;trans2<24;trans2++){
            bin_de2[trans2]=translate[trans2];
            cout<<bin_de2[trans2];
            //cout<<"\n";
        }
        cout<<"\n";
        for(int trans3=24;trans3<32;trans3++){
            bin_de3[trans3]=translate[trans3];
            cout<<bin_de3[trans3];
            //cout<<"\n";
        }
        cout<<"\n";
        */
        system("pause");

    }
}
