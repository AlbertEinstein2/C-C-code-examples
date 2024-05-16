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

    if(b==0){
        return a;
    }
    else {
        return GCD(b,a%b);
    }
}
