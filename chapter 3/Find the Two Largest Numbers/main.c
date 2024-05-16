#include <stdio.h>
#include <stdlib.h>

int main(){

    int counter=1,
        number,
        largest,
        second;


    while(counter<=10){

        printf("Enter a number: ");
        scanf("%d",&number);

        if(counter==1){
            largest=number;
            second=number;
        }
        if(largest<number){
            second=largest;
            largest=number;
        }
        else if(second<number){
            second=number;
        }
        counter++;
    }
    printf("The largest number is %d\n",largest);
    printf("The second number is %d\n\n",second);

    return 0;
}
