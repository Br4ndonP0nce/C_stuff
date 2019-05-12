#include <stdio.h>

int main() {
    int mes;
    int salida;
    while(salida ==0) {
        printf("deme el numero del mes \n");
        scanf("%d", &mes);
        switch (mes) {
            case 1:
                printf("enero\n");
                salida++;
                break;

            case 2:
                printf("febrero\n");
                salida++;
                break;
            case 3:
                printf("marzo\n");
                salida++;
                break;
            case 4:
                printf("abril\n");
                salida++;
                break;
            case 5:
                printf("mayo\n");
                salida++;
                break;
            case 6:
                printf("junio\n");
                salida++;
                break;
            case 7:
                printf("julio\n");
                salida++;
                break;
            case 8:
                printf("agosto\n");
                salida++;
                break;
            case 9:
                printf("septiembre\n");
                salida++;
                break;
            case 10:
                printf("octubre\n");
                salida++;
                break;
            case 11:
                printf("noviembre\n");
                salida++;
                break;
            case 12:
                printf("diciembre\n");
                salida++;
                break;
            default:
                printf("fuera de rango\n");


        }
    }
    system("pause");
    return 0;
}