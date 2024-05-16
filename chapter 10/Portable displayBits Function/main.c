#include <stdio.h>
#include <stdlib.h>

void displayBits(unsigned value);

int main(){

    unsigned x;

    printf("Enter an unsigned integer: ");
    scanf("%u",&x);
    displayBits(x);

    return 0;
}
void displayBits(unsigned value){

    unsigned i;

    unsigned displayMask;

    if(sizeof(int)==4){
        displayMask=1<<31;
    }
    else{
        displayMask=1<<15;
    }

    printf("%10u = ",value);

    for(i=1;i<=sizeof(int)*8;i++){
        putchar(value&displayMask?'1':'0');
        value<<=1;

        if(i%8==0){
            putchar(' ');
        }
    }
    putchar('\n');
}
