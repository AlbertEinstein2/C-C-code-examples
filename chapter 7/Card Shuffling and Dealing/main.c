#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int wDeck[][13]);
void deal(const int wDeck[][13],const char *wFace[],
           const char *wSuit[]);
int compare(const char *s1,const char*s2);

void cardDealing(const int wdeck[][13],int wplayer[][13]);
void printPlayerHand(const char *wFace[],const char *wSuit[],const player[][13]);
void is_pair(const int wplayer[][13],const char *wFace[]);

int main(){

    const char *suit[4]={"Hearts", "Diamonds", "Clubs", "Spades"};

    const char *face[13]=
      {"Ace", "Deuce", "Three", "Four",
        "Five", "Six", "Seven", "Eight",
        "Nine", "Ten", "Jack", "Queen", "King"};

    int deck[4][13]={0};
    int player1[4][13]={0};

    srand(time(0));

    shuffle(deck);
    deal(deck,face,suit);



    cardDealing(deck,player1);

    printf("\n\n\n");
    printPlayerHand(face,suit,player1);
printf("\n\n\n");

    is_pair(player1,face);
    return 0;
}
void shuffle(int wDeck[][13]){

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
}
void deal(const int wDeck[][13], const char *wFace[],
           const char *wSuit[]){

    int card;
    int row;
    int column;

    for(card=1;card<=52;card++){

        for(row=0;row<=3;row++){

            for(column=0;column<=12;column++){

                if(wDeck[row][column]==card){
                    printf("%d.%5s of %-8s%c",card,wFace[column],wSuit[row],
                        card%2==0?'\n':'\t');
                }
            }
        }
    }
}
void cardDealing(const int wdeck[][13],int wplayer[][13]){

    static int card,controller=52;
    int row;
    int column;

    controller-=5;

    for(card=52;card>=1&&card>controller;card--){
        for(row=0;row<=3;row++){
            for(column=0;column<=12;column++){
                if(wdeck[row][column]==card){
                    wplayer[row][column]=1;
                }
            }
        }
    }
}
void printPlayerHand(const char *wFace[],const char *wSuit[],const player[][13]){

    int row,column;

    for(row=0;row<4;row++){
        for(column=0;column<13;column++){
            if(player[row][column]==1){
                printf("%-5s of %-8s\n",wFace[column],wSuit[row]);

            }
        }
    }
}
void is_pair(const int wplayer[][13],const char *wFace[]){

    int row,i;
    int column,j;
    int checker=0;


    for(row=0;row<4;row++){
        for(column=0;column<13;column++){
            if(wplayer[row][column]==1){

                for(i=0;i<4;i++){
                    for(j=0;j<13;j++){
                        if(wplayer[i][j]==1&&wplayer[i][j]!=wplayer[row][column]){

                            if(compare(wFace[column],wFace[j])){
                                checker=1;
                            }
                        }
                    }
                }
            }
        }
    }
    if(checker==1){
        printf("\nYour hand includes of a pair!\n");
    }

}
int compare(const char *s1,const char*s2){
    int i=0;
    while(*s1!='\0'&&*s2!='\0'){
        if(*s1==*s2){
            i=1;
        }
        else{
            i=0;
        }
        s1++;
        s2++;
    }
    return i;
}
