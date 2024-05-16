#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    int i=0;
    char array[100]="";

    fgets(array,100,stdin);

    putchar('\n');
    printf("In lowercase:  ");
    while(array[i]!='\0'){

        putchar(tolower(array[i++]));
    }
    printf("In uppercase:  ");

    i=0;
    while(array[i]!='\0'){
        putchar(toupper(array[i++]));
    }



    return 0;
}
