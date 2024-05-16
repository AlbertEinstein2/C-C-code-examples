#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;

    printf("The chacters in ASCII table:\n\n");
    for(i=0;i<256;i++){
        printf("%d-->%c\n",i,i);
    }
    return 0;
}
