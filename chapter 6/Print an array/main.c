#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

void printArray(int a[],int size);

int main(){

    int a[SIZE];
    int x;

    for (x=0;x<SIZE;x++){
        a[x]=2*x;
    }
    printArray(a,SIZE);


    return 0;
}
void printArray(int a[],int size){

    static int i=0;

    if(i<size){
        printf("a[%d]=%d\t",i,a[i]);
        if(i<10){
            printf("\t");
        }
        if((i+1)%6==0&&i!=0){
            printf("\n");
        }
        ++i;
        printArray(a,size);
    }
}
