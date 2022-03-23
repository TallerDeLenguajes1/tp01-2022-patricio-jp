#include <stdio.h>

void main() {
    printf("Hola mundo\n");

    int num = 16;
    int *punt = &num;

    printf("Contenido del puntero: %p\n", punt);
    printf("Direccion de memoria almacenada por el puntero: %p\n", punt);
    printf("Direccion de memoria de la variable: %p\n", &num);
    printf("Direccion de memoria del puntero: %p\n", &punt);
    printf("Tamaño de memoria utilizado por la variable: %d bytes\n", sizeof(num));
}