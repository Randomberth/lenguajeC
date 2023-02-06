#include<stdio.h>

int main (){

    int a = 0, b = 0 , c = 0;
    a = 5;
    b = 4;

    c = (a = 6, b + 10);

    printf("\n resultado opearador coma : %d \n\n", c);

}