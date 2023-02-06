#include <stdio.h>
/*imprime la tabla Fahrenheit-Cesius
  para fahr = 0, 20, ..., 300*/
  int main ()
  {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /*limite inferior de la tabla temperaturas*/
    upper = 300; /*limite superior*/
    step = 20; /*tamaño del incremento*/

    celsius = lower;
    printf("\n      Celsius   |  Fahrenheit\n\n");
    while (celsius <= upper) {
        fahr = (celsius * 1.8) + 32.0;
        printf("    %3.0f \t|    %6.1f  |\n",celsius, fahr);
        celsius = celsius + step;
    }
    printf("̣_____________________________|\n\n");
  }
