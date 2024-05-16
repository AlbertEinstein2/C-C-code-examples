#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(){

    int i,j=0;

    start:
        i=0;
        if(j==0){
            start1:
                printf("*");
                if(++i<SIZE)
                    goto start1;
        }
        else if(j!=0&&j!=SIZE){
            printf("*");
            start2:
                printf(" ");
                if(++i<SIZE-2)
                    goto start2;
            printf("*");
        }
        j++;
        printf("\n");
        if(j<SIZE-1){
            goto start;
        }
        else{
            i=0;
            start3:
                printf("*");
                if(++i<SIZE)
                    goto start3;
        }
    printf("\n\n");
    return 0;
}
