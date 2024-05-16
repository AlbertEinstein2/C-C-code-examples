#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main(){

    int total=0;
    char numbers[SIZE];
    char *ptr;

    printf("Enter 4 numbers(space between each): ");

    fgets(numbers,SIZE,stdin);

    ptr=strtok(numbers," ");

    while(ptr!=NULL){
        total+=atoi(ptr);
        ptr=strtok(NULL," ");
    }

    printf("the total is %d\n",total);


    return 0;
}
