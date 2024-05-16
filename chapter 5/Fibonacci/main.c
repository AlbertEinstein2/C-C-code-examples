#include <stdio.h>
#include <stdlib.h>

double fibonacci (double number);

int main(){

    double x;

    for(x=1;x<=1500;x++){
        printf("%.fth fibonacci is %.f\n",x,fibonacci(x));
    }

    return 0;
}
double fibonacci (double number){

    double counter=2,sum;
    double fib=0,add=1;

    while(counter<=number){

        sum=add+fib;
        add=fib;
        fib=sum;
        counter++;
    }
    return fib;
}
