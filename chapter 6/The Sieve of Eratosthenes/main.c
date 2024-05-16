#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

void prime(int a[],int size);

int main(){

    int i,counter=0;
    int p[SIZE];

    for(i=2;i<SIZE;i++){
        p[i]=1;
    }
    prime(p,SIZE);

    printf("Prime numbers:\n\n");

    for(i=2;i<SIZE;i++){
        if(p[i]==1){
            printf("%7d",i);
            counter++;
        }
        if((counter+1)%11==0){
            printf("\n");
            counter++;
        }

    }

    return 0;
}
/*void prime(int a[],int size){         // a

    int i,j;

    for(i=2;i<size;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                a[i]=0;
            }
        }
    }
}
*/
void prime(int a[],int size){           //b

    int i,j;

    for(i=2;i<10;i++){
        for(j=2;i*j<1000;j++){

            a[i*j]=0;
        }
    }
}
