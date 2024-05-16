#include <stdio.h>
#include <stdlib.h>

int main(){

    float product1,product2,product3,product4,product5;         // calculator for products' prices
    int product,quantity,day;                                   // product is a sentinel value
    float sum=0;
    float price1=2.98,
          price2=4.50,
          price3=9.98,
          price4=4.49,
          price5=6.87;

    printf("%s%20s\n","PRODUCT NUMBER","RETAIL PRICE");
    printf("1%25.2f\n",price1);
    printf("2%25.2f\n",price2);
    printf("3%25.2f\n",price3);
    printf("4%25.2f\n",price4);
    printf("5%25.2f",price5);

    for(day=1;day<=7;day++){

        product1=product2=product3=product4=product5=0;
        product=0;

        printf("\n\n*********** Day %d ***********\n\n",day);

        while(product!=-1){

            printf("Enter product number(-1 to exit): ");
            scanf("%d",&product);

            if(product!=-1){
                printf("Enter quantity sold for one day: ");
                scanf("%d",&quantity);

                switch(product){

                case 1:
                    product1=1.*quantity*price1;
                    break;
                case 2:
                    product2=1.*quantity*price2;
                    break;
                case 3:
                    product3=1.*quantity*price3;
                    break;
                case 4:
                    product4=1.*quantity*price4;
                    break;
                case 5:
                    product5=1.*quantity*price5;
                    break;
                }
            }
        }
        sum+=(product1+product2+product3+product4+product5);
    }
    printf("\nTotal retail for last week: %.2f\n",sum);

    return 0;
}
