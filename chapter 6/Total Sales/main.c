#include <stdio.h>
#include <stdlib.h>

#define SALESPEOPLE 5
#define PRODUCT 6


int main(){

    double sales[PRODUCT][SALESPEOPLE]={{0,1,2,3,4,5},{1},{2,},{3},{4},{5,}};       // sales[0][0] is used for ordering numbers
    int i,j,day=1;
    double t_sale_p;                   // t_sale_s == total sale salespeople  /  t_sale_p  ==  total sale products
    double t_sale_s[SALESPEOPLE]={0};

    while(day<=1){

        printf("Day %d\n",day++);
        for(i=1;i<PRODUCT;i++){

            printf("Total sales of product(%d) for each salesperson sold: ",i);
            for(j=1;j<SALESPEOPLE;j++){

                scanf("%lf",&sales[i][j]);
            }
        }
        printf("\n");
    }
    printf("Products\\salespeople");

    for(i=0;i<PRODUCT;i++){

        if(i>=1){
            printf("%18s"," ");
        }
        if(sales[i][0]==sales[0][0]){
            printf("%s"," ");
        }
        else{
            printf("%.0f  ",sales[i][0]);
        }

        t_sale_p=0;
        for(j=1;j<SALESPEOPLE;j++){

            if(i==0){
                printf("%10.0f",sales[i][j]);

            }
            else{
                printf("%10.2f",sales[i][j]);
                t_sale_s[j]+=sales[i][j];

            }
            t_sale_p+=sales[i][j];
        }
        if(i>0){
            printf("%10.2f\n",t_sale_p);
        }
        else{
            printf("\n");
        }

    }
    printf("%21s"," ");
    for(i=1;i<SALESPEOPLE;i++){
        printf("%10.2f",t_sale_s[i]);
    }

    return 0;
}
