#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main(){

    size_t i;
    int checker;
    char s1[SIZE]="";
    char s2[SIZE]="";

    puts("Enter first string:");
    fgets(s1,SIZE,stdin);
    puts("Enter second string:");
    fgets(s2,SIZE,stdin);
    puts("Enter how many letter you wish get compared: ");
    scanf("%d",&i);

    checker=strncmp(s1,s2,i);
    if(checker==0){
        printf("The result of comprasion: %d (strings are equal(same))\n",checker);
    }
    else if(checker<0){
        printf("The result of comprasion: %d(s1<s2)\n",checker);
    }
    else{
        printf("The result of comprasion: %d(s1>s2)\n",checker);
    }
    return 0;
}
