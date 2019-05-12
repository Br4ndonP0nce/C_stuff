#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    printf("el size de su variable int es :%d\n\n",sizeof(a));
    printf("el registro de memoria en donde se encuentra es: %d\n\n",malloc(sizeof(a)));
    printf("el compilador que usas es winGW\n");
    system("pause");
    return 0;
}