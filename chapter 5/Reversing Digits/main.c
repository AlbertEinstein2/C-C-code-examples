#include <stdio.h>
#include <stdlib.h>

int reverse(int number);

int main(){

    int x;

    printf("Enter a number:");
    scanf("%d",&x);

    printf("The reverse of the number(%d): %d\n",x,reverse(x));

    return 0;
}
int reverse(int number){

    int num,revrse,digit;
    int y=1;
    num=number;
    while(num!=0){
        num/=10;
        y*=10;
    }
    num=number;
    while(num!=0){

        digit=num%10;
        num/=10;

        if(y!=1){
            y/=10;
            revrse+=digit*y;
        }
    }
    return revrse;

}
