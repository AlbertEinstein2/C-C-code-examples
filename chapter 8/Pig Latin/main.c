#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printLatinWord(const char *word);

int main(){

    char phrase[30]="put down that jump the";

    char *ptr;

    ptr=strtok(phrase," ");

    while(ptr!=NULL){
//printf( "%s=", ptr );
        printLatinWord(ptr);
        ptr=strtok(NULL," ");
    }



    return 0;
}
void printLatinWord(const char *word){

    char temp[20];

    strcpy(temp,word);
    strncat(temp,&word[0],1);
    memmove(temp,&temp[1],strlen(temp));
    strcat(temp,"ay");
    strcat(temp," ");

    printf("%s",temp);
}
