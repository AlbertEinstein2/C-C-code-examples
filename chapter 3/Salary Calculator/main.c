#include <stdio.h>
#include <stdlib.h>

int main(){

    int hours;
    float rate;


    while(hours!=-1){

        printf("Enter # of hours worked (-1 to end):");
        scanf("%d",&hours);

        if(hours!=-1){
            printf("Enter hourly rate of the worker ($00.00):");
            scanf("%f",&rate);

            if(hours<=40){
                printf("Salary is $%.2f\n\n",(float)hours*rate);
            }
            else{
                printf("Salary is $%.2f\n\n",40*rate+1.5*(hours-40)*rate);
            }

        }


    }





    return 0;
}
