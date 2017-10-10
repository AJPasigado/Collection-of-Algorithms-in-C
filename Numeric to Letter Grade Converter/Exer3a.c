#include <stdio.h>

int main (){
    int x;

    printf("Enter grade:");
    scanf("%d", &x);;

    if (x>=92){
        printf("A");
    }else if (x>=88){
        printf("B+");
    }else if (x>=84){
        printf("B");
    }else if (x>=80){
        printf("C+");
    }else if (x>=76){
        printf("C");
    }else if (x>=72){
        printf("D");
    }else if (x<=71){
        printf("F");
    }
}
