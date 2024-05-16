#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main(){

    double total=0;
    char numbers[SIZE];
    char *ptr;

    printf("Enter 4 numbers(space between each): ");

    fgets(numbers,SIZE,stdin);

    ptr=strtok(numbers," ");

    while(ptr!=NULL){
        total+=atof(ptr);
        ptr=strtok(NULL," ");
    }

    printf("the total is %f\n",total);


    return 0;
}
