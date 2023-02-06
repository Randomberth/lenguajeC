#include <stdio.h>
#include<math.h>


int main() {

    float precio_dolar, dolares, pesos;

    printf("\n Ingrese la tasa de cambio \n\n");
    scanf("%f",&precio_dolar);

    printf("\n ingrese la cantidad de dolares a convertir \n\n");
    scanf("%f",&dolares);

    pesos = precio_dolar * dolares;

    printf("\n %8.2f dolares equivale a %8.2f pesos \n\n", dolares, pesos);



    return 0;
}