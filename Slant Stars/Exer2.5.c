#include <stdio.h>

int main (){
    int x,y,length;

    printf("Length:");
    scanf("%d", &length);

    for (x=1; x<=length; x++){
        printf("*\n");
        for (y=0; y<x; y++){
            printf(" ");
        }
    }
    printf("*");
}
