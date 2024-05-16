#include <stdio.h>
#include <stdlib.h>

int main(){

    double counter;
    double pi;
    float p_sum,n_sum;            //  p_sum for positive addition   n_sum for negative addition
    int loop_control_number;


//    loop_control_number=20;

    for(loop_control_number=1;loop_control_number<=500000;loop_control_number++){

        n_sum=p_sum=0;

      //  printf("****************** by %d term of the series ******************\n\n",loop_control_number);
        for(counter=1;counter<=loop_control_number;counter+=4){           // for-loop continuation for positive addition

            p_sum+=(4.0/counter);
          //  printf("The counter for loop 1 counter: %d\n",counter);
        }

        for(counter=3;counter<=loop_control_number;counter+=4){           // for-loop continuation for negative addition

            n_sum+=(4.0/counter);
           // printf("The counter for loop 2 counter: %d\n",counter);
        }
     //   printf("\n\n");
        pi = p_sum - n_sum;

        printf("The pi number: %lf-------->%d",pi,loop_control_number);

        if(loop_control_number%4==1){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
