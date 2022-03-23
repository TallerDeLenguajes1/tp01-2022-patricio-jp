#include <stdio.h>

int cuadradoDeUnNumero(int num);
void cuadradoNumero(int *numero);
void infoVariable(int variable);
void invertir(int *a, int *b);
void orden(int *a, int *b);

void main() {
    int numeroA = 4, numeroB = 5;
    int *puntA = &numeroA;
    int *puntB = &numeroB;

    printf("=== Apartado a) ===\n");
    printf("Ingrese un numero: ");
    scanf("%d", puntA);
    printf("Cuadrado de un numero (funcion con retorno): %d\n", cuadradoDeUnNumero(numeroA));

    printf("=== Apartado b) ===\n");
    printf("Ingrese un numero: ");
    scanf("%d", puntA);
    cuadradoNumero(puntA);
    printf("Cuadrado de un numero (funcion tipo void): %d\n", numeroA);

    printf("=== Apartado c) ===\n");
    infoVariable(numeroA);

    printf("=== Apartado d) ===\n");
    printf("A: %d - B: %d\n", numeroA, numeroB);
    invertir(puntA, puntB);
    printf("A: %d - B: %d\n", numeroA, numeroB);

    printf("=== Apartado e) ===\n");
    printf("Ingrese numero A: ");
    scanf("%d", puntA);
    printf("Ingrese numero B: ");
    scanf("%d", puntB);
    printf("A: %d - B: %d\n", numeroA, numeroB);
    orden(puntA, puntB);
    printf("A: %d - B: %d\n", numeroA, numeroB);
}

int cuadradoDeUnNumero(int num) {
    return (num * num);
}

void cuadradoNumero(int *numero) {
    *numero *= *numero;
}

void infoVariable(int variable) {
    printf("Direccion de memoria de la variable: %p\n", &variable);
    printf("Contenido de la variable: %d\n", variable);
}

void invertir(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b) {
    if (*a > *b) {
        invertir(a, b);
    }
}