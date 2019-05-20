#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define max 1000
int hex_dec(){
    char hex[17];
    long long decimal;
    int i = 0, val, len;

    decimal = 0;

    printf("Iserte su hexadecimal ");
    fflush(stdin);
    gets(hex);


    len = strlen(hex);
    len--;


    for(i=0; hex[i]!='\0'; i++)
    {

        /* Find the decimal representation of hex[i] */
        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(16, len);
        len--;
    }

    printf("valor hexadecimal = %s\n", hex);
    printf("numero decimal = %lld\n", decimal);

    return 0;

}
int hex_bin(){
    char hex[max];
    long int i = 0;
    printf("inserte un valor en hexadecimal ");
    scanf("%s", hex);
    printf("\n valor en binario: ");
    while (hex[i])
    {

        switch (hex[i])

        {

            case '0':

                printf("0000"); break;

            case '1':

                printf("0001"); break;

            case '2':

                printf("0010"); break;

            case '3':

                printf("0011"); break;

            case '4':

                printf("0100"); break;

            case '5':

                printf("0101"); break;

            case '6':

                printf("0110"); break;

            case '7':

                printf("0111"); break;

            case '8':

                printf("1000"); break;

            case '9':

                printf("1001"); break;

            case 'A':

                printf("1010"); break;

            case 'B':

                printf("1011"); break;

            case 'C':

                printf("1100"); break;

            case 'D':

                printf("1101"); break;

            case 'E':

                printf("1110"); break;

            case 'F':

                printf("1111"); break;

            case 'a':

                printf("1010"); break;

            case 'b':

                printf("1011"); break;

            case 'c':

                printf("1100"); break;

            case 'd':

                printf("1101"); break;

            case 'e':

                printf("1110"); break;

            case 'f':

                printf("1111"); break;

            default:

                printf("\n hexadecimal invalido %c ", hex[i]);

                return 0;

        }

        i++;

    }

    return 0;
}
int binary_hex(){
    long int bval, hexval = 0, i = 1, remainder;
    printf("inserte el numero en binario: ");
    scanf("%ld", &bval);
    int save = bval;
    while (bval != 0)
    {
        remainder = bval % 10;
        hexval = hexval + remainder * i;
        i = i * 2;
        bval = bval / 10;
    }
    printf("Valor binario %i en hexadcimal %lX\n",save, hexval);
    return 0;

}
int binary_dec(){
    int  num, bval, dval = 0, base = 1, rem;
    printf("Ingrese el numero en binario\n");
    scanf("%d", &num);
    bval = num;
    while (num > 0)
    {
        rem = num % 10;
        dval = dval + rem * base;
        num = num / 10 ;
        base = base * 2;
    }
    printf("numero en binario :%d \n", bval);
    printf("numero en decimal = %d \n", dval);
    return 0;
}
int decimal_bin() {
    printf("Deme su numero: ");
    int numero[500];
    int cont = 0;
    long num;
    scanf("%ld", &num);

    while (num > 0) {
        if (num % 2 == 0) {
            numero[cont] = 0;
        }
        if (num % 2 == 1) {
            numero[cont] = 1;
        }
        num = num / 2;
        cont++;
    }
    cont -= 1;
    system("cls");
    printf("numero en binario:\n");
    for (cont; cont >= 0; cont--)
        printf("%i", numero[cont]);
    printf("\n");

}
int dec_hex(){

    long num,cociente, residuo;
    int i, j = 0;
    char hexadecimal[100];
    int hex;
    printf("inserte su valor en decimal");
    scanf("%ld",&num);
    system("cls");
    hex = num;
    cociente = num;

    while (cociente != 0)
    {
        residuo = cociente % 16;
        if (residuo < 10)
            hexadecimal[j++] = 48 + residuo;
        else
            hexadecimal[j++] = 55 + residuo;
        cociente = cociente / 16;
    }
    printf("Numero en decimal %i == ",num);

    for (i = j; i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }
    printf("\n");
    system("pause");
    system("cls");
    return 0;



}
int main() {
    int choice;
    do {
        printf("Que numero va a ingresar?\n1.-Decimal->binario\n2.-decimal->hexadecimal\n3.-binario->decimal\n4.-binario->hexadecimal\n5.-hexadecimal->binario\n6.-hexadecimal->decimal\n0.-salir ");
        scanf("%i",&choice);
        switch(choice){
            case 1:
                system("cls");
                decimal_bin();
                break;
            case 2:
                system("cls");
                dec_hex();
                break;
            case 3:
                system("cls");
                binary_dec();
                break;
            case 4:
                system("cls");
                binary_hex();
                break;
            case 5:
                system("cls");
                hex_bin();
                break;
            case 6:
                system("cls");
                hex_dec();
                break;
            default:
                return 0;

        }
    }
    while(choice !=0);
    return 0;
}