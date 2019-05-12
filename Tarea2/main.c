#include <stdio.h>
#include <math.h>

int main() {
    int a;
    int b;

    printf("ingrese su primer numero: ");
    scanf("%d", &a);
    printf("inserte su segundo numero:");
    scanf("%d", &b);
    printf("%d + %d = %d\n%d - %d = %d\n"
           "%d * %d = %d\n%d/%d = %f "
           "y su residuo es %d\n%d ^ %d = %f\n"
            ,a,b,a+b,a,b, a-b, a, b, a*b,a,b,a/b,a%b,a,b,pow(a,b));
    system("pause");


    return 0;
}