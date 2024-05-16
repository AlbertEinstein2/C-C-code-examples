#include <stdio.h>
#include <stdlib.h>

#define MINIMUM2(x,y) ((x)<(y)?(x):(y))

int main(){

    int a,b;
    double i,j;

    printf("Enter two integers: ");
    scanf("%d%d",&a,&b);

    printf("The minimum of %d and %d is %d\n\n",a,b,MINIMUM2(a,b));

    printf("Enter two doubles: ");
    scanf("%lf%lf",&i,&j);

    printf("The minimum of %.2f and %.2f is %.2f\n\n",i,j,MINIMUM2(i,j));

    return 0;
}
