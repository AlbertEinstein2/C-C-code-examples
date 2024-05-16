#include <stdio.h>
#include <stdlib.h>

int main(){

    int number,factorial=1;
    int controller;

    printf("Enter a number to see its factorial(n!): ");
    scanf("%d",&number);

    controller=number;

    if(number==0){
        printf("\nThe factorial(%d!) is %d\n\n",controller,factorial);
    }
    else{
        while(number!=1){

            factorial*=number--;

        }

        printf("\nThe factorial(%d!) is %d\n\n",controller,factorial);
    }




    return 0;
}
