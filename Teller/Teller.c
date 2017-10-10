#include <stdio.h>

int main (){
    float money;
    int thou;
    int fiveh;
    int twoh;
    int oneh;
    int fifty;
    int twenty;
    int ten;
    int five;
    int one;
    int twentyfivecents;
    int tencents;
    int fivecents;

    printf("Enter amount: ");
    scanf("%f", &money);

    printf("============================\n");

        if(money>=1000){
            thou=money/1000;
            printf("%d x P1000", thou);
            money=money-(thou*1000);
            printf("\n");
        }
        if(money>=500){
            fiveh=money/500;
            printf("%d x P500", fiveh);
            money=money-(fiveh*500);
            printf("\n");
        }
        if(money>=200){
            twoh=money/200;
            printf("%d x P200", twoh);
            money=money-(twoh*200);
            printf("\n");
        }
        if(money>=100){
            oneh=money/100;
            printf("%d x P100", oneh);
            money=money-(oneh*100);
            printf("\n");
        }
        if(money>=50){
            fifty=money/50;
            printf("%d x P50", fifty);
            money=money-(fifty*50);
            printf("\n");
        }
        if(money>=20){
            twenty=money/20;
            printf("%d x P20", twenty);
            money=money-(twenty*20);
            printf("\n");
        }
        if(money>=10){
            ten=money/10;
            printf("%d x P10", ten);
            money=money -(ten*10);
            printf("\n");
        }
        if(money>=5){
            five=money/5;
            printf("%d x P5", five);
            money=money -(five*5);
            printf("\n");
        }
        if(money>=1){
            one=money/1;
            printf("%d x P1", one);
            money=money -(one*1);
            printf("\n");
        }
        if(money>=.25){
            twentyfivecents=money/.25;
            printf("%d x 25c", twentyfivecents);
            money=money -(twentyfivecents*.25);
            printf("\n");
        }
        if(money>=.10){
            tencents=money/.10;
            printf("%d x 10c", tencents);
            money=money -(tencents*.10);
            printf("\n");
        }
        if(money>=.05){
            fivecents=money/.05;
            printf("%d x 5c", fivecents);
            money=money -(fivecents*.1);
            printf("\n");
        }

}
