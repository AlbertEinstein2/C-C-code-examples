#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

#define VOLUME(x) ((4.0/3)*PI*(x)*(x)*(x))

int main(){

    for(int i=1;i<=10;i++){
        printf("The volume with radius %d is %.2f\n",i,VOLUME(i));
    }
    printf("\n");
    return 0;
}
