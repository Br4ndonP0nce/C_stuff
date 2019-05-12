/*Brandon Ponce Aragon
 * 12/02/19
 * Programa que segun tu fecha de nacimiento arroja tu signo zodiacal
 * simplemente usamos enunciados logicos para segun la entrada del usuario dar una respuesta a forma de signo zodiacal
 * Dtaos de entrada:fecha de nacimeiento
 * Datos de salida:signo zodiacal
 * el uso de condiciones es de sumas importancia en el programa debido a que puede arrojar un resultado de no estar validadas las condiciones
 */
#include <stdio.h>

int main() {
    printf("deme su fecha de nacimiento y le mostrare su astro\n");
    printf("Escriba el mes de nacimiento conforme el numero que le toca\n");
    printf("ejemplo:Enero es el mes 1 -Diciembre mes 12 \n");
    int dia, mes;
    printf("Dia de nacimiento: ");
    scanf("%i", &dia);
    printf("Mes de nacimiento: ");
    scanf("%i", &mes);
    if (dia >= 22 && dia <= 31 && mes == 12 || dia >= 1 && dia <= 19 && mes == 1) {
        printf("Tu signo es capricornio\n");
        printf("Eres alto y vendra amor\n");
        system("pause");
    }
    if (dia >= 20 && dia <= 31 && mes == 1 || dia >= 1 && dia <= 19 && mes == 2) {
        printf("tu signo es acuario\n");

        printf("empezaras un nuevo proyecto");
        system("pause");
    }
    if (dia >= 20 && dia <= 28 && mes == 2 || dia >= 1 && dia <= 20 && mes == 3) {
        printf("tu signo es piscis\n");

        printf("dinero y suerte\n");
        system("pause");
    }
    if (dia >= 21 && dia <= 31 && mes == 3 || dia >= 1 && dia <= 20 && mes == 4) {
        printf("tu signo es aries\n");

        printf("deja de tenerle miedo al exito\n");
        system("pause");
    }
    if (dia >= 21 && dia <= 30 && mes == 4 || dia >= 1 && dia <= 20 && mes == 5) {
        printf("tu signo es tauro\n");

        printf("vendran cosas mejores \n");
        system("pause");
    }
    if (dia >= 21 && dia <= 31 && mes == 5 || dia >= 1 && dia <= 21 && mes == 6) {
        printf("tu signo es geminis\n");
        printf("Seras un dios en la tierra \n");
        system("pause");
    }
    if (dia >= 22 && dia <= 30 && mes == 6 || dia >= 1 && dia <= 22 && mes == 7) {
        printf("tu signo es cancer\n");
        printf("terminaras un gran proyecto, pero le venderas el alma al diablo\n");
        system("pause");
    }

    if (dia >= 23 && dia <= 31 && mes == 7 || dia >= 1 && dia <= 23 && mes == 8) {
        printf("tu signo es leo\n");
        printf("rey del universo, thanos de la creacion\n");
        system("pause");
    }
    if (dia >= 24 && dia <= 31 && mes == 8 || dia >= 1 && dia <= 23 && mes == 9) {
        printf("tu signo es virgo\n");
        printf("ganaras un nobel\n");
        system("pause");
    }
    if (dia >= 24 && dia <= 30 && mes == 9 || dia >= 1 && dia <= 22 && mes == 10) {
        printf("tu signo es libra\n");
        printf("crearas una republica comunista\n");
        system("pause");
    }
    if (dia >= 23 && dia <= 31 && mes == 10 || dia >= 1 && dia <= 22 && mes == 11) {
        printf("tu signo es escorpio\n");
        printf(" serás pobre y moriras joven\n");
        system("pause");
    }
    if (dia >= 23 && dia <= 30 && mes == 11 || dia >= 1 && dia <= 21 && mes == 12) {
        printf("tu signo es sagitario\n");
        printf("serás millonario y encontraras el amor\n");
        system("pause");
    }
    if (dia <= 0 || dia >= 32 || mes >= 13) {
        printf("ingrese valores validos ");
        system("pause");
    }
}