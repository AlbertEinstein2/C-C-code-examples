#include <stdio.h>
#include <stdlib.h>

int main(){

    int binary;
    int number=0;
    int square=1;
    int digit;
    int counter;


    printf("Enter a binary number: ");
    scanf("%d",&binary);

    while(binary>0){

        digit=binary%10;
        binary/=10;

        number+=(digit*square);
        square*=2;
    }
    printf("The decimal equivalent ot the binary number is %d\n\n",number);

    return 0;
}
