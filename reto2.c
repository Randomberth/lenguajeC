#include <stdio.h>

// programa que corrije la cantidad de espoacios en un texto

int main(){
    int c,i, esp;
    i = 0; 
    esp = 0;

    for (i = 0; ((c = getchar()) != EOF); ++i){

        if ((c == 32) && (esp == 32)){}
        else {putchar(c);}
        esp = c;

    }
    
    return 0;
}


    
    
  