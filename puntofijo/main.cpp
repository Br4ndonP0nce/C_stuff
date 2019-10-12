#include <iostream>
#include <cstdio>
#include <conio.h>
#include<math.h>
using namespace std;
const int ARR_SIZE =50;
double usr1=0,usr2=0,iterX[ARR_SIZE],iterY[ARR_SIZE],aux1=0,aux2=0;
int count =1;
//el vector empieza en 0,0 para este sistema de ecuaciones no lineales
double X(double x,double y){//ecuacion para x
    double g= (pow(x,2)+pow(y,2)+8)/10;
        return g;
}
double Y(double x,double y){//ecuacion para y
    double g2= (x*pow(y,2)+x+8)/10;
    return g2;
}
int main(){
cout<<"introduzca el valor inicial para x en su vector";
cin>>usr1;
cout<<"intriduzca el valor inicial para y  en su vector";
cin>>usr2;
iterX[0]=0;
iterY[0]=0;
cout<<"Iteracion:   "<<"Xi "<<"Yi"<<endl;
while(count<=15){
cout<<count<<"          ("<<X(usr1,usr2)<<","<<Y(usr1,usr2)<<")"<<endl;
aux1=X(usr1,usr2);
iterX[count]=aux1;
aux2=Y(usr1,usr2);
iterY[count]=aux2;
usr1=X(iterX[count-1],iterY[count-1]);
usr2=Y(iterX[count-1],iterY[count-1]);

    count++;
}
    cout<<"vector solucion"<<iterX[count]<<","<<iterY[count]<<endl;
}
