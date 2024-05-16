#include <stdio.h>
#include <stdlib.h>

double minimum (double a,double b,double c);

int main(){

    double x,y,z;

    printf("Enter three doubleing point values: ");
    scanf("%lf%lf%lf",&x,&y,&z);

    printf("The smallest value is %f\n",minimum(x,y,z));


    return 0;
}
double minimum (double a,double b,double c){

    double min=a;

    if(min<b){
        min=b;
    }
    if (min<c){
        min=c;
    }
    return min;
}
