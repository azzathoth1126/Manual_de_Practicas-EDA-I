//Apuntador a arreglo - Código
#include <stdio.h>

/*    Este programa crea un apuntador de tipo entero que apunta al inicio de un arreglo.    */

int main () {
    short arr[5], *apArr;
    apArr = &arr[0];

    // imprime la dirección de memoria del arreglo en la posición [0]
    printf("Dirección del arreglo en la primera posición: %p\n",&arr[0]);

    // imprime la dirección de memoria del arreglo
    // (el nombre del arreglo es un apuntador)
    printf("Dirección del arreglo: %p\n",&arr);

    // imprime la dirección de memoria del apuntador apArr
    printf("Dirección del apuntador: %p\n",apArr);

    return 0;
}