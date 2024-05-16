#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){

    char line[1000]="";
    char key[20]="";
    char *searchPtr="";

    puts("Enter a line:");
    fgets(line,1000,stdin);
    puts("Enter a string to search:");
    scanf("%19s",key);

    /*  for first occurence of the string scaned in key  */
    searchPtr=strstr(line,key);
    printf("First %s is found in %s",key,searchPtr);

    /*  for second occurence of the string scaned in key  */
    searchPtr=strstr(searchPtr+1,key);
    printf("Second %s is found in %s",key,searchPtr);

    return 0;
}
