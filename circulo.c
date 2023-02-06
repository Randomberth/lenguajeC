#include <stdio.h>
#include <math.h>

int main(){

    float radio_circulo, area_circulo, longitud_circulo;
    
    
    printf("\nIngrese el radio del circulo\n\n");
    scanf("%f", &radio_circulo);
    
    area_circulo = 3.1416 * radio_circulo * radio_circulo;
    longitud_circulo = 2 * 3.1416 * radio_circulo;

    printf("\n El área del circulo es: %8.2f \n\n", area_circulo);
    printf("\n La longitud circulo es: %8.2f \n\n", longitud_circulo);
    
    return 0;
}