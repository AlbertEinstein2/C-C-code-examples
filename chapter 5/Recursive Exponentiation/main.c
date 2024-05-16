#include <stdio.h>
#include <stdlib.h>

int power (int base,int exponent);


int main(){

    int x,y;

    printf("Enter base and exponent:");
    scanf("%d%d",&x,&y);

    printf("The %dth power of base %d is %d",y,x,power(x,y));

    return 0;
}
int power (int base,int exponent){


    if (exponent==0){
        return 1;
    }
    else if(exponent==1){
        return base;
    }
    else {
        return (base*power(base,exponent-1));
    }
}
