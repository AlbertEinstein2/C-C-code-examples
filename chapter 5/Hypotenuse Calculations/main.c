#include <stdio.h>
#include <stdlib.h>
#include <math.h>



double hypotenuse(double side1,double side2);



int main(){

    float x,y;

    printf("Enter two sides: ");
    scanf("%f%f",&x,&y);

    printf("\nHypotenuse is %.3f\n\n",hypotenuse(x,y));

    return 0;
}
double hypotenuse(double side1,double side2){

    return sqrt(pow(side1,2)+pow(side2,2));
}
