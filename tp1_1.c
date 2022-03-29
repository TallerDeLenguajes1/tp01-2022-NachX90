#include <stdio.h>
void main(){
    printf("Hola Mundo\n");
    int year, *p_year;
    year = 2022;
    p_year = &year;
    printf("Contenido del puntero: %i\n", *p_year);
    printf("Direccion de memoria almacenada por el puntero: %p\n", p_year);
    printf("Direccion de memoria de la variable: %p\n", &year);
    printf("Direccion de memoria del puntero: %p\n", &p_year);
    printf("Tamanio de memoria utilizado por la variable: %d bytes", sizeof(year));
}