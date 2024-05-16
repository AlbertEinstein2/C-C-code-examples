#include <stdio.h>
#include <stdlib.h>

int main(){

    int num,counter=1,binary=0,b_counter=0;

    printf("%s%10s%10s%15s\n","DECIMAL","BINARY","OCTAL","HEXADECIMAL");

    printf("Enter a number: ");
    scanf("%d",&num);

    while(counter<=num){

        counter*=2;
        printf("%d\n",counter);
    }
    counter/=2;

    while(num!=0){

        if(num>counter){
            printf("1--->%d\n",counter);
            num%=counter;
            counter/=2;
        }
        else{
            printf("0--->%d\n",counter);
            counter/=2;
        }

    }


    return 0;
}
