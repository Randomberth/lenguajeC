#include <stdio.h>

int main(){

    int i, c, esp;

    for (i = 0; ((c = getchar()) != EOF); ++i)
    {
        if (c == 9){
            printf("\\t");
        }
        else if (c == 92){
            printf("\\\\");
        }
        else if (c == 8){
            printf("\\b");
            esp = 0;
        }
        else {
            putchar(c);
            esp = c;
        }

        //putchar(c);
    }
    
}
