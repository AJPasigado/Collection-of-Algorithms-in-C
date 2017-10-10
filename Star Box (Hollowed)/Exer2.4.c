#include <stdio.h>

int main (){
    int x,y, length;
    length=6;

    for (x=0; x<length; x++){
        printf("*");
    }
    printf("\n");
    for (y=0; y<length; y++){
        printf("*    *\n");
    }
    for (x=0; x<length; x++){
        printf("*");
    }
    printf("\n");
}
