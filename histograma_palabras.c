#include<stdio.h>


int main()
{
    int i, c, j, esp, suma_letra, suma_palabra;
    suma_letra = 0;
    suma_palabra = 0;
    esp = 0;

  
printf(" \n se calculará cuantas letras hay en cada palabra.. nota!! dejar un espacio sin punto al final de la frase \n \n");

    for (i = 0; ((c = getchar()) != EOF); ++i){
        if (esp == 32){
            esp = 0;
        }
        if(c == 32){
            esp = c;
            ++suma_palabra;
            printf("\t\t\t%d letras\t", suma_letra);
            for (j = 1; j < suma_letra; ++j){
                printf("+++");
            }
            printf("\n");
            suma_letra = 0;
        }
        if(c != 32 && c !='\n'){
            ++suma_letra;
            putchar(c);
        }
    }

    printf ("\n hay %d palabras \n",(suma_palabra));


    
}
