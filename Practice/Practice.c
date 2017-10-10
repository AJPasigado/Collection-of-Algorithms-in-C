#include <stdio.h>

int main (){
    int x;

    printf("Enter grade:");
    scanf("%d", &x);

    if (x>=75){
        printf("You passed!");
    }else if (x<=74){
        printf("You failed!");
    }

}
