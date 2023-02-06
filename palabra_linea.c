#include<stdio.h>


int main()
{
    int i, c, esp;

    while((c =getchar()) != EOF){
        
        if (esp == 32){
            putchar('\n');
            esp = 0;
        }
        if(c == 32){
            esp = c;
        }
        putchar(c);
    }
}