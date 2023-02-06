#include<stdio.h>
#include<math.h>

int main(){

    char numero[4];

    printf("\n Ingrese un número de cuatro dígitos: \n\n");
    scanf("%s", numero);  

    printf("\n %c \n", numero[0]);
    printf(" %c \n", numero[1]);
    printf(" %c \n", numero[2]);
    printf(" %c \n \n", numero[3]);
    


    return 0;
}