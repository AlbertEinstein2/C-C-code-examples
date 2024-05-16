#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1,num2,num3,num4,num5,counter;
    int inner_counter,num;

    for(counter=1;counter<=5;counter++){

        printf("Enter a number between 1 and 30: ");
        scanf("%d",&num);

        switch(counter){

            case 1:
                num1=num;
                break;
            case 2:
                num2=num;
                break;
            case 3:
                num3=num;
                break;
            case 4:
                num4=num;
                break;
            case 5:
                num5=num;
                break;
        }
    }
    printf( "\n\n%4s%21s\n\n", "NUMBERS", "HISTOGRAMS" );

    for(counter=1;counter<=5;counter++){

        switch(counter){

            case 1:
                printf("%d\t\t  ",num1);
                for(inner_counter=1;inner_counter<=num1;inner_counter++){
                    printf("*");
                }
                printf("\n");

                break;
            case 2:
                printf("%d\t\t  ",num2);
                for(inner_counter=1;inner_counter<=num2;inner_counter++){
                    printf("*");
                }
                printf("\n");

                break;
            case 3:
                printf("%d\t\t  ",num3);
                for(inner_counter=1;inner_counter<=num3;inner_counter++){
                    printf("*");
                }
                printf("\n");

                break;
            case 4:
                printf("%d\t\t  ",num4);
                for(inner_counter=1;inner_counter<=num4;inner_counter++){
                    printf("*");
                }
                printf("\n");

                break;
            case 5:
                printf("%d\t\t  ",num5);
                for(inner_counter=1;inner_counter<=num5;inner_counter++){
                    printf("*");
                }
                printf("\n");

                break;
        }
    }
    return 0;
}
