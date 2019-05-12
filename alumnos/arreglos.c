/*Ponce Aragon Brandon
 * Moran Garcia Fernando
 * Salgado Cortez Edgar Isai
 * soto Martinez Christian Omar
 */
#include<stdio.h>

#include<string.h>

#include<stdlib.h>

int main() {

    char alumnos[50][50],ap[50][50],last_name[50],aux[50][50],espacios[50],apellidos[50];

    int code[50],calificaciones[50][50],num,i,j;
    char temp[50],tname[50][50],temp_name[50];
    int temp_cal[50];

    int materia,user,code_sel,info;



    printf("cuantos alumnos desea registrar? ");

    //gets limit of students

    scanf("%i",&num);

    //loop to input data in vectors and matrix

    for(i = 0;i<num;i++) {

        printf("inserte el nombre del alumno: ");

        fflush(stdin);

        //gets student names

        gets(alumnos[i]);

        printf("inserte el apellido del alumno");
        gets(ap[i]);
        strcpy(tname[i],ap[i]);

        printf("inserte el codigo de %s %s: ", alumnos[i],ap[i]);

        //gets student code

        scanf("%i", &code[i]);

        //loop for assignments matrix,inputs 3 scores for 3 different assignments,

        // using current number in previous "for loop" and 3 spaces in current loop.

        for (materia = 0; materia < 3; materia++) {
            printf("inserte la calificacion de materia %i: ", materia+1);
            scanf("%i",&calificaciones[i][materia]);

        }
    }
    //while loop to not break program if user inputs an incorrect option

    while(user!=3) {
        //lets user perform a search in 2 different ways: student code and students name
        // and allows to aks for the whole info of all the students on file
        printf("con que desea buscar?\n0)ver todo\n1)codigo\n2)apellido\n3)salir\n");

        scanf("%i", &user);

        system("cls");

        //validates option 0

        if(user ==0){

            //prints names and codes
            //this nested for loops allows to sort last names
            for(i=0 ; i<num-1 ; i++){
                for(j=i+1;j<num;j++){
                    if(strcmp(ap[i],ap[j]) > 0){

                        strcpy(temp,ap[i]);


                        strcpy(ap[i],ap[j]);


                        strcpy(ap[j],temp);

                    }
//                    strcpy(temp_name,alumnos[i]);
//                    strcpy(alumnos[i],alumnos[j]);
//                    strcpy(alumnos[j],temp);

                }


            }
            for(i=0;i<num;i++){
                printf("apellido %s \ncodigo %i\n",ap[i],code[i]);
                for (materia = 0; materia < 3; materia++) {

                    printf("materia %i:%i,\n", materia + 1, calificaciones[i][materia]);

                }
            }


        }

            //validates option 1

        else if(user == 1) {

            printf("ingrese el codigo\n");

            scanf("%i", &code_sel);

            for (i = 0; i < num; i++) {

                if (code_sel == code[i]) {



                    //while(info !=4){

                    printf("que desea saber del alumno: %s %s?\n",alumnos[i],ap[i]);

                    printf("1)calificaciones 2)codigo 3)todo\n");

                    scanf("%i",&info);

                    //switch in response to user input

                    switch(info) {



                        //shows scores in assignments

                        case 1:

                            for (materia = 0; materia < 3; materia++) {

                                printf("materia %i:%i,\n", materia + 1, calificaciones[i][materia]);

                            }

                            system("pause");

                            break;



                            //show student code

                        case 2:

                            printf("el codigo es: %i\n", code[i]);

                            system("pause");

                            break;



                            //shows everything related to user's input

                        case 3:

                            printf("nombre: %s %s\ncodigo: %i\ncalificaciones:\n", alumnos[i],ap[i], code[i]);

                            for (materia = 0; materia < 3; materia++) {

                                printf("materia %i:%i\n", materia + 1, calificaciones[i][materia]);

                            }

                            system("pause");

                            break;

                        default:

                            printf("opcion no valida\n");



                    }

                    system("cls");

                    //after execution user is able to perform additional searches either with student code or last name

                }

            }

        }

        else if(user == 2) {

            printf("escriba el nombre del alumno a buscar\n");

            fflush(stdin);

            gets(last_name);

            for(i=0;i<num;i++){

                if(strcmp(last_name,ap[i])==0){

                    printf("%s %s\n",alumnos[i],ap[i]);

                    printf("que desea saber del alumno: %s %s?\n",alumnos[i],ap[i]);

                    printf("1)calificaciones 2)codigo 3)todo\n");

                    scanf("%i",&info);

                    //switch in response to user input

                    switch(info) {



                        //shows scores in assignments

                        case 1:

                            for (materia = 0; materia < 3; materia++) {

                                printf("materia %i:%i,\n", materia + 1, calificaciones[i][materia]);

                            }

                            system("pause");

                            break;



                            //show student code

                        case 2:

                            printf("el codigo es: %i\n", code[i]);

                            system("pause");

                            break;



                            //shows everything related to user's input

                        case 3:

                            printf("nombre: %s %s\ncodigo: %i\ncalificaciones:\n", alumnos[i],ap[i], code[i]);

                            for (materia = 0; materia < 3; materia++) {

                                printf("materia %i:%i\n", materia + 1, calificaciones[i][materia]);

                            }

                            system("pause");

                            break;

                        default:

                            printf("opcion no valida\n");
                    }
                    system("cls");
                    //after execution user is able to perform additional searches either with student code or last name
                }
            }
        }
    }
}

