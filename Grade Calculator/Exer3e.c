#include <stdio.h>

int main (){

    int n,x,i, sum;
    float avg;

    scanf("%d", &n);

    for (i=0; i<n; i++){
        scanf("%d", &x);
        sum=sum+x;
    }

    avg = (float)sum/n;

    printf("Avg: %.2f\n", avg);
    if (avg>=92){
        printf ("Grade: A");
    }else if (avg>=88){
        printf ("Grade: B+");
    }else if (avg>=84){
        printf ("Grade: B");
    }else if (avg>=80){
        printf ("Grade: C+");
    }else if (avg>=76){
        printf ("Grade: C");
    }else if (avg>=72){
        printf ("Grade: D");
    }else if (avg<72){
        printf ("Grade: F");
    }
}
