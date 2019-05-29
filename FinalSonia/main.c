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

char toRead[200]; //defines buffer size
struct mascota{//struct servicios
    char nombre[10],tda[20],edad[5],peso[5];

}mascotas[20];

struct dueno{//struct Pacientes
    char nombre[15],direccion[40],telefono[15];
}duenos[20];


int main() {

    FILE * source_file;
    int  c_trigger = 0;
    int i,op,k,ca =0,x=0,contador,contador_;
    int a[50]= {};
    char opc,aux[15],aux2[15],cambio[50];
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
        printf("7)ordenar alfabeticamente\n\t");
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


        switch (opc) {//Inicio de switch menu

            case '1':
                source_file = fopen("sonia.txt","a");
                system("cls");
                ca++;
                printf("\n\tNombre del animal: ");
                fflush(stdin);
                gets(mascotas[ca].nombre); //FILE just is just able to handle str data type
                fprintf(source_file, mascotas[ca].nombre);


                printf("\n\tTipo de animal: ");
                fflush(stdin);
                gets(mascotas[ca].tda);
                fprintf(source_file, "\n");
                fprintf(source_file, mascotas[ca].tda);//FILE just is just able to handle str data type

                printf("\n\tEdad: ");
                fflush(stdin);
                gets(mascotas[ca].edad);
                fprintf(source_file, "\n");
                fprintf(source_file, mascotas[ca].edad);//FILE just is just able to handle str data type

                printf("\n\tPeso(kg): ");
                fflush(stdin);
                gets(mascotas[ca].peso);
                fprintf(source_file, "\n");
                fprintf(source_file, mascotas[ca].peso);//FILE just is just able to handle str data type

                printf("\n\tPropietario: ");
                fflush(stdin);
                gets(duenos[ca].nombre);
                fprintf(source_file, "\n");
                fprintf(source_file, duenos[ca].nombre);

                printf("\n\tDireccion: ");
                fflush(stdin);
                gets(duenos[ca].direccion);
                fprintf(source_file, "\n");
                fprintf(source_file, duenos[ca].direccion);

                printf("\n\tTelefono: ");
                fflush(stdin);
                gets(duenos[ca].telefono);
                fprintf(source_file, "\n");
                fprintf(source_file, duenos[ca].telefono);
                fprintf(source_file, "\n\n");

                i = 0;
                fclose(source_file);  // Each time we finish writing on a file it must be closed

                break;

            case '2':
                if (c_trigger > 0){
                        source_file = fopen("sonia.txt","w");
                    for(x=1; x<=ca; x++){//Incio for
                        printf("\n\t");
                        printf("Registro NO. %d\n\t",x );
                        fprintf(source_file,"Registro NO. %d\n\t",x);
                        printf("Nombre: %s\n\t",mascotas[x].nombre);
                        fprintf(source_file,"Nombre: %s\n\t",mascotas[x].nombre);
                        printf("Tipo de animal: %s\n\t",mascotas[x].tda);
                        fprintf(source_file,"Tipo de animal: %s\n\t",mascotas[x].tda);
                        printf("Edad: %s\n\t",mascotas[x].edad);
                        fprintf(source_file,"Edad: %s\n\t",mascotas[x].edad);
                        printf("Peso(kg): %s\n\t",mascotas[x].peso);
                        fprintf(source_file,"Peso(kg): %s\n\t",mascotas[x].peso);
                        printf("Propietario: %s\n\t",duenos[x].nombre);
                        fprintf(source_file,"Propietario: %s\n\t",duenos[x].nombre);
                        printf("Direccion: %s\n\t",duenos[x].direccion);
                        fprintf(source_file,"Direccion: %s\n\t",duenos[x].direccion);
                        printf("Telefono %s\n\t",duenos[x].telefono);
                        fprintf(source_file,"Telefono %s\n\t",duenos[x].telefono);
                        fprintf(source_file,"\n\n\n");


                    }//fin for
                    fclose(source_file);

                }
                system("cls");
                source_file = fopen("sonia.txt","r+"); //We then open file in a r+ mode,which is reading
                if(source_file == NULL){
                    continue;

                }
                else;
                printf("\n\t *LISTA DE ANIMALES*\n\t");
                while(fgets(toRead,200,source_file)){ // fgets allow us to read whats in a file it requires 3 arguments(buffer size,maximum size of file, and file top read )
                    printf("%s",toRead);
                }
                fclose(source_file);
                /*for(x=1; x<=ca; x++){//Incio for
                    printf("\n\t");
                    printf("Registro NO. %d\n\t",x );
                    printf("Nombre: %s\n\t",mascotas[x].nombre);
                    printf("Tipo de animal: %s\n\t",mascotas[x].tda);
                    printf("Edad: %s\n\t",mascotas[x].edad);
                    printf("Peso(kg): %s\n\t",mascotas[x].peso);
                    printf("Propietario: %s\n\t",duenos[x].nombre);
                    printf("Direccion: %s\n\t",duenos[x].direccion);
                    printf("Telefono %s\n\t",duenos[x].telefono);

                 }//fin for
                    */
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
                                printf("Edad: %s\n\t",mascotas[x].edad);
                                printf("Peso(kg): %s\n\t",mascotas[x].peso);
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
                                printf("Edad: %s\n\t",mascotas[x].edad);
                                printf("Peso(kg): %s\n\t",mascotas[x].peso);
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
                                printf("Edad: %s\n\t",mascotas[x].edad);
                                printf("Peso(kg): %s\n\t",mascotas[x].peso);
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
                        printf("Edad: %s\n\t",mascotas[x].edad);
                        printf("Peso(kg): %s\n\t",mascotas[x].peso);
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
                                gets(mascotas[x].edad);
                                break;

                            case '4':
                                printf("\n\tIngrese el Peso: ");
                                fflush(stdin);
                               gets(mascotas[x].peso);
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
                        printf("Edad: %s\n\t",mascotas[x].edad);
                        printf("Peso(kg): %sf\n\t",mascotas[x].peso);
                        printf("Propietario: %s\n\t",duenos[x].nombre);
                        printf("Direccion: %s\n\t",duenos[x].direccion);
                        printf("Telefono %s\n\t",duenos[x].telefono);


                        system("pause");

                        strcpy(mascotas[x].nombre,"\0");
                        strcpy(mascotas[x].tda,"\0");
                        strcpy(mascotas[x].edad,"\0");
                        strcpy(mascotas[x].peso, "\0");
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
                source_file = fopen("sonia.txt","w");
                fclose(source_file);
                system("cls");
                printf("\n\tDATOS ELIMINADOS\n\t");
                system("\n\tpause");
                ca=0;
                i=0;
                break;

            case '7':
                c_trigger++;

                system("cls||clear");
                for (contador=0; contador<ca; contador++)
                    for (contador_=0; contador_<ca; contador_++)
                    {
                        if ((strcmp(mascotas[contador_+1].nombre, mascotas[contador_+2].nombre) > 0) && (ca>contador_+1))
                        {
                            // Nombre
                            strcpy(cambio, mascotas[contador_+1].nombre);
                            strcpy(mascotas[contador_+1].nombre, mascotas[contador_+2].nombre);
                            strcpy(mascotas[contador_+2].nombre, cambio);

                            // Tipo
                            strcpy(cambio, mascotas[contador_+1].tda);
                            strcpy(mascotas[contador_+1].tda, mascotas[contador_+2].tda);
                            strcpy(mascotas[contador_+2].tda, cambio);
                            // Edad
                            strcpy(cambio, mascotas[contador_+1].edad);
                            strcpy(mascotas[contador_+1].edad, mascotas[contador_+2].edad);
                            strcpy(mascotas[contador_+2].edad, cambio);
                            // Peso
                            strcpy(cambio, mascotas[contador_+1].peso);
                            strcpy(mascotas[contador_+1].peso, mascotas[contador_+2].peso);
                            strcpy(mascotas[contador_+2].peso, cambio);
                            // Propietario
                            strcpy(cambio, duenos[contador_+1].nombre);
                            strcpy(duenos[contador_+1].nombre, duenos[contador_+2].nombre);
                            strcpy(duenos[contador_+2].nombre, cambio);
                            // Direccion
                            strcpy(cambio, duenos[contador_+1].direccion);
                            strcpy(duenos[contador_+1].direccion, duenos[contador_+2].direccion);
                            strcpy(duenos[contador_+2].direccion, cambio);
                            // Telefono
                            strcpy(cambio, duenos[contador_+1].telefono);
                            strcpy(duenos[contador_+1].telefono, duenos[contador_+2].telefono);
                            strcpy(duenos[contador_+2].telefono, cambio);

                        }
                    }
                system("pause");
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
