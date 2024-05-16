#include <stdio.h>
#include <stdlib.h>

int main(){

    float sales,salary ;



    while(sales!=-1){

        printf("Enter sales in dollars (-1 to end):");
        scanf("%f",&sales);

        if(sales!=-1){

            salary=200+0.09*sales;
            printf("Salary is: %.2f\n\n",salary);
        }
    }






    return 0;
}
