#include <stdio.h>
#include <stdlib.h>

unsigned packCharacters(char c1,char c2);
void displayBits(unsigned value);

int main(){

    char x,y;
    unsigned result=0;

    puts("Enter two characters: ");
    scanf("%c %c",&x,&y);

    printf("\nBefore packing\n\n");

    printf("\'%c\' in bits as an unsigned integers is:\n\t\t\t\t",x);
    displayBits(x);
    printf("\'%c\' in bits as an unsigned integers is:\n\t\t\t\t",y);
    displayBits(y);

    result=packCharacters(x,y);

    printf("\After packing\n");
    printf("\n\'%c\' and \'%c\' packed in an unsigned integer:\n",x,y);

    printf("Packed unsigned result:\n\t\t\t\t");
    displayBits(result);

    return 0;
}
unsigned packCharacters(char c1,char c2){

    unsigned pack=c1;

    pack<<=8;
    pack|=c2;
    return pack;
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
