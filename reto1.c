#include <stdio.h>

#define B 255
// calcular espacios en blanco

int main() {
    int esp, i, nl, tab;
    i = 0;
    nl = 0;
    tab = 0;
    while((esp = getchar()) != EOF){
        if (esp == '\n')
            ++nl;
        if (esp == '\t')
            ++tab;
        if (esp == 32)
            ++i;
       
            
    }
    printf("Nuevas Lineas : %d\n", nl);
    printf("Tabuladores : %d\n", tab);
    printf("Espacios en blanco : %d\n", i);
}