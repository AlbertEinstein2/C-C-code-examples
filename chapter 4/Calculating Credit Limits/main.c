#include <stdio.h>
#include <stdlib.h>

int main(){

    int account_number,p_credit_limit,current_balance;                          //  p_  for previous
    int n_credit_limit;
    int customer;                   // customer--> counter




    for(customer=1;customer<=3;customer++){

        printf("Enter account number: ");
        scanf("%d",&account_number);
        printf("Enter credit limit before recession: ");
        scanf("%d",&p_credit_limit);
        printf("Enter current balance: ");
        scanf("%d",&current_balance);

        n_credit_limit=p_credit_limit/2;

        printf("\nNew balance of customer: %d\n",n_credit_limit);

        if(current_balance>n_credit_limit){
            printf("Customer's current balance exceeds new credit limit!!!\n\n\n");
        }
        else{
            printf("\n\n\n");
        }
    }



    return 0;
}
