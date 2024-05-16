#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

void circumference(double radius);
void area(double radius);
void volume(double radius);

int main(){

    void (*calculation[3])(double)={circumference,area,volume};
    double radius;
    int choice;


    printf("0 to calculate the circumference of a circle\n"
           "1 to calculate the area of a circle\n"
           "2 to calculate the volume of a sphere\n");
    scanf("%d",&choice);
    scanf("%lf",&radius);

    (*calculation[choice])(radius);


    return 0;
}
void circumference(double radius){
    printf("The circumference of the circle: %f",(double)2*PI*radius);
}
void area(double radius){
    printf("The area of the circle: %f",PI*radius*radius);
}
void volume(double radius){
    printf("The volume of the sphere: %f",(4.0/3)*PI*radius*radius*radius);
}
