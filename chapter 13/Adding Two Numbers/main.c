#include <stdio.h>
#include <stdlib.h>

#define SUM(x,y) (x+y)


int main(){

    for(int i=1;i<=10;i++){
        printf("The value of x is %d\n\n",i);
        for(int j=1;j<=10;j++){
            printf("The sum of x and y is %d\n",SUM(i,j));
        }
        printf("%s",i!=10?"--------------------------\n\n":"\n\n");
    }

    return 0;
}
