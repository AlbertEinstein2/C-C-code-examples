#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char text[3][100];
    int i;
    char key;
    char *ptr;
    int counter=0;

    puts("Enter three lines of text:");
    for(i=0;i<3;i++){
        gets(&text[i][0]);
    }

    puts("Enter a character to be searched:");
    key=getchar();


    for(i=0;i<3;i++){

        ptr=&text[i][0];
        while(ptr=strchr(ptr,key)){
            counter++;
            ptr++;
        }
    }
    printf("the total number of the chacter(%c) is %d",key,counter);


    return 0;
}
