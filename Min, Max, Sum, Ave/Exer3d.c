#include <stdio.h>

int main (){

    int n,x,i,max,min;
    int sum=0;
    float avg;

    scanf ("%d",&n);

    scanf("%d",&x);

    max=x;
    min=x;
    sum = sum + x;

    for (i=0; i<n-1; i++){
    scanf("%d",&x);
            if (x>max)
                max=x;
            if (x<min)
                min=x;
            sum =sum+x;
    }
    avg = (float)sum/n;

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    printf("Sum: %d\n", sum);
    printf("Avg: %.2f", avg);

}
