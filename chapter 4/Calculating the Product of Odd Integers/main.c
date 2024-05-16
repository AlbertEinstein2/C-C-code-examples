#include <stdio.h>
#include <stdlib.h>

int main(){

    int product=1,num;

    for(num=1;num<=15;num+=2){
        product*=num;
    }




    printf("the product of odd number between 1-15 is %d\n\n",product);
    return 0;
}
