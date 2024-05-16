#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double distance(double x1,double y1,double x2,double y2);


int main(){

    double x_1,x_2,y_1,y_2;

    printf("Enter coordinate of point 1(with a space):");
    scanf("%lf%lf",&x_1,&y_1);
    printf("Enter coordinate of point 2(with a space):");
    scanf("%lf%lf",&x_2,&y_2);

    printf("\nThe distance between the points is %f\n",distance(x_1,y_1,x_2,y_2));

    return 0;
}
double distance(double x1,double y1,double x2,double y2){

    double dist,total;

    total=pow((x2-x1),2)+pow((y2-y1),2);
    dist=sqrt(total);

    return dist;
}
