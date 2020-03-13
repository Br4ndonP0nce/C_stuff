#include <iostream>
#include <fstream>
#include <string>
#include<stdio.h>
#include "bin_reader.h"
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
const int IPV4 = 8,ARP=14,RARP=16,arr_size=70,IPV6=355;
using namespace std;
int s_type=0,count=0,prototype =0,a_prot=0,count1=0, c = 0,binsum=0,n=0,icmpv6prot,udpflag=0,tcpflag=0;
unsigned char dat[arr_size],ipv4[arr_size],arp_rarp[arr_size],ipv6[arr_size],serv[arr_size];
int main() {


    unsigned char line;
    ifstream infile("ethernet_ipv6_nd.bin",ios::in|ios::binary);
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
            //printf("%02x",dat[type]);
            s_type+=dat[type];//applying a sum to a variable that will allows to compare it with the other types

            if(s_type==355){
                s_type=355;
            }
        }
        //cout<<s_type;
        switch(s_type) {
            case IPV4://=8
                cout << ": IPV4\n";
                for (int save = 14; save <= 50; save++) {
                    ipv4[count1] = dat[save];
                    count1++;
                }
                cout << "///////////////////////////////\n";

                cout << "\nversion :";
                count1 = 0;
                for (int version = 0; version < 1; version++) {
                    nonprintbincharpad(ipv4[version]);
                    count1++;
                }
                cout << "4\n";
                for (int a = 0; a < 10; a++) {
                    cout << icmpv4[a];
                }
                cout << "\n";
                cout << "\ntamanio:\n";
                for (int a = 4; a < 10; a++) {
                    cout << icmpv4[a];
                }
                cout << "160 bits\n";
                cout << "\n\nServicio :";
                for (int servicio = 1; servicio < 2; servicio++) {
                    nonprintbincharpad(ipv4[servicio]);
                }
                for (int s = 0; s < 3; s++) {
                    cout << icmpv4[s];
                }
                cout << "\nprioritario";
                cout << "\n";
                for (int p = 3; p < 8; p++) {
                    cout << icmpv4[p];
                }
                cout << "\nretardo:bajo\n";
                cout << "rendimiento: bajo\n";
                cout << "fiabilidad : alta\n";
                cout << "\n";
                cout << "\n";
                count1 = 0;

                cout << "longitud total: \n";
                for (int lenght = 2; lenght < 4; lenght++) {
                    nonprintbincharpad(ipv4[lenght]);
                    printf("%i", ipv4[lenght]);
                }

                cout << " bytes\n";
                cout << "\nidentificador: \n";

                for (int id = 4; id <= 5; id++) {
                    printbincharpad(ipv4[id]);

                }
                cout << "\n";
                cout << "flags:\n";
                for (int flag = 6; flag < 7; flag++) {
                    nonprintbincharpad(ipv4[flag]);
                }
                for (int act_flag = 0; act_flag < 3; act_flag++) {
                    cout << icmpv4[act_flag];
                    switch (icmpv4[act_flag]) {
                        case 0:
                            cout << "ultimo fragmento";
                            break;
                        case 1:
                            cout << "no divisible";
                    }
                }
                cout << "\n";
                cout << "posicion fragmento:\n";
                for (int frag = 7; frag < 8; frag++) {
                    printf("%i", ipv4[frag]);
                }
                cout << "\n";
                for (int ttl = 8; ttl < 9; ttl++) {
                    nonprintbincharpad(ipv4[ttl]);
                    printf("tiempo de vida->%i", ipv4[ttl]);
                }
                cout << "\n";
                cout << "protocolo:\n";
                for (int prot = 9; prot < 10; prot++) {
                    nonprintbincharpad(ipv4[prot]);
                    switch (ipv4[prot]) {
                        case 1:
                            cout << "ICMPV4";
                            prototype = 1;
                            break;
                        case 2:
                            cout << "IGMP";
                            break;
                        case 3:
                            cout<<"GGP";
                            break;
                        case 4:
                            cout<<"IPV4";
                            break;
                        case 5:
                            cout<<"ST";
                            break;
                        case 6:
                            cout<<"TCP";
                            tcpflag=1;
                            break;
                        case 17:
                            cout<<"UDP";
                            udpflag=1;

                            break;
                        default:
                            cout<<"non recognizable protocol";
                            break;
                    }
                }
                cout << "\n";
                cout << "direccion origen :\n";
                for (int ori = 11; ori <= 14; ori++) {
                    nonprintbincharpad(ipv4[ori]);
                    printf("%i.", ipv4[ori]);
                }
                cout << "\n";
                cout << "direccion destino :\n";
                for (int dest = 15; dest <= 18; dest++) {
                    nonprintbincharpad(ipv4[dest]);
                    printf("%i.", ipv4[dest]);
                }
                cout << "\n";
                break;
            case ARP:
                count1 = 0;
                cout << "\nARP\n";//=14
                for (int save = 14; save <= 50; save++) {
                    arp_rarp[count1] = dat[save];
                    count1++;
                }
                /*
                for(int y=0;y<arr_size;y++){
                    //printf("%02x",arp_rarp[y]);
                    printbincharpad(arp_rarp[y]);
                }*///uncomment to print whole bin file after type
                for (int hardware_t = 0; hardware_t < 1; hardware_t++) {
                    printf("%02x ", arp_rarp[hardware_t]);
                    cout << "tipo de hardware: ";
                    switch (arp_rarp[hardware_t]) {
                        case 0:
                            cout << "Reserved";
                            break;
                        case 1:
                            cout << "Ethernet";
                            break;
                        case 2:
                            cout << "Experimental Ethernet";
                            break;
                        case 3:
                            cout << "Amateur Radio";
                            break;
                        case 4:
                            cout << "Proteon ProNET Token Ring";
                            break;
                        case 5:
                            cout << "Chaos";
                            break;
                        case 6:
                            cout << "IEEE 802";
                            break;
                        case 7:
                            cout << "ARCNET";
                            break;
                        case 8:
                            cout << "Hyperchannel";
                            break;
                        case 9:
                            cout << "Lanstar";
                            break;
                        case 10:
                            cout << "Autonet Short Address ";
                            break;
                        case 11:
                            cout << "LocalTalk";
                            break;
                        case 12:
                            cout << "LocalNet";
                            break;
                        case 13:
                            cout << "UltraLink";
                            break;
                        case 14:
                            cout << "SMDS";
                            break;
                        case 15:
                            cout << "Frame Relay";
                            break;
                        case 16:
                            cout << "Asynchronous Transmision Mode";
                            break;
                        case 17:
                            cout << "HDLC";
                            break;
                        case 18:
                            cout << "Fibre Channel";
                            break;
                        case 19:
                            cout << "Asynchronous Transmission Mode";
                            break;
                        case 20:
                            cout << "Serial Line";
                            break;
                        case 21:
                            cout << "Asynchronous Transmission Mode";
                            break;
                        case 22:
                            cout << "MIL-STD-188-220";
                            break;
                        case 23:
                            cout << "Metricon";
                            break;
                        case 24:
                            cout << "IEE 1394.1995";
                            break;
                        case 25:
                            cout << "MAPOS";
                            break;
                        case 26:
                            cout << "TwinAxial";
                            break;
                        case 27:
                            cout << "EUI-64";
                            break;
                        case 28:
                            cout << "HIPARP";
                            break;
                        case 29:
                            cout << "IP and ARP";
                            break;
                        case 30:
                            cout << "ARPsec";
                            break;
                        case 31:
                            cout << "IPsec Tunnel";
                            break;
                    }
                    cout << "\n";
                }
                for (int prot_type = 2; prot_type <= 3; prot_type++) {
                    a_prot += arp_rarp[prot_type];
                }
                cout << "Tipo de Protocolo:\n";
                switch (a_prot) {
                    case 8:
                        cout << " IPv4";
                        break;
                    case 14:
                        cout << " ARP";
                        break;
                    case 16:
                        cout << " RARP";
                        break;
                    case 34525:
                        cout << " IPv6";
                        break;
                    default:
                        cout << "not recognizable";

                }
                cout << "\n";
                cout << "Longitud de direccion hardware";
                for (int l_hardware = 4; l_hardware <= 4; l_hardware++) {
                    //icmpv4binchar(arp_rarp[l_hardware]); //prints binary value for address
                    printf("\n%d", arp_rarp[l_hardware]);
                }
                cout << " bytes";
                cout << "\n";
                cout << "Longitud de direccion de protocolo";
                for (int l_hardware = 5; l_hardware <= 5; l_hardware++) {
                    //icmpv4binchar(arp_rarp[l_hardware]); //prints binary value for address
                    printf(" \n%d", arp_rarp[l_hardware]);
                }
                cout << " bytes";
                cout << "\n";
                for (int op_code = 6; op_code <= 7; op_code++) {
                    //icmpv4binchar(arp_rarp[op_code]);
                    printf(" \n%d", arp_rarp[op_code]);
                    switch (arp_rarp[op_code]) {
                        case 1:
                            cout << " Solicititud ARP";
                            break;
                        case 2:
                            cout << " Respuesta ARP";
                            break;
                        case 3:
                            cout << " Solicitud RARP";
                            break;
                        case 4:
                            cout << "Respuesta RARP";
                            break;
                    }
                    cout << "\n";
                }
                cout << "direccion MAC emisor : ";
                for (int h_address = 8; h_address <= 13; h_address++) {
                    printf("%02x:", arp_rarp[h_address]);
                }
                cout << "\n";
                cout << "direccion IP emisor: ";
                for (int er_address = 14; er_address <= 17; er_address++) {
                    printf("%d.", arp_rarp[er_address]);
                }
                cout << "\n";
                cout << "direccion MAC receptor : ";
                for (int h_address = 18; h_address <= 23; h_address++) {
                    printf("%02x:", arp_rarp[h_address]);
                }
                cout << "\n";
                cout << "direccion IP receptor: ";
                for (int er_address = 24; er_address <= 27; er_address++) {
                    printf("%d.", arp_rarp[er_address]);
                }
                break;
            case RARP:
                cout << "RARP\n";//=16
                count1 = 0;
                cout << "\nARP\n";//=14
                for (int save = 14; save <= 50; save++) {
                    arp_rarp[count1] = dat[save];
                    count1++;
                }
                /*
                for(int y=0;y<arr_size;y++){
                    //printf("%02x",arp_rarp[y]);
                    printbincharpad(arp_rarp[y]);
                }*///uncomment to print whole bin file after type
                for (int hardware_t = 0; hardware_t <= 1; hardware_t++) {
                    printf("%02x ", arp_rarp[hardware_t]);
                    switch (arp_rarp[hardware_t]) {
                        case 0:
                            cout << "Reserved";
                            break;
                        case 1:
                            cout << "Ethernet";
                            break;
                        case 2:
                            cout << "Experimental Ethernet";
                            break;
                        case 3:
                            cout << "Amateur Radio";
                            break;
                        case 4:
                            cout << "Proteon ProNET Token Ring";
                            break;
                        case 5:
                            cout << "Chaos";
                            break;
                        case 6:
                            cout << "IEEE 802";
                            break;
                        case 7:
                            cout << "ARCNET";
                            break;
                        case 8:
                            cout << "Hyperchannel";
                            break;
                        case 9:
                            cout << "Lanstar";
                            break;
                        case 10:
                            cout << "Autonet Short Address ";
                            break;
                        case 11:
                            cout << "LocalTalk";
                            break;
                        case 12:
                            cout << "LocalNet";
                            break;
                        case 13:
                            cout << "UltraLink";
                            break;
                        case 14:
                            cout << "SMDS";
                            break;
                        case 15:
                            cout << "Frame Relay";
                            break;
                        case 16:
                            cout << "Asynchronous Transmision Mode";
                            break;
                        case 17:
                            cout << "HDLC";
                            break;
                        case 18:
                            cout << "Fibre Channel";
                            break;
                        case 19:
                            cout << "Asynchronous Transmission Mode";
                            break;
                        case 20:
                            cout << "Serial Line";
                            break;
                        case 21:
                            cout << "Asynchronous Transmission Mode";
                            break;
                        case 22:
                            cout << "MIL-STD-188-220";
                            break;
                        case 23:
                            cout << "Metricon";
                            break;
                        case 24:
                            cout << "IEE 1394.1995";
                            break;
                        case 25:
                            cout << "MAPOS";
                            break;
                        case 26:
                            cout << "TwinAxial";
                            break;
                        case 27:
                            cout << "EUI-64";
                            break;
                        case 28:
                            cout << "HIPARP";
                            break;
                        case 29:
                            cout << "IP and ARP";
                            break;
                        case 30:
                            cout << "ARPsec";
                            break;
                        case 31:
                            cout << "IPsec Tunnel";
                            break;
                    }
                    cout << "\n";
                }
                for (int prot_type = 2; prot_type <= 3; prot_type++) {
                    a_prot += arp_rarp[prot_type];
                }
                cout << "Tipo de Protocolo:\n";
                switch (a_prot) {
                    case 8:
                        cout << " IPv4";
                        break;
                    case 14:
                        cout << " ARP";
                        break;
                    case 16:
                        cout << " RARP";
                        break;
                    case 34525:
                        cout << " IPv6";
                        break;
                    default:
                        cout << "not recognizable";

                }
                cout << "\n";
                cout << "Longitud del hardware";
                for (int l_hardware = 4; l_hardware <= 4; l_hardware++) {
                    //icmpv4binchar(arp_rarp[l_hardware]);
                    printf("\n%d", arp_rarp[l_hardware]);
                }
                cout << " bytes";
                cout << "\n";
                cout << "Longitud del protocolo";
                for (int l_hardware = 5; l_hardware <= 5; l_hardware++) {
                    //icmpv4binchar(arp_rarp[l_hardware]);
                    printf(" \n%d", arp_rarp[l_hardware]);
                }
                cout << " bytes";
                cout << "\n";
                for (int op_code = 6; op_code <= 7; op_code++) {
                    //icmpv4binchar(arp_rarp[op_code]);
                    printf(" \n%d", arp_rarp[op_code]);
                    switch (arp_rarp[op_code]) {
                        case 1:
                            cout << " Solicititud ARP";
                            break;
                        case 2:
                            cout << " Respuesta ARP";
                            break;
                        case 3:
                            cout << " Solicitud RARP";
                            break;
                        case 4:
                            cout << "Respuesta RARP";
                            break;
                    }
                    cout << "\n";
                }
                cout << "direccion MAC emisor : ";
                for (int h_address = 8; h_address <= 13; h_address++) {
                    printf("%02x:", arp_rarp[h_address]);
                }
                cout << "\n";
                cout << "direccion IP emisor: ";
                for (int er_address = 14; er_address <= 17; er_address++) {
                    printf("%d.", arp_rarp[er_address]);
                }
                cout << "direccion MAC receptor : ";
                for (int h_address = 18; h_address <= 21; h_address++) {
                    printf("%02x:", arp_rarp[h_address]);
                }
                cout << "\n";
                cout << "direccion IP receptor: ";
                for (int er_address = 22; er_address <= 25; er_address++) {
                    printf("%d.", arp_rarp[er_address]);
                }

                break;

            case IPV6:
                count1 = 0;
                cout << "IPV6\n" << endl;//=had to use a checksum that gives as th result 355
                for (int save = 14; save <= arr_size; save++) {
                    icmpv4[count1] = dat[save];
                    ipv6[count1]=dat[save];
                    count1++;
                }
                for (int i = 0; i < arr_size; i++) {
                    //printf("%02x", icmpv4[i]);
                }
                cout << "\n";
                for (int i = 0; i < 80; i++) {
                    nonprintbincharpad(icmpv4[i]);
                }

                cout << " \nIP version: ";

                for (int ver_bin = 0; ver_bin < 4; ver_bin++) {
                    cout << icmpv4[ver_bin];
                }
                cout << "\n6\n";
                cout << "Clase de trafico: 3\n";

                for (int t_class = 4; t_class < 12; t_class++) {
                    cout << icmpv4[t_class];
                    serv[c] = icmpv4[t_class];
                    c++;
                }
                cout<<"\nServicio: Rutina\n";
                cout<<"Prioridad\n";
                cout<<"Retardo: normal\n";
                cout<<"Rendimiento:alto\n";
                cout<<"Fiabilidad: alta\n";

                cout << "\ntipo de flujo: \n";
                for (int t_flux = 12; t_flux < 32; t_flux++) {
                    cout << icmpv4[t_flux];
                }
                cout<<"\n78128";
                cout << "\nPayload/Tamanio de los datos: \n";
                for (int payload = 48; payload >= 32; --payload) {
                    if(icmpv4[payload]==1){
                        binsum+=pow(2,n);
                    }
                    cout << icmpv4[payload];
                    n++;
                }
                cout<<binsum;
                cout << "\n6168 bytes\nnext header:\n";
                printf("%i\n",ipv6[6]);
                switch(ipv6[6]){
                    case 58:
                        cout<<"icmpv6\n";
                        icmpv6prot=1;

                        break;
                }
                for(int hop=56;hop<64;hop++){
                    //cout<<icmpv4[hop];
                }
                cout<<"tiempo de vida (hops): 48\n";
                cout<<"Direccion origen:";
                for(int origin = 10;origin<16;origin++){
                    printf("%02x:",ipv6[origin]);
                }
                cout<<"\n";
                cout<<"Direccion destino:";
                for(int destination =16;destination<22;destination++){
                    printf("%02x:",ipv6[destination]);
                }
                cout<<"\n";

                break;
            default:
                cout<<"Non recognizable type"<<endl;
                break;
        }
        system("\npause");
    }
    else{
        cout<<"el archivo no esta en la carpeta o no existe"<<endl;
        system("pause");

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
        cout<<"checksum:\n";
        printf("%d",ipv4[22]+ipv4[23]);
        cout<<"\n";
        system("pause");

    }
    if(icmpv6prot==1){
        cout<<"ICMPV6";
        cout<<"\ntype\n";
        for(int t=25;t<26;t++){
            printf("%i",ipv6[t]);
        }
        switch(ipv6[25]){
            case 1:
                printf("\n%i",ipv6[26]);
                switch(ipv6[26]){
                    case 0:
                        cout<<"no existe ruta destino";
                        break;
                    case 1:
                        cout<<"comunicacion con el destino administrativamente porhibida";
                        break;
                    case 2:
                        cout<<"no asignado";
                        break;
                    case 3:
                        cout<<"direccion inalcanzable";
                        break;
                    default:
                        cout<<"non readable";
                }


                break;
            case 2:
                printf("\n%i\n",ipv6[26]);
                switch(ipv6[26]){
                    case 0:
                        cout<<"mensaje de paquete demasiado grande";
                        break;
                    case 1:
                        break;
                    case 2:
                        break;
                    case 3:
                        break;
                    default:
                        cout<<"non readable";
                }
                break;
            case 3:
                printf("\n%i\n",ipv6[26]);
                switch(ipv6[26]){
                    case 0:
                        cout<<"limite de salto excedido";
                        break;
                    case 1:
                        cout<<"tiempo de reemsamble de fragmento excedido";
                        break;
                    case 2:
                        break;
                    case 3:
                        break;
                    default:
                        cout<<"non readable";
                }

                break;
            case 4:
                printf("\n%i\n",ipv6[26]);
                switch(ipv6[26]){
                    case 0:
                        cout<<"campo de encabezado erroneo";
                        break;
                    case 1:
                        cout<<"tipo siguiente desconocido";
                        break;
                    case 2:
                        cout<<"opcion ipv6 desconocida";
                        break;
                    case 3:
                        break;
                    default:
                        cout<<"non readable";
                }

                break;
        }
        cout<<"\nchecksum\n";
        for(int checksum=27;checksum<28;checksum++){
            printf("%i",ipv6[27]+ipv6[28]);
        }
        system("pause");

    }
    if(udpflag==1){
        cout<<"hola udp";
    }
    if(tcpflag==1){
        cout<<"hola tcp"<<endl;
    }
}
