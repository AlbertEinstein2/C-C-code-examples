#include <stdio.h>
#include <stdlib.h>

int main(){

    int counter=1;

    while(counter<=300000000){
        counter++;
        if(counter%100000000==0){
            printf("%d\n",counter);
        }
    }



    return 0;
}
