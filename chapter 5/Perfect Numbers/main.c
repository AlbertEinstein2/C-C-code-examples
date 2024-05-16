#include <stdio.h>
#include <stdlib.h>

int perfect (int number);

int main(){

    int num;

    for(num=1;num<=100000;num++){    //  num<=2000000 takes 5509.372 second

        if(perfect(num)!=0){
             printf("%d is a perfect number!\n",perfect(num));
        }
    }
    return 0;
}
int perfect (int number){

    int counter,sum=0;
    int x=number;
    for(counter=1;counter<x;counter++){

        if(x%counter==0){
            sum+=counter;
        }
    }
    if(sum==number){
        return sum;
    }
    else{
        return 0;
    }
}
