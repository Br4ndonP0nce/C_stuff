#ifndef FINALMARIAELENA_SERIES_H
#define FINALMARIAELENA_SERIES_H
const double EPSILON =0;
#include <cmath>
#include <iostream>
int count=1;
using namespace std;
double func(double x)

{
    return (x*x)-(5*x)+4;//ecuacion original
}
double derivFunc(double x)
{
    return (2*x)-5;//derivada de la ecuacion
}
void newtonRaphson(double x)
{
    double h = func(x) / derivFunc(x);
    double xi;
    double ea;
    double funcion;
    cout<<endl<<"Ecuacion: X^2-5X+4=0"<<endl<<endl;
    cout<<"valor estimado = 6\n"<<endl;
    cout<<" No.";
    cout<<"       Xi";
    cout<<"\t   Xi+1";
    cout <<"\t  Error aproximado";
    cout<<"      F(x)"<<endl;
    cout<<"__________________________________________________________"<<endl;
    while (abs(h) > EPSILON)
    {
        h = func(x)/derivFunc(x);
        xi=x;
        x = x - h;
        ea=((x-xi)/x)*-100;
        funcion=func(xi);
        if(ea>0){
            printf(" %d | %.5f",count,xi );
            printf("\t%f|",x ); //<< "\t"<<"| "<< x<<"|";
            printf("   %f",ea );
            printf("\t      %f",funcion );

            count++;
            cout<<"\n";
        }
    }
    cout<<endl<<"la raiz es "<<x<<endl;

    system("\npause");
    system("cls");
}
int triggernraph(){
    double x0 = 6; //valor estimado
    //xi(x0);
    newtonRaphson(x0);

    return 0;
}
#endif //FINALMARIAELENA_SERIES_H
