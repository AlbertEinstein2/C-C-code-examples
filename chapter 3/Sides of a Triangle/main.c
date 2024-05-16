#include <stdio.h>
#include <stdlib.h>

int main(){


    float side1,side2,side3;


    printf("Enter three sides of the triangle to validate: ");
    scanf("%f%f%f",&side1,&side2,&side3);

    if(side1+side2>side3){
        if(side1+side3>side2){
            if(side2+side3>side1){
                printf("\n\nVALIDATION ACCOMPLISHED SUCCESSFULLY!!\n"
                       "THESE SIDES ARE CONCERNED WITH A TRIANGLE!\n\n");
            }
        }
    }
    else{
        printf("\n\nTHERE IS NO SUCH A TRIANGLE!!\n"
               "INVALID INPUTS TO MAKE A TRIANGLE!\n"
               "THESE SIDES DO NOT BELONG TO A TRIANGLE!\n\n");
    }


    return 0;
}
