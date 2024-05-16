#include <stdio.h>
#include <stdlib.h>

int main(){

    int side1,side2,side3;


    printf("Enter three sides of the triangle to validate if it is right triangle: ");
    scanf("%d%d%d",&side1,&side2,&side3);

    if(side1*side1+side2*side2==side3*side3){

        printf("\n\nINPUTS ARE VALID!!!\n"
               "THESE SIDES ARE CONNECTED TO A RIGHT TRIANGLE!\n\n");
    }
    else if(side1*side1+side3*side3==side2*side2){

        printf("\n\nINPUTS ARE VALID!!!\n"
               "THESE SIDES ARE CONNECTED TO A RIGHT TRIANGLE!\n\n");
    }
    else if(side2*side2+side3*side3==side1*side1){

        printf("\n\nINPUTS ARE VALID!!!\n"
               "THESE SIDES ARE CONNECTED TO A RIGHT TRIANGLE!\n\n");
    }
    else{
        printf("\n\nINPUTS ARE INVALID!!!\n"
               "THESE SIDES DO NOT BELONG TO A RIGHT TRIANGLE!\n\n");
    }

    return 0;
}
