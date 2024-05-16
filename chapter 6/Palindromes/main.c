#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

int i;

int testPalindrome(const char a[],int coun);


int main(){

    char word[SIZE];
    int counter;

    printf("Enter a string(to test if palindrome): ");
    scanf("%s",word);

    for(counter=0;word[counter]!='\0';counter++);

    if(testPalindrome(word,counter-1)){

        printf("The string '%s' is a palindrome!!\n",word);
    }
    else{
        printf("The string '%s' is not a palindrome!!\n",word);
    }

    return 0;
}
int testPalindrome(const char a[], int count){

    if(i==count){
        return 1;
    }
    else if(a[i]==a[count]){
        ++i;
        testPalindrome(a,--count);
    }
    else{
        return 0;
    }
}
