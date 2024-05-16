#include <stdio.h>
#include <stdlib.h>

int main(){

    int num,read,smallest;
    int counter;

    printf("Enter a number: ");
    scanf("%d",&read);

    smallest=read*100;

    for(counter=1;counter<=read;counter++){

        num=counter*100;

        if(smallest>num){
            smallest=num;
        }
    }
    printf("the smallest is: %d",smallest);

    return 0;
}
