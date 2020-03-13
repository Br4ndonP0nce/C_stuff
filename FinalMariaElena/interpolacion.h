#ifndef FINALMARIAELENA_INTERPOLACION_H
#define FINALMARIAELENA_INTERPOLACION_H
#include <cmath>
#include <stdio.h>
const int pi=3.141618;
void triggertay(void)
{
    int iter =0;
    int n=9;
    int   k=0;         // dummy variable k

    float x=.3*pi,
            epsilon=(.5*pow(10,(2-n)));
    float sum=0;
    float term=0;
    sum = term = 1, k = 0;
    while (term >= epsilon || -term >= epsilon)
    {
        k += 2;
        term *= -(x*x)/(k*(k-1));
        sum += term;
        printf("%f\n",term);
        iter++;
    }
    printf("cos(%f) = %f\n", x, sum);
    cout<<"tomo "<<iter<<" iteraciones";
    system("\npause");
    system("cls");
}
#endif //FINALMARIAELENA_INTERPOLACION_H
