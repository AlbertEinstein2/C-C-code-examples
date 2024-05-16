#include <stdio.h>
#include <stdlib.h>

int main(){

    int factorial,num;
    int inner_num;

    printf("NUMBER(n)\tFACTORIAL(n!)\n\n");

    for(num=1;num<=5;num++){

        factorial=1;
        for(inner_num=1;inner_num<=num;inner_num++){
            factorial*=inner_num;
        }
 //       printf("%9.d%19.d\n",num,factorial);
        printf("%d\t\t%d\n",num,factorial);
    }


    return 0;
}
