#include <stdio.h>
#include <stdlib.h>

#define MINIMUM2(x,y) ((x)<(y)?(x):(y))

#define MINIMUM3(u,v,w)(MINIMUM2(w,MINIMUM2(u,v)))

int main(){

    int a,b,c;
    double i,j,k;

    printf("Enter three integers: ");
    scanf("%d%d%d",&a,&b,&c);

    printf("The minimum of %d, %d and %d is %d\n\n",a,b,c,MINIMUM3(a,b,c));

    printf("Enter three doubles: ");
    scanf("%lf%lf%lf",&i,&j,&k);

    printf("The minimum of %.2f, %.2f and %.2f is %.2f\n\n",i,j,k,MINIMUM3(i,j,k));

    return 0;
}
