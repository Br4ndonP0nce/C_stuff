/*Brandon Ponce Aragon
 * 25/05/2019
 * Practica 32: 8 reinas
 * Programa que a manera de un juego permite al usuario intentar resolver el problema de las 8 reinas
 * Datos de entrada:una respuesta a la fila y una a la comlumna
 * Datos de Salida:Un tablero que continuamente marca las lineas de ataque de las reinas, y la posicion de las reinas
 * Formulas
 * Comentarios:Como trabajo final, fue entretenido, algo extenso, y se vería bonito con colores
 */

#include<stdlib.h>
#include<stdio.h>
int game_mat[8][8];
void clean_mat(){
    int x_axis,y_axis;
    for(x_axis=0;x_axis<8;x_axis++){
        for(y_axis=0;y_axis<8;y_axis++){
            game_mat[x_axis][y_axis]= 0;
        }
    }
}
int mostrar(){
    int x,y;
    printf(" 1 2 3 4 5 6 7 8\n");
    for(x=0;x<8;x++){
        for(y=0;y<8;y++){
            if(x==0&&y==0)
                printf(" _________________\n");
            if(y==0)
                printf("%i|",x+1);
            printf("%c|",game_mat[x][y]);
            if(x==7&&y==7)
                printf("\n -----------------");
        }
        printf("\n");
    }
}
int main(){

    int cont,cont2,a,b,win=0,x,y,lose,final_count=0,search;
    printf("\t\t8 reinas\n");
    printf("necesita ingresar 2 numeros: el primero para la FILA Y y el segundo para la COLUMNA \nPuede presionar 0 para limpiar\n");
    system("pause");
    clean_mat();
    while(win==0){
        final_count=0;
        if(lose==1)
            clean_mat();
        system("cls");
        mostrar();
        printf("ingrese un numero para la cordenada X del 1 al 8 y otro para la "
               "cordenada y de igual forma del 1 al 8\nPuede presionar 0 para limpiar\n");

        scanf("%d",&x);
        scanf("%d",&y);
        search=0;
        if(x == 0 || y == 0){
            printf("tablero limpiado\n");

            clean_mat();

        }
        if(game_mat[cont][cont2]==game_mat[x-1][y-1]&&game_mat[cont][cont2]==0){
            for(cont=0;cont<8;cont++){
                for(cont2=0;cont2<8;cont2++){
                    if(game_mat[cont][cont2]!=0)
                        search++;
                    if(game_mat[cont][cont2]==game_mat[x-1][y-1]){
                        game_mat[x-1][y-1]= 64;
                    }
                    if(game_mat[cont][cont2]==64){
                        for(a=0;a<8;a++){
                            for(b=0;b<8;b++){
                                if(game_mat[x-1][b]==0&&game_mat[x-1][b]!=64){
                                    game_mat[x-1][b]=33;
                                }
                                if(game_mat[a][y-1]==0&&game_mat[a][y-1]!=64){
                                    game_mat[a][y-1]=33;
                                }
                                if(a+b==x-1+y-1&&game_mat[a][b]==0&&game_mat[a][b]!=64){
                                    game_mat[a][b]=33;
                                }
                                if(a-x+1==b-y+1&&game_mat[a][b]==0&&game_mat[a][b]!=64){
                                    game_mat[a][b]=33;
                                }
                            }
                        }
                    }
                }
            }
        }else if(game_mat[x-1][y-1]==64 || game_mat[x-1][y-1]==33){
            printf("Espacio ya ocupado o atacado!!!\n");
            system("pause");
        }
        for(a=0;a<8;a++){
            for(b=0;b<8;b++){
                if(game_mat[a][b]==64){
                    final_count++;
                }
            }
        }
        if(final_count==8){
            win=1;
            system("cls");

            printf("\nganaste!\n");
            system("pause");
            mostrar();
        }
        if(search==64&&final_count!=8)
            clean_mat();
    }
    return 0;
}