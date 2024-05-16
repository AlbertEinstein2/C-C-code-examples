#include <stdio.h>
#include <math.h>

int main(void) {
    int principal = 1000; // starting principal
    int rate = 5; // annual interest rate  == 0.05
    int dollar=0;   // dollar portion
    int cent=0;     //cent portion


    printf("%4s%21s\n", "Year", "Amount on deposit");

    for (int year = 1; year <= 10; ++year) {


        double amount = principal * pow(1.0 + rate, year);

        printf("%4d%21.2f\n", year, amount);
    }
}
