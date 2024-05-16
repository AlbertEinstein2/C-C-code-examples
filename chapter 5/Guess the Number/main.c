#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int guess(void);

int main(){
    srand(time(NULL));

    int t,input;
    char again='y';

    while(again=='y'){
        t=guess();

        printf("I have a number between 1 and 1000.\n");
        printf("Can you guess my number?\n");
        printf("Please type your first guess.\n");
        scanf("%d",&input);

        while(input!=t){
            if(input<t){
                printf("Too low. Try again.\n");
                scanf("%d",&input);
            }
            else if(input>t){
                printf("Too high. Try again.\n");
                scanf("%d",&input);
            }
        }
        printf("Excellent! You guessed the number!\n");
        printf("Would you like to play again (y or n)?\n");
        scanf(" %c",&again);
        printf("\n");
    }
    return 0;
}
int guess(void){

    int x;
    x= 1+rand()%1000;
  //  printf("%d\n",x);    //prints the number that is created
    return x;

}
