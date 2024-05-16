#include <stdio.h>
#include <stdlib.h>

int celcius (int fahrenheit);
int fahrenheit (int celcius);
int main(){

    int cel,fah;

    printf("%7s%17s","Celcius","Fahrenheit\n");

    for(cel=0;cel<=100;cel++){
        printf("%7d%16d",cel,fahrenheit(cel));

        printf("\n");
    }
    printf("\n\n");
    printf("%10s%20s\n","Fahrenheit","Celcius");
    for(fah=32;fah<=212;fah++){
        printf("%10d%20d",fah,celcius(fah));
        printf("\n");
    }
    return 0;
}
int celcius (int fahrenheit){

    return (fahrenheit-32)*100/(212-32);
}
int fahrenheit (int celcius){

    return (celcius*(212-32)/100)+32;
}
