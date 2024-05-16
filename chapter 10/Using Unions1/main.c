#include <stdio.h>
#include <stdlib.h>

typedef union floatingPoint{

    float f;
    double d;
    long double x;
}Num;



int main(){

    Num value;

    printf("Enter a float: ");
    scanf("%f",&value.f);

    printf("%f printed as a float is %f\n",value.f,value.f);
    printf("%f printed as a double is %lf\n",value.f,value.d);
    printf("%f printed as a long double is %Lf\n",value.f,value.x);

    printf("\nEnter a double: ");
    scanf("%lf",&value.d);

    printf("%lf printed as a float is %f\n",value.d,value.f);
    printf("%lf printed as a double is %lf\n",value.d,value.d);
    printf("%lf printed as a long double is %Lf\n",value.d,value.x);

    printf("\nEnter a long double: ");
    scanf("%Lf",&value.x);

    printf("%Lf printed as a float is %f\n",value.x,value.f);
    printf("%Lf printed as a double is %lf\n",value.x,value.d);
    printf("%Lf printed as a long double is %Lf\n",value.x,value.x);



    return 0;
}
