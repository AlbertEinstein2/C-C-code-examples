#include <stdio.h>
#include <stdlib.h>

int main(){

    int counter=0,sum=0;
    int number;

    printf("************************** SUM WIWH SENTINEL VALUE **************************\n\n");

    for(;number!=9999;){

        printf("Enter a number (9999 to exit): ");
        scanf("%d",&number);

        sum+=number;
        counter++;
    }
    printf("\nThe average: %d",sum/counter);

    printf("\n\n\n************************** SUM WIWHOUT SENTINEL VALUE **************************\n\n");

    sum = counter = number = 0;

    while(number!=9999){

        printf("Enter a number (9999 to exit): ");
        scanf("%d",&number);

        if(number!=9999){

            sum+=number;
            counter++;
        }
    }
    printf("\nThe average: %d\n\n",sum/counter);

    return 0;
}
