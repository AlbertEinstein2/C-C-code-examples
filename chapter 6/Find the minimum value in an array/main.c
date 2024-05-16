#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int recursiveMinimum (int a[],int size);

int main(){

    srand(time(NULL));

    int i;
    int array[SIZE];

    for(i=0;i<SIZE;i++){
        array[i]=1+rand()%100;
    }
    for(i=0;i<SIZE;i++){
        printf("array[%d]-->%d\n",i,array[i]);
    }
    printf("\n\n%d is the minimum number!",recursiveMinimum(array,SIZE));

    return 0;
}
int recursiveMinimum (int a[],int size){

    static int min=100;

    if(size==0){
        return min;
    }
    else if(size>0&&min>a[size-1]){
        min=a[size-1];
        recursiveMinimum(a,--size);
    }
    else{
        recursiveMinimum(a,--size);
    }
}
