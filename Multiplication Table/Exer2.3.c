#include <stdio.h>

int main (){
    int x,y,z;

    for (x=0; x<=12; x++){
        for (y=0; y<=12; y++){
            z=x*y;
            printf ("%d x %d = %d \n", x, y, z);
        }
    }
}
