#include <stdio.h>
#include <stdlib.h>

typedef struct bitCard{
    unsigned face:4;
    unsigned suit:2;
    unsigned color:1;
}Card;

void fillDeck(Card *const wDeck);
void deal(const Card *const wDeck);
void shuffle(Card *const wDeck);

int main(){

    Card deck[52];

    fillDeck(deck);
    shuffle(deck);
    deal(deck);

    return 0;
}
void fillDeck(Card *const wDeck){

   int i;

    for(i=0;i<=51;i++){
        wDeck[i].face=i%13;
        wDeck[i].suit=i/13;
        wDeck[i].color=i/26;
    }
}
void deal(const Card *const wDeck){

    int i;
    const char *color[]={"Red","Black"};
    const char *face[]={"Ace","Deuce","Three","Four","Five","Six",
                        "Seven","Eight","Nine","Ten","Jack","Queen","King"};

    const char *suit[]={"Hearts","Diamonds","Clubs","Spades"};

    for(i=0;i<52;i++){
        printf("%5s: %5s of %-8s",color[wDeck[i].color],
            face[wDeck[i].face],suit[wDeck[i].suit]);
        putchar((i+1)%2?'\t':'\n');
    }
}
void shuffle(Card *const wDeck){

    int i;
    int j;

    Card temp;

    for(i=0;i<=51;i++){
        j=rand()%52;
        temp=wDeck[i];
        wDeck[i]=wDeck[j];
        wDeck[j]=temp;
    }
}
