#include<stdio.h>
#include<math.h>

int main(){

    long int cantidad_dias, cantidad_segundos;

    printf("\n Ingrese el número de días \n\n");
    scanf("%ld", &cantidad_dias);

    cantidad_segundos = cantidad_dias * 86400;

    printf("\n Hay %ld segundos en %ld días \n\n", cantidad_segundos, cantidad_dias);


    return 0;
}