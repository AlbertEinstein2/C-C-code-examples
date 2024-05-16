#include <stdio.h>
#include <stdlib.h>

int main(){


    int x,y;
    int i=0;    // counter for while-loop

    while(i++<4){
        printf("Enter 2 numbers\n"
           "First one for i\n"
           "second one for d:\n");

        scanf("%i%d",&x,&y);
        printf("%i\t%d\n\n",x,y);
    }
    return 0;
}
