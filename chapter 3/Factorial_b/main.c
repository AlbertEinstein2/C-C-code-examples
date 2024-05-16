#include <stdio.h>
#include <stdlib.h>

int main(){

    int number,factorial;
    int counter=1;
    float number_e=1;


    while(counter<=9){


        number=counter++;
        factorial=1;

        while(number!=1){

            factorial*=number--;
        }
        printf("\n%d\n\n",factorial);
        number_e+=(1/(float)factorial);         // number_e = number_e + 1/factorial

      //  counter++;
    }
    printf("\nThe number e is %f\n\n",number_e);


    return 0;
}
