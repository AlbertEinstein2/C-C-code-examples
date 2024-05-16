#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int duplicate (int a[],int num,int j);


int main(){

    srand(time(NULL));

    int numbers[20]={0};
    int i=1,x;

    numbers[0]=1+rand()%20;

    while(i<20){

        x=1+rand()%20;

        if(duplicate (numbers,x,i)){
            numbers[i++]=x;
        }
    }

    printf("Nonduplicate numbers:\n");
    for(i=0;i<20;i++){
        printf("%4d",numbers[i]);
    }

    return 0;
}
int duplicate (int a[],int num,int j){

    int i;

    for(i=0;i<j;i++){

        if(num==a[i]){
            return 0;
        }
    }
    return 1;
}
