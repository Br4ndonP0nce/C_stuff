/*Practica 30: Gato
 Autor: Brandon Ponce Aragón
 Fecha: 04/05/2019
 Programa que genera diversos algoritmos y simula un juego de gato contra el cpu
 Datos de entrada: posicion para poner la marca de usuario
 Datos de salida, tablero con el juego sobre la marcha.

*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int x,y,seguir=0,ganador=0,tomamocat[3][3],cont,cpu,usuario,cont2,filas=0,columnas=0,diagonal=0,invdiagonal=0,win=0,lose=0,draw=0,turno;
    printf("***juego GATO***\n");
    while(seguir==0){
        ganador=0;
        turno=0;
        //se genera la tabla del gato llenandolo con ceros
        for(x=0;x<3;x++){
            for(y=0;y<3;y++){
                cont++;
                tomamocat[x][y]=0;
            }
        }
        srand(time(NULL));
        while(ganador==0){
            turno++;
            cont=0;
            cont2=0;
            cpu=rand()%9+1;
            printf("marcador del juego %d victorias, %d derrotas , %d empates y el turno actual es %d\n",win,lose,draw,turno);
            if(ganador==0){
                printf("turno de la computadora\n");
                //se crea un numero del 1 al nueve al azar y se compara con la posicion del tablero y si esta esta vacia se llena con una O mayuscula
                for(x=0;x<3;x++){
                    for(y=0;y<3;y++){
                        cont++;
                        if(cpu==cont&&tomamocat[x][y]!=0&&ganador==0){
                            while(cont2==0){
                                cont=0;
                                cpu=rand()%9+1;
                                for(x=0;x<3;x++){
                                    for(y=0;y<3;y++){
                                        cont++;
                                        if(cpu==cont&&tomamocat[x][y]==0&&ganador==0){
                                            tomamocat[x][y]='O';
                                            cont2=1;}
                                    }
                                }
                            }
                        }
                        if(cpu==cont&&tomamocat[x][y]==0){
                            tomamocat[x][y]='O';
                        }
                    }
                }
            }
            //se revisa si es que la compu consigue ganar
            diagonal=0;
            invdiagonal=0;
            for(x=0;x<3;x++){
                filas=0;
                columnas=0;
                for(y=0;y<3;y++){
                    printf("%c",tomamocat[x][y]);
                    if(tomamocat[x][y]=='O'){
                        filas++;
                        if(filas==3)
                            ganador=2;
                    }
                    if(tomamocat[y][x]=='O'){
                        columnas++;
                        if(columnas==3)
                            ganador=2;
                    }
                    if(x==y&&tomamocat[x][x]=='O'){
                        diagonal++;
                        if(diagonal==3)
                            ganador=2;
                    }
                    if(x+y==2&&tomamocat[2-y][2-x]=='O'){
                        invdiagonal++;
                        if(invdiagonal==3)
                            ganador=2;
                    }
                }
                printf("\n");
            }
            //se revisa que sea un empate para no correr el programa de manera infinita
            if(turno==5&&ganador==0){
                ganador=3;
            }
            if(ganador==0){
                //aqui el usuario ingresa un numero del 1 al 9 y se compara con la posicion del tablero para ver si esta vacia en caso de que si se llena con una X
                printf("turno del usuario\n");
                printf("ingrese un numero del 1 al 9 indicando la casilla que desea seleccionar\n");
                //dato de entrada
                scanf("%d",&usuario);
                cont=0;
                cont2=0;
                for(x=0;x<3;x++){
                    for(y=0;y<3;y++){
                        cont++;
                        if(usuario==cont&&tomamocat[x][y]!=0){
                            while(cont2==0){
                                cont=0;
                                printf("dato invalido ingrese otro numero porfavor\n");
                                //dato de entrada
                                scanf("%d",&usuario);
                                for(x=0;x<3;x++){
                                    for(y=0;y<3;y++){
                                        cont++;
                                        if(usuario==cont&&tomamocat[x][y]==0){
                                            tomamocat[x][y]='X';
                                            cont2=1;}
                                    }
                                }
                            }
                        }
                        if(usuario==cont&&tomamocat[x][y]==0){
                            tomamocat[x][y]='X';
                        }
                    }
                }
            }
            //aqui se revisa si el usuario es ganador o no
            diagonal=0;
            invdiagonal=0;
            for(x=0;x<3;x++){
                filas=0;
                columnas=0;
                for(y=0;y<3;y++){
                    if(tomamocat[x][y]=='X'){
                        filas++;
                        if(filas==3)
                            ganador=1;
                    }
                    if(tomamocat[y][x]=='X'){
                        columnas++;
                        if(columnas==3)
                            ganador=1;
                    }
                    if(x==y&&tomamocat[x][x]=='X'){
                        diagonal++;
                        if(diagonal==3)
                            ganador=1;
                    }
                    if(x+y==2&&tomamocat[2-y][2-x]=='X'){
                        invdiagonal++;
                        if(invdiagonal==3)
                            ganador=1;
                    }
                }
            }
            //datos de salida
            if(ganador==1){
                printf("Felicidades ganaste\n");
                win++;
            }
            else if(ganador==2){
                printf("Mala suerte vuelve a intentar ganarme\n");
                lose++;
            }
            else if(ganador==3){
                printf("Parece que por esta vez sera un empate\n");
                draw++;
            }
        }
        for(x=0;x<3;x++){
            for(y=0;y<3;y++){
                printf("%c",tomamocat[x][y]);
            }
            printf("\n");
        }
        printf("si desea seguir jugando ingrese 0 si desea salir ingrese 1\n");
        scanf("%d",&seguir);
        system("cls");

    }
    system("cls");
    //dato de salida
    printf("el marcador final fue %d victorias, %d derrotas y %d empates",win,lose,draw);

    return 0;
}