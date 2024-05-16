#include <stdio.h>
#include <stdlib.h>

void reverseBits(unsigned *a);
void displayBits(unsigned value);


int main(){

    unsigned x;

    puts("Enter a number:");
    scanf("%d",&x);
    puts("\nBefore:");
    displayBits(x);
    puts("After:");
    reverseBits(&x);
    displayBits(x);

    return 0;
}
void reverseBits(unsigned *a){
//    /*
    unsigned x,y;

    x=y=*a;         ///   Algorithm is not working properly
    x>>=9;
    y<<=9;
    *a=x|y;
//   */

     /*
    int i;
    unsigned mask=1,temp=0;

    for(i=0;i<=15;i++){
        temp<<=1;
        temp|=(*a&mask);
        *a>>=1;
    }
    *a=temp;
//    */
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
