#include <stdio.h>

int main (){
    int x;
    int length;
    printf ("Length:");
    scanf ("%d", &length);

    for (x=0; x<length; x++){
        printf ("*");
    }
}

