#include <stdlib.h>
#include <time.h>
int suma=0, numero, digitos, contador;
int main(){
    time_t t;
    // genera una semilla aleatoria
    srand((time(&t)));
    digitos = rand() % 6;
    // evita que se genere el valor 0 en digitos para asegurar que el numero mas pequeño sea de un digito y no 0
    while (digitos == 0)
    {
        digitos = rand() % 6;
    }
    // se generan los numeros al azar
    for (contador=0; contador<digitos; contador++)
    {
        numero =  rand() % 10;
        // evita que el primer digito sea 0
        if (contador == 0 && numero == 0)
        {
            while (numero == 0)
            {
                numero = rand() % 6;
            }
        }
        suma += numero;
        printf("%d", numero);
    }
    printf("\nLa suma es %i y tiene %i digitos", suma, digitos);

    return 0;


}