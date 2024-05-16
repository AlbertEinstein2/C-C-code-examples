#include <stdio.h>
#include <stdlib.h>

unsigned power2(unsigned num,unsigned pow);
void displayBits(unsigned value);

int main(){

    unsigned x,y,result;

    puts("Enter two number: ");
    scanf("%d%d",&x,&y);
    puts("number:");
    displayBits(x);
    puts("pow:");
    displayBits(y);
    result=power2(x,y);
    printf("\n%u * 2^%u = %u\n",x,y,result);
    displayBits(result);

    return 0;
}
unsigned power2(unsigned num,unsigned pow){

  //  printf("%d*2^%d-->%d\n",num,pow,num*2<<(pow-1));
    return num<<pow;
}
void displayBits(unsigned value){

    unsigned c;

    unsigned displayMask=1<<15;

    printf("%7u = ",value);

    for(c=1;c<=16;c++){
        putchar(value&displayMask?'1':'0');
        value<<=1;

        if(c%8==0){
            putchar(' ');
        }
    }
    putchar('\n');
}
