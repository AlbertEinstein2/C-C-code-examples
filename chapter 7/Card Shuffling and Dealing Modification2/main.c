#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void shuffleAndDeal(int wDeck[][13],const char *wFace[],const char *wSuit[]);


int main(){

    const char *suit[4]={"Hearts","Diamonds","Clubs","Spades"};

    const char *face[13]=
        {"Ace","Deuce","Three","Four",
            "Five","Six","Seven","Eight",
            "Nine","Ten","Jack","Queen","King"};

    int deck[4][13]={0};

    srand(time(0));

    shuffleAndDeal(deck,face,suit);
    return 0;
}
void shuffleAndDeal(int wDeck[][13],const char *wFace[],const char *wSuit[]){

    int row;
    int column;
    int card;

    for(card=1;card<=52;card++){

        row=rand()%4;
        column=rand()%13;

        while(wDeck[row][column]!=0){
            row=rand()%4;
            column=rand()%13;
        }
        wDeck[row][column]=card;
    }

    for(card=1;card<=52;card++){
        for(row=0;row<=3;row++){
            for(column=0;column<=12;column++){

                if(wDeck[row][column]==card){
                    printf("%d.%5s of %-8s%c",card,wFace[column],wSuit[row],card%2==0?'\n':'\t');
                }
            }
        }
    }
}
