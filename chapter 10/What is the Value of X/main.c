#include <stdio.h>
#include <stdlib.h>

int multiple(int num);

int main(){

    int y;

    for(y=1;y<=32000;y++){                          //   loop for finding X out
        if(multiple(y)){
            printf("%d is a multiple of X\n",y);
        }
    }
    return 0;
}
int multiple(int num){

    int i;
    int mask=1;
    int mult=1;

    for(i=1;i<=10;i++,mask<<=1){

        if((num&mask)!=0){
            mult=0;
            break;
        }
    }
    return mult;
}
