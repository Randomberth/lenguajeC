#include<stdio.h>

int main(){

    /*long nc;
    nc=0;

    while(getchar() != EOF){
        ++nc;
        printf("%d --",EOF);
    }
    printf("%ld\n", nc);*/

    // otra versión usando el for

    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
 //       ;
    printf("%.0f\n",nc);

    
}