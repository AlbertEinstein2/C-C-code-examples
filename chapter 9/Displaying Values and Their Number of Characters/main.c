#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));

    int number[10];
    int i,total=0;
    int j=0;

    for(i=0;i<10;i++){
        number[i]=1+rand()%1000;
    }
    printf("Value\tTotal chacters\n");

    for(i=0;i<10;i++){
        printf("%d%n",number[i],&j);
        total+=j;
        printf("\t%d\n",total);
    }
    return 0;
}
