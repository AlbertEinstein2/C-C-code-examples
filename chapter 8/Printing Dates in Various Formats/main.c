#include <stdio.h>
#include <stdlib.h>

int main(){

    char *months[13]={"","January","February","March",
                      "April","May","June","July",
                      "August","September","October",
                      "November","December"};
    int m,d,y;

    puts("Enter a date in the form mm/dd/yyyy: ");
    scanf("%d/%d/%d",&m,&d,&y);

    printf("The date is: %s %d, %d",months[m],d,y);

    return 0;
}
