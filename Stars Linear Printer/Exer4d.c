#include <stdio.h>

int main (){
    int array[100];
    int n, i, j;

    scanf ("%d", &n);
    for (i=0; i<n; i++){
        scanf ("%d", &array[i]);
    }
    for (i=0; i<n; i++){
        for (j=0; j<array[i]; j++){
            printf("*");
        }
        printf("\n");
    }
}
