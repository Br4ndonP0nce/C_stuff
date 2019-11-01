/*Apuntadores
 * Con la palabra reservada new creamos y reservamos un espacio de memoria en el heap. La palabra new registra una direecion de memoria.
 *
 * Uso:
 * new <type>
 * ejemplo:
 * new int
 * Para crear un apuntador utilizamos el tipo de dato seguidp de * y el nombre de la variable.
 * Uso:w2112 565
 * <tipo>*<identificador>
 *
 * ejemplo int* p;
 * int* q= new int
 *
 * ejemplos de uso
 * int * q=new int
 * *p = 3
 *
 * COn la palabra reserrvada delte podemos liberar espacios de memoria en heap
 * Ejemplo:
 * int* p=new int
 * *p=3
 * delete p
 * */
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}