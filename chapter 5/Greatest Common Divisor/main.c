#include <stdio.h>
#include <stdlib.h>

int GCD (int a,int b);      // GCD= greatest common divisor

int main(){

    int x,y;

    printf("Enter two integer:");
    scanf("%d%d",&x,&y);

    printf("The greatest common divisor is %d",GCD(x,y));

    return 0;
}
int GCD (int a,int b){

    int division=2,greatest_common=1;

    while(division<10){

        if((a%division==0)&&(b%division==0)){
            greatest_common*=division;
        }
        if((a%division!=0)||(b%division!=0)){
            division++;
        }
        else{
            a/=division;
            b/=division;
        }
    }
    return greatest_common;
}
