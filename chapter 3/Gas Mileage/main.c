#include <stdio.h>
#include <stdlib.h>

int main(){


    float gallons,
          total_g=0 ;
    int   miles,
          total_m=0 ;


    while(gallons!=-1){
        printf("Enter the gallons used (-1 to end): ");
        scanf("%f",&gallons);

        if(gallons!=-1){
            printf("Enter the miles driven: ");
            scanf("%d",&miles);

            printf("The miles / gallon for this tank was %f\n\n",(float)miles/gallons);
            total_g+=gallons;
            total_m+=miles;
        }
    }
    printf("\nThe overall average miles/gallon was %f\n\n",(float)total_m/total_g);

    return 0;
}
