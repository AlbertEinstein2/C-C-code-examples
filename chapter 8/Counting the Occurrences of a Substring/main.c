#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){

    char text[3][100];
    char key[20]="";
    char *searchPtr="";
    int counter=0;
    int i;

    puts("Enter three lines of text:");

    for(i=0;i<3;i++){
        gets(&text[i][0]);
    }

    puts("Enter a string to search:");
    scanf("%19s",key);


    for(i=0;i<3;i++){
        searchPtr=&text[i][0];

        while(searchPtr=strstr(searchPtr,key)){
            counter++;
            searchPtr++;
        }
    }
    printf("\nThe total occurrences of \"%s\" in the text is %d\n",key,counter);

    return 0;
}
