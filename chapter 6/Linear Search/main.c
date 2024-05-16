#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int linearSearch( const int array[], int key, int size );

int main(){


    int a[SIZE];
    int x;
    int searchKey;
    int element;

    for (x=0;x<SIZE;x++){
        a[x]=2*x;
    }

    printf("Enter integer search key:\n");
    scanf("%d",&searchKey);

    element=linearSearch(a,searchKey,SIZE);

    if (element!=-1) {
        printf("Found value in element %d\n",element);
    }
    else{
        printf("Value not found\n");
    }

    return 0;
}
int linearSearch(const int array[],int key,int size){

    if(key!=array[size]&&0==size){
        return -1;
    }
    else if(key==array[size]&&0<=size){
        return size;
    }
    else{
        linearSearch(array,key,--size);
    }

}
