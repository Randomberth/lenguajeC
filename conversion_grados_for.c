#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20
/*imprime la tabla Fahrenheit-Cesius
  para fahr = 0, 20, ..., 300*/
  int main ()
  {
    int fahr;
    
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3d %6.1f\n", fahr,(fahr - 32) / 1.8);
    }
  }
