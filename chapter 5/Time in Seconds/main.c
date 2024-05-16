#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long seconds (long hour,long min,long sec);



int main(){

    int h,m,s;
    int difference,first_t,second_t;

    printf("Enter the first time as three integers: ");
    scanf("%ld%ld%ld",&h,&m,&s);

    first_t=seconds(h,m,s);

    printf("Enter the second time as three integers: ");
    scanf("%ld%ld%ld",&h,&m,&s);

    second_t=seconds(h,m,s);

    difference=fabs(first_t-second_t);

    printf("The difference between the times is %ld seconds\n",difference);

    return 0;
}
long seconds (long hour,long min,long sec){

    return 3600*hour+60*min+sec;
}
