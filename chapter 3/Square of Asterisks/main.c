#include <stdio.h>
#include <stdlib.h>

int main(){

    int side;
    int row=1 ,
        column=1 ;

        printf("Enter side of square: ");
        scanf("%d",&side);

        printf("\n\n");

    while(row<=side){

        column=1;
        while(column<=side){
            printf("*");
            column++;
        }
        row++;
        printf("\n");
    }



    return 0;
}
