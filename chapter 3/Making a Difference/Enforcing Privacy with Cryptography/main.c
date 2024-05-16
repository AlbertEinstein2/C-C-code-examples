#include <stdio.h>
#include <stdlib.h>

int main(){

    int message,encrypted_message;
    int digit1,digit2,digit3,digit4;
    int e_digit1,e_digit2,e_digit3,e_digit4;        // e_digit is encypted digit
    int division=1000;
    int controller;


    printf("********************ENCRYPTION********************\n\n");
    printf("Enter your message(four-digit integer): ");
    scanf("%d",&message);

    while(division>0){

        if(division==1000){
            digit1=(message/division)%10;
            e_digit1=(digit1+7)%10;
        }
        else if(division==100){
            digit2=(message/division)%10;;
            e_digit2=(digit2+7)%10;
        }
        else if(division==10){
            digit3=(message/division)%10;;
            e_digit3=(digit3+7)%10;
        }
        else if(division==1){
            digit4=(message/division)%10;;
            e_digit4=(digit4+7)%10;
        }
        division/=10;
    }
    controller=e_digit1;
    e_digit1=e_digit3;
    e_digit3=controller;

    controller=e_digit2;
    e_digit2=e_digit4;
    e_digit4=controller;

    encrypted_message=e_digit1*1000+e_digit2*100+e_digit3*10+e_digit4;

    printf("Encrypted message is  %d\n\n",encrypted_message);

    printf("********************DECRYPTION********************\n\n");
    printf("Enter your encrypted message(four-digit integer): ");
    scanf("%d",&message);


    division=1000;
    while(division>0){

        if(division==1000){
            digit1=(message/division)%10;
        }
        else if(division==100){
            digit2=(message/division)%10;;
        }
        else if(division==10){
            digit3=(message/division)%10;;
        }
        else if(division==1){
            digit4=(message/division)%10;;
        }
        division/=10;
    }
    controller=digit3;
    digit3=digit1;
    digit1=controller;

    controller=digit4;
    digit4=digit2;
    digit2=controller;

    e_digit1=(digit1+10-7)*1000;           //    it is acceptable just because we work with digits upper in encryption!!!!!!!!
    e_digit2=(digit2+10-7)*100;            //    it is acceptable just because we work with digits upper in encryption!!!!!!!!
    e_digit3=(digit3+10-7)*10;             //    it is acceptable just because we work with digits upper in encryption!!!!!!!!
    e_digit4=digit4+10-7;                  //    it is acceptable just because we work with digits upper in encryption!!!!!!!!

    encrypted_message=e_digit1+e_digit2+e_digit3+e_digit4;

    printf("decrypted message is %d\n\n",encrypted_message);

    return 0;
}
