#include <iostream>
#include <cmath>
using namespace std;
double P1,P2,P3,L0,L1,L2,L3;//T[4]{30,60,90,120},V[4]{0.6,1.4,3.5,5.8}
const double X=95,x0=30,x1=60,x2=90,x3=120,fx0=12.6,fx1=15.9,fx2=18.53,fx3=21.6;

double Lineal(double);
double cuadratica(double);
double cubica(double);
void tabla();
int main() {
    tabla();
    cout<<"Polinomio de primer orden: x= \n";
    Lineal(X);
    cout<<"\nPolinomio de 2do orden x= \n";
    cuadratica(X);
    cout<<"\nPolinomio de 3er orden x= \n";
    cubica(X);
    system("pause");

}
void tabla(){
    cout<<"Velocidad (km) |0.6| 1.4 | 3.5 | 5.8 |\n"
          "Tiempo(seg)| 30 | 60  | 90  | 120 |\n";


}
double Lineal(double){
    L0=(X-x1)/(x0-x1);
    L1=(X-x0)/(x1-x0);
    P1=(L0*fx0)+(L1*fx1);
    cout<<P1;

}
double cuadratica(double){
    L0=((X-x1)*(X-x2))/((x0-x1)*(x0-x2));
    L1=((X-x0)*(X-x2))/((x1-x0)*(x1-x2));
    L2=((X-x0)*(X-x1))/((x2-x0)*(x2-x1));
    P2=(L0*fx0)+(L1*fx1)+(L2*fx2);
    cout<<P2<<endl;
}
double cubica(double){
L0=((X-x1)*(X-x2)*(X-x3))/((x0-x1)*(x0-x2)*(x0-x3));
L1=((X-x0)*(X-x2)*(X-x3))/((x1-x0)*(x1-x2)*(x1-x3));
L2=((X-x0)*(X-x1)*(X-x3))/((x2-x0)*(x2-x1)*(x2-x3));
L3=((X-x0)*(X-x1)*(X-x2))/((x3-x0)*(x3-x1)*(x3-x2));
P3=(L0*fx0)+(L1*fx1)+(L2*fx2)+(L3*fx3);
cout<<P3<<endl;

}
