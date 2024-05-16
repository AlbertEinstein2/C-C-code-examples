#include <stdio.h>
#include <stdlib.h>

int main(){

    int side;
    int row=1 ,
        column=1 ;                // x for vertical, y for horizontal

        printf("Enter side of square: ");
        scanf("%d",&side);

        printf("\n\n");

    while(row<=side){

        column=1;

        if(row==1){

            while(column<=side){
                printf("*");
                column++;
            }
        }
        else if(row==side){

            while(column<=side){
                printf("*");
                column++;
            }
        }
        else{
            while(column<=side){

                if(column==1){
                    printf("*");
                }
                else if(column==side){
                    printf("*");
                }
                else{
                    printf(" ");
                }
                column++;
            }
        }
        row++;
        printf("\n");
    }



    return 0;
}
