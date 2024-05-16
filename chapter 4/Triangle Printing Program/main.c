#include <stdio.h>
#include <stdlib.h>

int main(){

    int row,column;
    int num=4;

    printf("A\)\n\n");
    for(row=1;row<=num;row++){
        for(column=1;column<=row;column++){
            printf("*");
        }
        printf("\n");
    }

    printf("B\)\n\n");
    for(row=num;row>=1;row--){
        for(column=1;column<=row;column++){
            printf("*");
        }
        printf("\n");

    }

    printf("C\)\n\n");
    for(row=1;row<=num;row++){
        for(column=1;column<=num;column++){
            if(column<row){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }

    printf("D\)\n\n");
    for(row=num;row>=1;row--){
        for(column=1;column<=num;column++){
            if(column<row){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
