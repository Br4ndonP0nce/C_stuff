#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define FIN 0
#define INICIO 1


int main()
{
    int num, num2, op=1,intentos=4,juego=FIN;
    do
    {
        srand(time(NULL));
        num = rand() %10;
        while(juego==FIN)
        {
            printf("\n Introduce numero: \n");
            scanf("%d",&num2);

            if (num2 == num)
            {
                printf("Acertaste\n");
                juego=INICIO;
            }
            if (num > num2)
            {
                printf("Es mayor \n");
            }

            if (num < num2)
                printf("Es menor \n");

            intentos--;
            if (intentos > 0 && juego == FIN)
            {

                printf("te quedan %d intento", intentos);
                if (intentos > 1)
                    printf("s\n");
                else
                    printf("\n");
            }
            else
                juego = INICIO;

            if (intentos==0 && num2!=num)
            {
                printf("el numero era %d",num);
                printf("Suerte para la proxima :( ");
                printf("\n 1 - Jugar de nuevo.");
                printf("\n 2 - Salir.");
                printf("\n Introduce una opcion:");
                scanf("%i",&op);
                intentos = 4;
                juego = FIN;
            }
        }
        printf("\n 1 - Jugar de nuevo.");
        printf("\n 2 - Salir.");
        printf("\n Introduce una opcion:");
        scanf("%i",&op);
        intentos = 4;
        juego = FIN;
    }while (op == 1);
    return 0;
}