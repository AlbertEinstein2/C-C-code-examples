#include <stdio.h>
#include <stdlib.h>

int main(){

    int row=1,
        side,
        column=1;

    printf("Enter a side: ");
    scanf("%d",&side);

    while(column<=side){

        row=1;

        if(column%2==0){
            printf(" ");
        }

        while(row<=side){

            printf("* ");
            row++;
        }


        column++;
        printf("\n");
    }

    return 0;
}
