#include <stdio.h>

//DECLARACIONES
int cuadradoConReturn(int *p_x);
void cuadradoConVoid(int *p_x);
void invertir(int *p_a, int *p_b);
void orden(int *p_n1, int *p_n2);

//FUNCION MAIN
void main(){
    int x, y, resultado, *p_x = &x, *p_resultado = &resultado;
    int a, b, *p_a = &a, *p_b = &b;
    int n1, n2, *p_n1 = &n1, *p_n2 = &n2;
    printf("========BIENVENIDO========");
    printf("\nIngrese un numero para calcular su cuadrado: ");
    scanf("%i", &x);
    printf("==========================");
    printf("\nValores de la funcion con return:");
    resultado = cuadradoConReturn(p_x);
    printf("\n   El cuadrado de x es: %i", *p_resultado);
    printf("\n   La direccion de memoria del cuadrado de x es: %p", p_resultado);
    printf("\n   NOTA: El cuadrado y su direccion de memoria se conservan luego de abandonar la funcion cuadradoConReturn.");
    printf("\n==========================");
    printf("\nValores de la funcion con void:");
    cuadradoConVoid(&x);
    printf("\n   NOTA: El cuadrado y su direccion de memoria se pierden luego de abandonar la funcion cuadradoConVoid.");
    printf("\n==========================");
    printf("\n==========================");
    printf("\nIngrese dos numeros para invertir su orden:");
    printf("\n   a: ");
    scanf("%i", &a);
    printf("   b: ");
    scanf("%i", &b);
    printf("==========================");
    printf("\nNumeros invertidos:");
    invertir(p_a, p_b);
    printf("\n   Ahora a vale: %i", *p_a);
    printf("\n   Ahora b vale: %i", *p_b);
    printf("\n   NOTA: Los valores fueron modificados para todo el programa.");
    printf("\n==========================");
    printf("\n==========================");
    printf("\nIngrese dos numeros a ser ordenados:");
    printf("\n   1: ");
    scanf("%i", &n1);
    printf("   2: ");
    scanf("%i", &n2);
    printf("==========================");
    printf("\nNumeros ordenados:");
    orden(p_n1, p_n2);
    printf("\n   Ahora 1 vale: %i", *p_n1);
    printf("\n   Ahora 2 vale: %i", *p_n2);
    printf("\n   NOTA: Los valores fueron modificados para todo el programa.");
    printf("\n===========FIN============");
}

//DEFINICIONES
int cuadradoConReturn(int *p_x)
{
    return (*p_x)*(*p_x);
}

void cuadradoConVoid(int *p_x)
{
    int resultado, *p_resultado = &resultado;
    resultado = (*p_x)*(*p_x);
    printf("\n   El cuadrado de x es: %i", *p_resultado);
    printf("\n   La direccion de memoria del cuadrado de x es: %p", p_resultado);
}

void invertir(int *p_a, int *p_b){
    int c, *p_c = &c;
    *p_c = *p_a;
    *p_a = *p_b;
    *p_b = *p_c;
}

void orden(int *p_n1, int *p_n2)
{
    if (*p_n1 > *p_n2)
    {
        invertir(p_n1, p_n2);
    }
}