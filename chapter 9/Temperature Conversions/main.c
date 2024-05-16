#include <stdio.h>
#include <stdlib.h>

int main(){

    int i=-1;

    printf("%10s%12s\n","Fahrenheit","Celcius");

    while(++i<=212){
        printf("%10d%+12.3f\n",i, 5.0/9.0*(i-32));

    }
    return 0;
}
