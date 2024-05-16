#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,row,column;
    int num=10;


    for(row=num;row>=1;row--){
        for(column=1;column<=num;column++){
            if(column<row){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        for(column=10;column>row;column--){
            printf("*");
        }
        printf("\n");
    }
    for(row=1;row<num;row++){
        printf(" ");
        for(column=1;column<num-1;column++){
            if(column<row){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        for(column=10;column>row;column--){
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n\n\n");


    return 0;
}
