#ifndef FINALMARIAELENA_PUNTOFIJO_H
#define FINALMARIAELENA_PUNTOFIJO_H
#include <iostream>
#include <cstdio>
#include <conio.h>
#include<math.h>
using namespace std;
const int ARR_SIZE =50;
double usr1=0,usr2=0,iterX[ARR_SIZE],iterY[ARR_SIZE],aux1=0,aux2=0;
int countp =1,counts=0;
//el vector empieza en 0,0 para este sistema de ecuaciones no lineales
double X(double x,double y){//ecuacion para x
    double g= (pow(x,3)+pow(y,2)+8)/10;
    return g;
}
double Y(double x,double y){//ecuacion para y
    double g2= (x*pow(y,3)+x+8)/10;
    return g2;
}
void triggerpfijo(){
//    cout<<"introduzca el valor inicial para x en su vector";
//    cin>>usr1;
    usr1=4;
//    cout<<"intriduzca el valor inicial para y  en su vector";
//    cin>>usr2;
    usr2=5;
    iterX[0]=0;
    iterY[0]=0;
    system("cls");
    cout<<"Iteracion:";
    cout<<"\tXi ";
    cout<<"\t\tYi"<<endl;
    while(counts<=19){
        cout<<"  "<<countp<<"            ("<<X(usr1,usr2)<<")";
        cout<<"\t\t("<<Y(usr1,usr2)<<")"<<endl;
        aux1=X(usr1,usr2);
        iterX[countp]=aux1;
        aux2=Y(usr1,usr2);
        iterY[countp]=aux2;
        usr1=X(iterX[countp-1],iterY[countp-1]);
        usr2=Y(iterX[countp-1],iterY[countp-1]);

        counts++;
    }
    cout<<"\nvector solucion"<<iterX[countp]<<","<<iterY[countp]<<endl;
    counts=0;
    system("\npause");
    system("cls");
}
#endif //FINALMARIAELENA_PUNTOFIJO_H
