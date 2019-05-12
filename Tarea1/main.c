#include <stdio.h>

int main() {
    char nombre[30];
    int edad;
    float estatura;
    char sexo[2];

    printf("cual es tu nombre?");
    scanf("%s",nombre);
    system("cls");
    printf("cual es tu edad?");
    scanf("%d", &edad);
    system("cls");
    printf("cual es tu estatura?");
    scanf("%f", &estatura);
    system("cls");
    printf("cual es su sexo?");
    scanf("%s", sexo);
    system("cls");
    printf("%s tu edad es %i mides %f y eres del sexo %s\n", nombre, edad, estatura, sexo);
    system("pause");

    return 0;
}