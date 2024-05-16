#include <stdio.h>
#include <stdlib.h>

int main(){

    int counter=1,
        number,
        largest;


    while(counter<=10){

        printf("Enter a number: ");
        scanf("%d",&number);

        if(counter==1)
            largest=number;

        if(largest<number)
            largest=number;

        counter++;
    }
    printf("The largest number is %d",largest);

    return 0;
}
