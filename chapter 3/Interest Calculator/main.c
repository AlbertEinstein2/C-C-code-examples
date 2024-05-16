#include <stdio.h>
#include <stdlib.h>

int main(){

    float principal,
          rate,
          interest;
    int   days;


    while(principal!=-1){

        printf("Enter loan principal (-1 to end):");
        scanf("%f",&principal);

        if(principal!=-1){
            printf("Enter interest rate:");
            scanf("%f",&rate);
            printf("Enter term of the loan in days:");
            scanf("%d",&days);

            interest = principal * rate * (float)days / 365;

            printf("The interest charge is $%.2f\n\n",interest);
        }
    }

    return 0;
}
