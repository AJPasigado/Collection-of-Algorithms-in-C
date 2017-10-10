#include <stdio.h>

int main(){
    int size;
    int x, y;
    int c1, c2;

    printf("Size of star: ");
    scanf("%d", &size);

    /* draw the top half of the star */
    for(x = 0, y = size; x<=y; x++, y--) {
        for(c1=0; c1<x; c1++)
            printf(" ");
        printf("*");
        for(c2=x; c2<y; c2++)
            printf(" ");
        printf("*");
        printf("\n");
    }

    /* draw the bottom half */
    for(; x>0; x--, y++) {
        for(c1=0; c1<x; c1++)
            printf(" ");
        printf("*");
        for(c2=x; c2<y; c2++)
            printf(" ");
        printf("*");
        printf("\n");

    }

}
