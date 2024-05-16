#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){

    char text[3][100];
    int i;
    char *ptr;
    register int counter=0;


    puts("Enter three lines of text:");
    for(i=0;i<3;i++){
        gets(&text[i][0]);
    }


    for(i=0;i<3;i++){

        ptr=strtok(&text[i][0]," ");
        while(ptr!=NULL){
            counter++;
            ptr=strtok(NULL," ");
        }

    }
    printf("The total number of words is %d\n",counter);




    return 0;
}
