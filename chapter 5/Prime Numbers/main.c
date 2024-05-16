#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int prime (int number);

int main(){

    int count,z;
    register int tprime=0;

    for(count=2;count<=10000;count++){

        z=prime(count);
        if(z==1){
            printf("The number (%d) is a prime number!\n",count);
            tprime++;
        }
    }
    printf("You have %d prime number!\n",tprime);

    return 0;
}
int prime (int number){

    int counter;
    /* upper limitation of "counter<sqrt(number)" 'sqrt' or 'number' or 'number/2' changes the execution time
    Can change program performance but with a problem which include 25 number which is not a prime number!
    */
    for(counter=2;counter<sqrt(number);counter++){
        if(number%counter==0){
            return 0;
        }
    }
    return 1;
}
