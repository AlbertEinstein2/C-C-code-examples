#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double roundToInteger(double number);
double roundToTenths(double number);
double roundToHundreths(double number);
double roundToThousandths(double number);


int main(){

    double number;

    printf("%s%15s%15s%15s%15s\n","The orginal","Rounded to","Rounded to","Rounded to","Rounded to");
    printf("%s%17s%14s%18s%17s\n\n","number","integer","tenths","hundreths","thousandths");

    for(number=1.3;number<=1.7;number+=0.001){

        printf("%.4f%18.4f%15.4f%15.4f%15.4f\n",
               number,
               roundToInteger(number),
               roundToTenths(number),
               roundToHundreths(number),
               roundToThousandths(number)
               );
    }


    return 0;
}

double roundToInteger(double number){

    double x = number;

    return floor( x + .5 );
}
double roundToTenths(double number){

    double x = number;

    return floor( x * 10 + .5 ) / 10;
}
double roundToHundreths(double number){

    double x = number;

    return floor( x * 100 + .5 ) / 100;
}
double roundToThousandths(double number){

    double x = number;

    return floor( x * 1000 + .5 ) / 1000;
}
