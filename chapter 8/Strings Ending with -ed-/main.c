#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char strings[100];
    char *ptr;
    register int counter=0,i;


    puts("Enter a series of strings:");
    gets(strings);

    ptr=strtok(strings," ");



    while(ptr!=NULL){
        for(i=0;*(ptr+i)!=NULL;i++);
        if(ptr[--i]=='d'){
            if(ptr[--i]=='e'){
                ++counter;
            }
        }
        ptr=strtok(NULL," ");
    }
    printf("The number of letter which ends with 'ed' is %d\n",counter);

    return 0;
}
