#include <stdio.h>

int main() {
    float promedio;
    float estatura;
    int edad;
    printf("los requerimientos para entrar en el equipo de baketball son los siguientes\n"
           "promedio de 80 o mas\nmedir 1.75 o mas\n");
    system("pause");
    system("cls");
    printf("cual es tu promedio?\n");
    scanf("%f",&promedio);
    if(promedio >= 80) {
        printf("cual es tu estatura\n");
        scanf("%f", &estatura);
        if (estatura >= 1.75) {
            printf("cual es tu edad\n");
            scanf("%d", &edad);
            if(edad >=18 && edad<=24){
                printf("felicidades bienvenido al equipo\n");
                system("pause");
                return 0;
            }
            else{
                printf("lo siento tienes que cumplir todos los requisitos\n");
                system("pause");
                return 0;
            }
        }
        else{
            printf("lo siento, tienes que cumplir con todos los requisitos\n");
            system("pause");
            return 0;
        }
    }
    else{
        printf("lo siento, tienes que cumplir con todos los requisitos\n");
        system("pause");
        return 0;

    }


}