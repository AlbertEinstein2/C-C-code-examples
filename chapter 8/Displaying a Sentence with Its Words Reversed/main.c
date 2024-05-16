#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseTok(char *a);

int main(){

    char line[50]="";

    gets(line);

    reverseTok(line);


    return 0;
}
void reverseTok(char *a){

    char *ptr;
    char *holder[15]={0};
    int i=1;

    ptr=strtok(a," ");

    while(ptr!=NULL){
        holder[i++]=ptr;
        ptr=strtok(NULL," ");
    }
    for(i--;holder[i]!=NULL;i--){
        printf("%s ",holder[i]);
    }

}
