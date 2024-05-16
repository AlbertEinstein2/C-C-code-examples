#include <stdio.h>
#include <stdlib.h>

int main(){

    int counter=3;
    int number;

    printf("A\tA+2\tA+4\tA+6\n\n");

    while(counter<=15){
        printf("%d\t%d\t%d\t%d\t\n",counter,counter+2,counter+4,counter+6);

        counter+=3;

    }



    return 0;
}
