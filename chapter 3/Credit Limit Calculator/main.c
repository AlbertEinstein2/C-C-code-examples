#include <stdio.h>
#include <stdlib.h>

int main(){

    int     account_number;
    float   balance,
            n_balance,
            limit,
            total_credits=0,
            total_charges=0;

    while(account_number!=-1){

        printf("Enter account number (-1 to end): ");
        scanf("%d",&account_number);

        if(account_number!=-1){

            printf("Enter beginning balance: ");
            scanf("%f",&balance);
            printf("Enter total charges: ");
            scanf("%f",&total_charges);
            printf("Enter total credits: ");
            scanf("%f",&total_credits);
            printf("Enter credit limit: ");
            scanf("%f",&limit);

            n_balance=balance+total_charges-total_credits;

            if(n_balance>limit){
                printf("Account: %d\n",account_number);
                printf("Credit limit: %.2f\n",limit);
                printf("Balance: %.2f\n",n_balance);
                printf("Credit Limit Exceeded.\n");
            }
            printf("\n");
        }
    }
    return 0;
}
