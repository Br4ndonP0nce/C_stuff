#include <iostream>
#include <cmath>
#include<cstdlib>
using namespace std;
double fact(int c)
{
    int factorial=1;
    for ( int i = 1; i <= c; i++ )
    {
        factorial *=i;
    }
    return factorial;

}

double taylor(double x, int n)
{
    double approx;
    double sum;
    double value=0;
    for (int i=1; i<=n; i++)
    {
        sum=((pow(x,i))/fact(i));
        value+=sum;
    }
    approx = 1+value;
    return approx;
}
int main(){
cout<<taylor(2,3);
}