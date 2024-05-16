#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    int counter;
    int x;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Roman numerals: ");

    while(num != 0)
    {

    /*    if (num >= 1000)       // 1000 - m
        {
           printf("m");
           num -= 1000;
        }

        else if (num >= 900)   // 900 -  cm
        {
           printf("cm");
           num -= 900;
        }

        else if (num >= 500)   // 500 - d
        {
           printf("d");
           num -= 500;
        }

        else if (num >= 400)   // 400 -  cd
        {
           printf("cd");
           num -= 400;
        }
            */
        if (num >= 100)   // 100 - c
        {
           printf("C");
           num -= 100;
        }

        else if (num >= 90)    // 90 - xc
        {
           printf("XC");
           num -= 90;
        }

        else if (num >= 50)    // 50 - l
        {
           printf("L");
           num -= 50;
        }

        else if (num >= 40)    // 40 - xl
        {
           printf("XL");
           num -= 40;
        }

        else if (num >= 10)    // 10 - x
        {
           printf("X");
           num -= 10;
        }

        else if (num >= 9)     // 9 - ix
        {
           printf("IX");
           num -= 9;
        }

        else if (num >= 5)     // 5 - v
        {
           printf("V");
           num -= 5;
        }

        else if (num >= 4)     // 4 - iv
        {
           printf("IV");
           num -= 4;
        }

        else if (num >= 1)     // 1 - i
        {
           printf("I");
           num -= 1;
        }
    }
    printf("\n");

    return 0;
}
