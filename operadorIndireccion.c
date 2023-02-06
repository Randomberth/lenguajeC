#include<stdio.h>

int main (){

    int *px, x = 7, y = 0; // px es un puntero a un valor entero.
    px = &x; // en el punterro px se almacena la dirección del entero x
    y = *px; // en y se almacena el valor localizado en la dirección almacenada en px.

    printf("\n dirección de memoria : %p, dato : %d \n\n", &x, x);   
    printf("\n dirección de memoria : %p, dato : %d \n\n", px, *px);   
     
}