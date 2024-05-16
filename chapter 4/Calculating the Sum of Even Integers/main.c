#include <stdio.h>
#include <stdlib.h>

int main(){


    int sum=0,num;

    for(num=2;num<=30;num+=2){
        sum+=num;
    }



    printf("The sum of even number between 2 and 30 is %d\n\n",sum);
    return 0;
}
