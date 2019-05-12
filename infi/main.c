#include<stdio.h>
int main(){
    int fin,caso,factorial,num,inicio,multiplos;
    do{
        factorial=1;
        printf("ingrese un numero\n");
        scanf("%d",&num);
        caso = num%2;
        switch(caso){
            case 0:
                for(inicio=1;inicio<=num;inicio++){
                    factorial= factorial*inicio;
                }
                printf("El factorial del numero de %d es %d\n",num,factorial);break;
            case 1:
                multiplos = num;
                while(num<+1000){
                    if(num%multiplos==0){
                        printf("%d\t",num);
                    }
                    num++;
                }
        }
        printf("\nsi desea reperit el programa ingrese 1 si no desea reperit ingrese 2");
        scanf("%d",&fin);
    }
    while(fin==1);


}
