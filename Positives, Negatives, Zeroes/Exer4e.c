#include <stdio.h>

int main(){
    int n;
    int x;
    int pos=0, neg=0, zer=0;
    int i;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d", &x);
        if (x>0){
            pos=pos+1;
        } else if (x<0){
            neg=neg+1;
        } else if (x==0){
            zer=zer+1;
        }
    }
    printf("Positives: %d\n",pos);
    printf("Negatives: %d\n",neg);
    printf("Zeroes: %d",zer);
}
