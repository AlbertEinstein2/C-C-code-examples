#include <stdio.h>
#include <stdlib.h>

#define SIZE 20


void stringReverse(const a[],int count);


int main(){

    int array[SIZE];
    int counter;

    printf("Enter a string: ");
    scanf("%s",array);

    for(counter=0;array[counter]!='\0';counter++);
    printf("%s",array);
    printf("\n%d\n\n",counter);

    stringReverse(array,counter);

    return 0;
}
void stringReverse(const a[],int count){


    if(a[count]=='\0'){
        return ;
    }
    else{
         stringReverse(a,--count);

    }printf("%c",a[count]);
}
