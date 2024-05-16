#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip (void);

int main(){

    int heads=0,tails=0;
    register int x;

    srand(time(NULL));

    for(x=1;x<=100;x++){

        if(flip()==1){
            printf("Heads");
            heads++;
        }
        else{
            printf("Tails");
            tails++;
        }
        printf("\n");
    }
    printf("Heads: %d\n",heads);
    printf("Tails: %d\n",tails);

    return 0;
}
int flip (void){

    int toss;

    toss= 0+rand()%2;

    return toss;
}
