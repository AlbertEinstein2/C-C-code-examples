#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3000

enum Status { CONTINUE, WON, LOST };

int rollDice( void );

int main(){

    int sum, roll_counter=0;
    int myPoint, c_total=0;                      // c_total == chance_total
    int counter, chance=0;

    int won_counter[SIZE]={0};
    int lost_counter[SIZE]={0};

    enum Status gameStatus;

    srand( time( NULL ) );

    for(counter=1;counter<=1000;counter++){

        sum = rollDice();
        ++c_total;
        switch( sum ) {

            case 7:
            case 11:
                gameStatus = WON;
                ++won_counter[1];
                ++chance;
                break;

            case 2:
            case 3:
            case 12:
                gameStatus = LOST;
                ++lost_counter[1];
                break;

            default:
                gameStatus = CONTINUE;
                myPoint = sum;
                printf( "Point is %d\n", myPoint );
                break;
        }

        while ( gameStatus == CONTINUE ) {
            sum = rollDice();
            ++c_total;
            roll_counter++;

            if ( sum == myPoint ) {
                gameStatus = WON;
                ++won_counter[roll_counter];
                ++chance;
            }
            else {
                if ( sum == 7 ) {
                    gameStatus = LOST;
                    ++lost_counter[roll_counter];
                }
            }
        }
        if ( gameStatus == WON ) {
            printf( "Player wins\n" );
        }
        else {
            printf( "Player loses\n" );
        }
    }
    printf( "\n\n\n\n" );

    printf( "Chances of winning %d/%d is %.2f%\n\n",chance,c_total,100.0*chance/c_total );


 /*   for(counter=1;counter<=22;counter++){
        printf( "wins on the %dth try: %d\n",counter,won_counter[counter] );
    }
*/
    return 0;
}


int rollDice( void ){

    int die1;
    int die2;
    int workSum;

    die1 = 1 + ( rand() % 6 );
    die2 = 1 + ( rand() % 6 );
    workSum = die1 + die2;


    printf( "Player rolled %d + %d = %d\n", die1, die2, workSum );
    return workSum;
}
