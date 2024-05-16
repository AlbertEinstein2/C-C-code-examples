#include <stdio.h>
#include <stdlib.h>

int even(int number);

int main(){


    int number;

    while(number!=-1){

        printf("Enter a number: ");
        scanf("%d",&number);

        if(even(number)==1){
            printf("Number is even!\n");
        }
        else{
            printf("Number is odd!\n");
        }
    }
    return 0;
}
int even(int number){

    if(number%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
