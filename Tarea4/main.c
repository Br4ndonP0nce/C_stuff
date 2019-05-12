#include <stdio.h>
int main() {
    char a;
    printf("inserte su caracter\n");
    scanf("%c",&a);
    system("cls");
    printf("su caracter %c, tiene el valor en ASCII: %d\nEn octal es %o\nY en hexadecimal es %x\n",a,a,a,a);

    system("pause");
    return 0;
}

