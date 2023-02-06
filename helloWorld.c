#include <stdio.h>

int main()
{

    int n1,n2,sum,res,mult;

    printf("\nHello World, este es mi primer programa en C despúes de mucho tiempo\n lest do this!! \n\n");

    printf("Ingrese primer número: \n" );
    scanf("%i",&n1);
    printf("Ingrese segundo número: \n" );
    scanf("%i",&n2);

    sum = n1 + n2;
    res = n1 - n2;
    mult= n1 * n2;

    printf("la suma es : %i \n", sum);
    printf("la resta es : %i \n", res);
    printf("la mutiplicación es : %i \n", mult);

    return 0;
}