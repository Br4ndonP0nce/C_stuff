#include<stdio.h>
#include <string.h>
//int main(){
//    char user,a[20];
//    int search,count=0;
//    printf("ingrese su palabra ");
//    scanf("%s",a);
//    printf("inserte su busqueda");
//    scanf("%s",&user);
//    for(search = 0;search <=20;search++){
//        if(a[search]== user){
//            printf("encontrado\n");
//            count++;
//        }
//
//
//    }
//    printf("la letra fue encontrada %i veces",count);
//
//}
int main()
{
    int n_veces=0, posiciones=0;
    char desicion[1];
    char palabra[20];
    printf("Escribe tu palabra: ");
    scanf("%s", &palabra);
    printf("Escribe tu letra: ");
    scanf("%s", &desicion);
    for (posiciones=0; posiciones<20; posiciones++)
    {
        if (palabra[posiciones] == desicion[0])
            n_veces++;

    }
    printf("tu letra estuvo %i veces", n_veces);
    return 0;
}