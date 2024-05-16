#include <stdio.h>
#include <stdlib.h>

int main(){

    float radius,
          diameter,
          circumference,
          area;

    float pi=3.14159;

    printf("Enter radius of the circle: ");
    scanf("%f",&radius);

    diameter=2*radius;
    circumference=pi*diameter;
    area=pi*radius*radius;

    printf("The diameter is %f\n",diameter);
    printf("The circumference is %f\n",circumference);
    printf("The area is %f\n\n",area);

    return 0;
}
