#include <stdio.h>
#include <stdlib.h>

int integerPower(int base,unsigned exponent);


int main(){

    int x,y;

    printf("Enter base and exponent: ");
    scanf("%d%d",&x,&y);


    printf("The power is %d",integerPower(x,y));


    return 0;
}
int integerPower(int base,unsigned exponent){

    int pow=1,counter;

    if(exponent==0){
        return 1;
    }
    else if(base==0){
        return 0;
    }
    else{
        for(counter=1;counter<=exponent;counter++){

            pow*=base;
        }
        return pow;
    }



}
