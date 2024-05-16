#include <stdio.h>
#include <stdlib.h>

void add(double num1,double num2);
void subtract(double num1,double num2);
void multiply(double num1,double num2);
void divide(double num1,double num2);

int main(){

    int choice;
    double number1,number2;

    void (*calc[4])(double,double)={add,subtract,multiply,divide};

    printf("0 to make adding of two numbers\n"
           "1 to make subtracting of two numbers\n"
           "2 to make multiplying of two numbers\n"
           "3 to make dividing of two numbers\n");

    scanf("%d",&choice);
    scanf("%lf%lf",&number1,&number2);

    (*calc[choice])(number1,number2);

    return 0;
}
void add(double num1,double num2){
    printf("The sum of numbers: %f\n",num1+num2);
}
void subtract(double num1,double num2){
    printf("The subtract of numbers: %f\n",num1-num2);
}
void multiply(double num1,double num2){
    printf("The multiply of numbers: %f\n",num1*num2);
}
void divide(double num1,double num2){
    printf("The divide of numbers: %f\n",num1/num2);
}
