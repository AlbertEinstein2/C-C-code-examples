#include <stdio.h>
#include <stdlib.h>

int main(){


    int number;

    printf("Enter a 5-digit integer: ");
    scanf("%d",&number);

    if((number/10000)%10==number%10){
        if((number/1000)%10==(number/10)%10){

            printf("This number is a palindrome!!\n\n");
        }

    }
    else{
            printf("This number is NOT a palindrome!!\n\n");
        }



	return 0;
}
