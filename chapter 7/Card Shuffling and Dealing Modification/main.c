#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int wDeck[][13]);
void deal(const int wDeck[][13],const char *wFace[],
           const char *wSuit[]);

int main(){

    const char *suit[4]={"Hearts", "Diamonds", "Clubs", "Spades"};
    const char *face[13]=
      {"Ace", "Deuce", "Three", "Four",
        "Five", "Six", "Seven", "Eight",
        "Nine", "Ten", "Jack", "Queen", "King"};

    int deck[4][13]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
                     16,17,18,19,20,21,22,23,24,25,26,27,
                     28,29,30,31,32,33,34,35,36,37,38,39,
                     40,41,42,43,44,45,46,47,48,49,50,51,52};
int row,column;

    srand(time(0));

    shuffle(deck);
    deal(deck,face,suit);
 /* for(row=0;row<=3;row++){
        for(column=0;column<=12;column++){

            printf("%5d",deck[row][column]);

            if(column==12){
                printf("\n");
            }
        }
    }
*/
    return 0;
}
void shuffle(int wDeck[][13]){

    int row,i;
    int column,j;

    void swap(int *element1Ptr,int *element2Ptr);

    for(row=0;row<=3;row++){
        for(column=0;column<=12;column++){
            i=rand()%4;
            j=rand()%13;
            swap(&wDeck[row][column],&wDeck[i][j]);
        }
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
                    break;
                }
            }
            if(wDeck[row][column-1]==card){
                break;
            }
        }
    }
}
void swap(int *element1Ptr,int *element2Ptr){

    int hold=*element1Ptr;
    *element1Ptr=*element2Ptr;
    *element2Ptr=hold;
}
