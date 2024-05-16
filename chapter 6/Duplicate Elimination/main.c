#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

void duplicate (const int array[],int checker);

int main(){

    int counter=0;
    int holder[SIZE]={0};
    int tester;
    int i;

    printf("Enter 20 number between 10-100: ");

    while(counter<SIZE){
        scanf("%d",&tester);

        if(10<=tester&&tester<=100){
            holder[counter]=tester;

            counter++;
        }
        else{
            printf("Enter a number between 10-100!!!\n");
            continue;
        }
    }
    for(i=0;i<SIZE;i++){
        duplicate(holder,i);
    }
    return 0;
}
void duplicate (const int array[],int checker){

    int i;                                      // counter for loop
    int tester_n=1;                             // checker for duplicate

    for(i=0;i<SIZE&&i!=checker;i++){

        if(array[checker]==array[i]){
            tester_n=0;
            break;
        }
    }
    if(tester_n){

        printf("Your number(%d) is entered for once(doesn't duplicate)!!\n",array[checker]);
    }
    else{
        printf("Your number(%d) has entered before(duplicate)!!\n",array[checker]);
    }
}
