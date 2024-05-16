#include <stdio.h>
#include <stdlib.h>

int main(){

    int number,
        digit,
        counter=0;



    printf("Enter a number: ");
    scanf("%d",&number);

    while(number%10!=0){

        digit=number%10;
        number/=10;

        if(digit==7){
            counter++;
        }

    }
    printf("\nThe number of 7s: %d\n\n",counter);

    return 0;
}
