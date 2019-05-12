/*Brandon Ponce Aragon
 * 03/05/2019
 * Practica 21: Piedra pael o tijera
 *Programa que generados ciertos elementos aleatorios, es capaz de jugar piedra papel o tijera
 *Formulas: N/A
 * Datos de entrada : piedra papel o tijera sleccionado por el usuario
 * Datos de salida: un entero aleatorio representado como la respuesta de piedra o papel o tijera
 *
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include<string.h>
#define PIEDRA 0
#define PAPEL 1
#define TIJERA 2

int main(){
    int user, random, init,win=0,pc=0 ;
    char exit[2];
    srand(time(NULL));
    random = rand()%3;
    init:
    while(win < 2 && pc < 2){
        printf("inserte su opcion:\n0.-Piedra\n1.-Papel\n2.-Tijeras\n");
        scanf("%i",&user);
        switch(random)
        {
            case PIEDRA:
                switch(user)
                {
                    case PIEDRA:
                        printf("empate\n");
                        printf("humano %i:pc %i\n",win,pc);
                        break;
                    case PAPEL:
                        printf("ganas\n");
                        win++;
                        printf("humano %i:pc %i\n",win,pc);
                        break;
                    case TIJERA:
                        printf("perdiste\n");
                        pc++;
                        printf("humano %i:pc %i\n",win,pc);
                        break;
                }
                break;
            case PAPEL:
                switch(user)
                {
                    case PIEDRA:
                        printf("pierdes\n");
                        pc++;
                        printf("humano %i:pc %i\n",win,pc);
                        break;
                    case PAPEL:
                        printf("empate\n");
                        printf("humano %i:pc %i\n",win,pc);
                        break;
                    case TIJERA:
                        printf("ganas\n");
                        win++;
                        printf("humano %i:pc %i\n",win,pc);
                        break;
                }
                break;
            case TIJERA:
                switch(user)
                {
                    case PIEDRA:
                        printf("gana\n");
                        win++;
                        printf("humano %i:pc %i\n",win,pc);
                        break;
                    case PAPEL:
                        printf("pierde\n");
                        pc++;
                        printf("humano %i:pc %i\n",win,pc);
                        break;
                    case TIJERA:
                        printf("empate\n");
                        printf("humano %i:pc %i\n",win,pc);
                        break;
                }
                break;

        }
        system("pause");
        system("cls");
    }
    printf("desea repetir el juego?");
    scanf("%s",exit);
    if(strcmp(exit, "no")==0){
        printf("gracias por jugar ");
        system("pause");
        return 0;

    }
    else if(strcmp(exit,"si")==0){
        goto init;
    }
}