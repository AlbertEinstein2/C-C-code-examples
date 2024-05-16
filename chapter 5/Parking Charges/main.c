#include <stdio.h>
#include <stdlib.h>

void calculateCharges(float hour);
float sum_charge=0;

int main(){

    float car1,car2,car3;
    int counter;
    float h_sum=0;

    printf("Enter parking-hours for each car: ");

    for(counter=1;counter<=3;counter++){

        switch(counter){

            case 1:
                scanf("%f",&car1);
                break;
            case 2:
                scanf("%f",&car2);
                break;
            case 3:
                scanf("%f",&car3);
                break;
        }
    }
    h_sum=car1+car2+car3;
    printf("\n%s%10s%10s\n","Car","Hours","Charge");

    printf("1");
    calculateCharges(car1);
    printf("2");
    calculateCharges(car2);
    printf("3");
    calculateCharges(car3);

    printf("TOTAL%8.1f%10.2f\n\n",h_sum,sum_charge);

    return 0;
}
void calculateCharges(float hour){

    float charge=0;                           // charge == total value

    if(hour<=3){
        charge=2;
    }
    else if(hour==24){
        charge=10;
    }
    else{
        charge=2+(hour-3)*0.5;
    }
    sum_charge+=charge;
    printf("%12.1f%10.2f\n",hour,charge);

}
