#include <stdio.h>

int main (){
    int x,y,z;

    for (x=1;x<=12;x++){
        for (y=1; y<=6; y++){
                z=x*y;
                printf ("%d x %d = %d \t", y, x,z);
                }
                printf ("\n");
    }
    printf ("\n");

    for (x=1;x<=12;x++){
        for (y=7; y<=12; y++){
                z=x*y;
                printf ("%d x %d = %d \t", y, x,z);
                }
                printf ("\n");
    }

}
