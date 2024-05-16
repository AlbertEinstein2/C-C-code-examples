#include <stdio.h>
#include <stdlib.h>

void unpackCharacters(unsigned num,char *c1,char *c2);
void displayBits(unsigned value);

int main(){

    unsigned result=0;
    char x,y;

    puts("Enter the unsigned number to unpack: ");
    scanf("%u",&result);

    printf("\nPacked unsigned number you've entered:\n\t\t\t\t");
    displayBits(result);

    unpackCharacters(result,&x,&y);

    printf("\nThe unpacked characters are \'%c\' and \'%c\':\n\t\t\t\t",x,y);
    displayBits(x);
    printf("\t\t\t\t",x,y);
    displayBits(y);

    return 0;
}
void unpackCharacters(unsigned num,char *c1,char *c2){

    unsigned mask1=65280;
    unsigned mask2=255;

    *c1=(num&mask1)>>8;
    *c2=num&mask2;
}
void displayBits(unsigned value){

    unsigned c;

    unsigned displayMask=1<<15;

    printf("%10u = ",value);

    for(c=1;c<=16;c++){
        putchar(value&displayMask?'1':'0');
        value<<=1;

        if(c%8==0){
            putchar(' ');
        }
    }
    putchar('\n');
}
