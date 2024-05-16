#include <stdio.h>
#include <stdlib.h>

#define PRINTARRAY(a,n) for(i=0;i<(n);i++)\
                        printf("%-3d",a[i])

int main(){

    int i;

    int b[10]={2,4,6,8,10,12,14,16,18,20};

    printf("The array values are:\n");
    PRINTARRAY(b,10);


    return 0;
}
