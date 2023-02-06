#include<stdio.h>
#include<math.h>

int main () {

    float distancia, minutos, segundos, centesimas, tiempo_segundos, velocidad_ms, velocidad_kh;

    printf("\n Ingrese la distancia recorrida \n\n");
    scanf("%f", &distancia);
    printf("\n Ingrese la cantidad de minutos \n\n");
    scanf("%f", &minutos);
    printf("\n Ingrese la cantidad de segundos \n\n");
    scanf("%f", &segundos);
    printf("\n Ingrese la cantidad de centesimas \n\n");
    scanf("%f", &centesimas);


    tiempo_segundos = (minutos * 60) * segundos * (centesimas/100);
    velocidad_ms = distancia / tiempo_segundos;
    velocidad_kh = (velocidad_ms *3600) / 1000;

    printf("\n La velocidad es %f Km/h \n\n", velocidad_kh);
    printf("\n La velocidad es %f m/s \n\n", velocidad_ms);
    printf("\n El tiempo es %f seg \n\n", tiempo_segundos);
    
    
    

    return 0;

}