#include <stdio.h>
#include <stdlib.h>

int main(){

    int j=0;
    char a[20];


    printf("Enter a string: ");
    scanf("%s%n",a,&j);
    printf("The string you've entered:%*s",2*j,a);



    return 0;
}
