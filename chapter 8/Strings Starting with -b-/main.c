#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char strings[100];
    char *ptr;
    register int counter=0;

    puts("Enter a series of strings:");
    gets(strings);

    ptr=strtok(strings," ");

    while(ptr!=NULL){
        if(ptr[0]=='b'){
            ++counter;
        }
        ptr=strtok(NULL," ");
    }
    printf("The number of letter which begins with 'b' is %d\n",counter);

    return 0;
}
