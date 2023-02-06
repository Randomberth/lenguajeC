#include <stdio.h>

int main(){
    int  c, nl, ne, nt;
    nl = 0;

    while((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++nt;
        if (c == '\n')
            ++nl;
    
    printf("%d\n", nl);

}