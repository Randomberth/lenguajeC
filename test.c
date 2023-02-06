#include<stdio.h> // necesaria para printf

void intercambio(int*, int*); /*prototipo de la función*/

int main ()
{
    int a = 20,b = 30;
    intercambio(&a, &b); /*a y b son pasados por referencia*/
    printf("\na vale : %d y b vale : %d\n\n", a, b);
}

void intercambio(int *x, int *y)
{
    int z = *x; /* z = contenido de la dirección x*/
    *x = *y;    /*contenido de x = contenido de y*/
    *y = z;     /*contenido de y = z */
}
     
