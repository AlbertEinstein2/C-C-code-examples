#include <stdio.h>
#include <stdlib.h>

int main(){

    int y=0;
    int *x=&y;

    printf("pointer to int y:\n");

    printf("%%d-->%d\n",x);
    printf("%%i-->%i\n",x);
    printf("%%u-->%u\n",x);
    printf("%%o-->%o\n",x);
    printf("%%x-->%x\n",x);
    printf("%%p-->%p\n\n",x);

    printf("address of y:\n");

    printf("%%d-->%d\n",&y);
    printf("%%i-->%i\n",&y);
    printf("%%u-->%u\n",&y);
    printf("%%o-->%o\n",&y);
    printf("%%x-->%x\n",&y);
    printf("%%p-->%p\n",&y);


    return 0;
}
