/*Brandon Ponce Aragón
 * Menú de vectores
 * 03/26/2019
 * Programa que recibe al usuario con un menú que ofrece varias opciones ara trabajar con un vector
 * Datos de entrada:el numero para la opcion del menú
 * Datos de salida: Dado que el vector se llena sde 100 numeros aleatorios, el programa arroja (segun la opcion escogida, el vector,el vector ordenado, invesero y una busqueda)
 * Formulas:principios de busqueda binaria, estrcuturas iterativas, vectores
 * Comentarios/conclusiones: El tener bien cimentada la base de los For loops ayuda mucho con la exploracion de los arreglos.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int a[100];
    int random = rand()%100+1;
    int num =0;
    int inv=0;
    int aux;
    int j;
    int search;
    int user_menu;
    int not;

    srand(time(NULL));

    while(user_menu!=8){
        printf("eliga su opcion\n");
        printf("1)llenar vector\n");
        printf("2)mostrar vector\n");
        printf("3)mostrar orden inverso del vector\n");
        printf("4)ordenar vector de forma ascendente\n");
        printf("5)ordenar vector de forma descendente\n");
        printf("6)busqueda secuencial \n");
        printf("7)busqueda binaria\n");
        printf("8)salir\n");
        scanf("%i",&user_menu);


        switch(user_menu)
        {
            case 1:
    //fill vector
                for(num=0;num<=101;num++)
                {
                    random = rand()%100+1;
                    a[num] = random;
                }
                system("pause");
                system("cls");

                break;
            case 2:
                //Normal vector
                printf("   'Vector'\n");
                printf("espacio|numero\n");
                for(num=0;num<=101;num++)
                {
                    printf("  [%i]    [%i]\n",num,a[num]);

                }
                system("pause");
                system("cls");

                break;

                //reversed vector
            case 3:
                printf("   'Vector invertido'\n");
                printf("espacio|numero\n");
                for(inv=101;inv>=0;inv--){
                    printf("  [%i]   [%i]\n",inv,a[inv]);

                }
                system("pause");
                system("cls");

                break;
            case 4:
                //ascending order vector
                for(num=0;num<=101;num++)
                {
                    for(j=0;j<=101;j++)
                    {

                        if(a[j]>a[num])
                        {
                            aux=a[num];
                            a[num] = a[j];
                            a[j]=aux;
                        }

                    }

                }
                printf("  'Vector ascendente'\n");
                printf("    espacio|numero\n");
                for(num=0;num<=101;num++){
                    printf("      [%i]  [%i]\n",num,a[num]);
                }
                system("pause");
                system("cls");

                break;

            case 5:
                //descending order vector
                printf("  'Vector ascendente'\n");
                printf("    espacio|numero\n");
                for(num=101;num>=0;num--){
                    printf("[%i][%i]\n",num,a[num]);
                }
                system("pause");
                system("cls");
                break;

            case 6:
                //secuential search
                printf("que numero desea buscar?\n");
                scanf("%i",&search);
                for(num=0;num < 101;num++){
                    if(search != a[num]){
                        not+=1;
                    }
                    else{
                        printf("su numero %i existe en el vector en el espacio [%i]\n",search,num);
                    }

                }
                if(not == 102){
                    printf("el numero no existe\n");
                }
                system("pause");
                system("cls");
                break;

            //case 7:
                //binary search

        }
    }
}