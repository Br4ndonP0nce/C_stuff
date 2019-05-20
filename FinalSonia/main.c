#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy (short x, short y){
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE), pos);
}//funcion marco 1
void t(int n){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
}//funcion marco 2


struct mascota{//struct servicios
    char nombre[10],tda[20];
    int edad;
    float peso;
}mascotas[20];

struct dueno{//struct Pacientes
    char nombre[15],direccion[40],telefono[15];
}duenos[20];


int main() {

    FILE *test = fopen("sonia.txt","w");


    int i,op,k,ca =0,x=0;
    int a[50]= {};
    char opc,aux[15],aux2[15];



    system("cls");
    printf("\n\t\t  B I E N V E N I D O\n\t\t ");
    printf("\n\t\t\t   A\n\t\t");
    printf("\n\t\tVETERINARIA EL CHARALITO\n\t");
    for(int x=1; x<=50; x++){
        gotoxy (x,0);
        putchar ('*');
        gotoxy (x,10);
        putchar ('*');
    }
    for(int y=1; y<=10; y++){
        gotoxy (0,y);
        putchar ('*');
        gotoxy (50,y);
        putchar ('*');
    }

    printf("\n\t");
    system("pause");


    do{
        system("cls");
        printf("\n\t*MENU PRINCIPAL*\n\t");
        printf("1)Registrar\n\t");
        printf("2)Mostrar lista\n\t");
        printf("3)Buscar\n\t");
        printf("4)editar\n\t");
        printf("5)Eliminar\n\t");
        printf("6)Eliminar todos los datos\n\t");

        printf("0)Salir\n\t");
        for(int x=1; x<=50; x++){
            gotoxy (x,0);
            putchar ('*');
            gotoxy (x,10);
            putchar ('*');
        }
        for(int y=1; y<=10; y++){
            gotoxy (0,y);
            putchar ('*');
            gotoxy (50,y);
            putchar ('*');
        }
        opc = getch();


        switch (opc) {//Incio de switch menu

            case '1':
                system("cls");
                ca++;
                printf("\n\tNombre del animal: ");
                fflush(stdin);
                gets(mascotas[ca].nombre);

                printf("\n\tTipo de animal: ");
                fflush(stdin);
                gets(mascotas[ca].tda);

                printf("\n\tEdad: ");
                fflush(stdin);
                scanf("%d",&mascotas[ca].edad);

                printf("\n\tPeso(kg): ");
                fflush(stdin);
                scanf("%f",&mascotas[ca].peso);

                printf("\n\tPropietario: ");
                fflush(stdin);
                gets(duenos[ca].nombre);

                printf("\n\tDireccion: " );
                fflush(stdin);
                gets(duenos[ca].direccion);

                printf("\n\tTelefono: ");
                fflush(stdin);
                gets(duenos[ca].telefono);
                i=0;
                break;

            case '2':

                system("cls");
                printf("\n\t *LISTA DE ANIMALES*\n\t",test);
                fclose(test);
                for(x=1; x<=ca; x++){//Incio for
                    printf("\n\t");
                    printf("Registro NO. %d\n\t",x );
                    printf("Nombre: %s\n\t",mascotas[x].nombre);
                    printf("Tipo de animal: %s\n\t",mascotas[x].tda);
                    printf("Edad: %d\n\t",mascotas[x].edad);
                    printf("Peso(kg): %.2f\n\t",mascotas[x].peso);
                    printf("Propietario: %s\n\t",duenos[x].nombre);
                    printf("Direccion: %s\n\t",duenos[x].direccion);
                    printf("Telefono %s\n\t",duenos[x].telefono);
                }//fin for
                system("pause");
                i=0;
                break;

            case '3':
                system("cls");
                printf("\n\tPor que quieres buscar?\n\t");
                printf("\n\t1)Nombre de animal");
                printf("\n\t2)Tipo de animal");
                printf("\n\t3)Propietario\n\t");

                opc = getch();

                switch (opc) {//switch filtro
                    case '1':
                        system("cls");
                        printf("Ingrese el nombre del animal:");
                        fflush(stdin);
                        gets(aux);

                        for(x=1; x<=ca;x++){//inicio for
                            if(strcmp(aux,mascotas[x].nombre)==0){//inicio if
                                printf("\n\tRegistro NO. %d\n\t",x );
                                printf("Nombre: %s\n\t",mascotas[x].nombre);
                                printf("Tipo de animal: %s\n\t",mascotas[x].tda);
                                printf("Edad: %d\n\t",mascotas[x].edad);
                                printf("Peso(kg): %.2f\n\t",mascotas[x].peso);
                                printf("Propietario: %s\n\t",duenos[x].nombre);
                                printf("Direccion: %s\n\t",duenos[x].direccion);
                                printf("Telefono %s\n\t",duenos[x].telefono);

                            }//fin de if
                            else if (x==ca && strcmp(aux,mascotas[x].nombre)!=0 ){//inicio else if
                                printf("No hay ni madres\n");
                            }//fin else if
                        }//fin for
                        system("pause");
                        i=0;
                        break;

                    case '2':

                        system("cls");
                        printf("Ingrese el tipo de animal:");
                        fflush(stdin);
                        gets(aux);

                        for(x=1; x<=ca;x++){//inicio for
                            if(strcmp(aux,mascotas[x].tda)==0){//inicio if
                                printf("\n\tRegistro NO. %d\n\t",x );
                                printf("Nombre: %s\n\t",mascotas[x].nombre);
                                printf("Tipo de animal: %s\n\t",mascotas[x].tda);
                                printf("Edad: %d\n\t",mascotas[x].edad);
                                printf("Peso(kg): %.2f\n\t",mascotas[x].peso);
                                printf("Propietario: %s\n\t",duenos[x].nombre);
                                printf("Direccion: %s\n\t",duenos[x].direccion);
                                printf("Telefono %s\n\t",duenos[x].telefono);

                            }//fin de if
                            else if (x==ca && strcmp(aux,mascotas[x].tda)!=0 ){//inicio else if
                                printf("No hay ni madres\n");
                            }//fin else if
                        }//fin for
                        system("pause");
                        i=0;
                        break;

                    case '3':

                        system("cls");
                        printf("Ingrese el nombre del Propietario:");
                        fflush(stdin);
                        gets(aux);

                        for(x=1; x<=ca;x++){//inicio for
                            if(strcmp(aux,duenos[x].nombre)==0){//inicio if
                                printf("\n\tRegistro NO. %d\n\t",x );
                                printf("Nombre: %s\n\t",mascotas[x].nombre);
                                printf("Tipo de animal: %s\n\t",mascotas[x].tda);
                                printf("Edad: %d\n\t",mascotas[x].edad);
                                printf("Peso(kg): %.2f\n\t",mascotas[x].peso);
                                printf("Propietario: %s\n\t",duenos[x].nombre);
                                printf("Direccion: %s\n\t",duenos[x].direccion);
                                printf("Telefono %s\n\t",duenos[x].telefono);

                            }//fin de if
                            else if (x==ca && strcmp(aux,duenos[x].nombre)!=0 ){//inicio else if
                                printf("No hay ni madres\n");
                            }//fin else if
                        }//fin for
                        system("pause");
                        i=0;
                        break;


                }//fin switch filtro


                break;

            case '4':
                system("cls");
                printf("Ingrese el nombre de la mascota a editar: ");
                fflush(stdin);
                gets(aux);
                for(x=1; x<=ca;x++){//inicio for
                    if(strcmp(aux,mascotas[x].nombre)==0){//inicio if
                        printf("Registro NO. %d\n\t",x );
                        printf("Nombre: %s\n\t",mascotas[x].nombre);
                        printf("Tipo de animal: %s\n\t",mascotas[x].tda);
                        printf("Edad: %d\n\t",mascotas[x].edad);
                        printf("Peso(kg): %.2f\n\t",mascotas[x].peso);
                        printf("Propietario: %s\n\t",duenos[x].nombre);
                        printf("Direccion: %s\n\t",duenos[x].direccion);
                        printf("Telefono %s\n\t",duenos[x].telefono);

                        printf("\n\t¿Que quieres modificar?\n\t");
                        printf("1)Nombre\n\t");
                        printf("2)Tipo de animal\n\t");
                        printf("3)Edad\n\t");
                        printf("4)Peso(kg)\n\t");
                        printf("5)Propietario\n\t");
                        printf("6)Direccion\n\t");
                        printf("7)Telefono\n\t");
                        printf("0)salir");
                        opc=getch();
                        switch (opc) {//switch
                            case '1':
                                printf("\n\tIngrese el Nombre: ");
                                fflush(stdin);
                                gets(mascotas[x].nombre);
                                break;

                            case '2':
                                printf("\n\tTipo de animal: ");
                                fflush(stdin);
                                gets(mascotas[x].tda);
                                break;

                            case '3':
                                printf("\n\tEdad: ");
                                fflush(stdin);
                                scanf("%d",&mascotas[x].edad);
                                break;

                            case '4':
                                printf("\n\tIngrese el Peso: ");
                                fflush(stdin);
                                scanf("%f",&mascotas[x].peso);
                                break;

                            case '5':
                                printf("\n\tIngrese el Propietario: ");
                                fflush(stdin);
                                gets(duenos[x].nombre);
                                break;

                            case '6':
                                printf("\n\tIngrese la direccion: ");
                                fflush(stdin);
                                gets(duenos[x].direccion);
                                break;

                            case '7':
                                printf("\n\tIngrese el Telefono ");
                                fflush(stdin);
                                gets(duenos[x].telefono);
                                break;

                            case '0':
                                i=0;
                                break;

                            default:
                                printf("\n\tOpcion Incorrecta");
                                break;



                        }//fin switch
                    }//fin if
                    else if (x==ca && strcmp(aux,mascotas[x].nombre)!=0 )
                        printf("No hay ni madres\n");

                }//fin for
                i=0;
                break;

            case '5':
                system("cls");
                printf("Ingrese el nombre del animal:");
                fflush(stdin);
                gets(aux);

                for(x=1; x<=ca;x++){//inicio for
                    if(strcmp(aux,mascotas[x].nombre)==0){//inicio if
                        printf("\n\tRegistro NO. %d\n\t",x );
                        printf("Nombre: %s\n\t",mascotas[x].nombre);
                        printf("Tipo de animal: %s\n\t",mascotas[x].tda);
                        printf("Edad: %d\n\t",mascotas[x].edad);
                        printf("Peso(kg): %.2f\n\t",mascotas[x].peso);
                        printf("Propietario: %s\n\t",duenos[x].nombre);
                        printf("Direccion: %s\n\t",duenos[x].direccion);
                        printf("Telefono %s\n\t",duenos[x].telefono);

                        system("pause");

                        strcpy(mascotas[x].nombre,"\0");
                        strcpy(mascotas[x].tda,"\0");
                        mascotas[x].edad = 0;
                        mascotas[x].peso= 0;
                        strcpy(duenos[x].nombre,"\0");
                        strcpy(duenos[x].direccion,"\0");
                        strcpy(duenos[x].telefono,"\0");





                    }//fin de if
                    else if (x==ca && strcmp(aux,mascotas[x].nombre)!=0 ){//inicio else if
                        printf("No hay ni madres\n");
                    }//fin else if
                }//fin for
                system("pause");
                i=0;
                break;

            case '6':
                system("cls");
                printf("\n\tDATOS ELIMINADOS\n\t");
                system("\n\tpause");
                ca=0;
                i=0;
                break;

            case '0':
                system("cls");
                printf("\n\tCERRANDO PROGRAMA");
                i=1;
                break;

            default:
                system("cls");
                printf("\n\tOpcion Incorrecta\n\t");
                system("pause");
                i=0;
                break;



        }//switch menu
    }while(i==0);
}//fin de main
