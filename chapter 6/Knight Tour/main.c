#include <stdio.h>
#include <stdlib.h>

#define SIDE 8

//int validMove(int row,int column,int workBoard[][8]);

#define TRUE 1
#define FALSE 0


void move(int a[][SIDE],int row,int column);

int main(){

    int board[SIDE][SIDE]={0};         // chessboard
    const int horizontal[SIDE]={2,1,-1,-2,-2,-1,1,2};         //  Horizontal moves to the left are negative
    const int vertical[SIDE]={-1,-2,-2,-1,1,2,2,1};           //  Vertical moves upward are negative
    int currentRow=4,currentColumn=3;                                   //  Current row and column on double-subscripted array 'board'
    int moveNumber;             // will be kept between 0 and 7
    static int moves=1;                  //  counter  between 1 and 64

    board[currentColumn][currentRow]=TRUE;

    while(moves<=64){

        for(moveNumber=0;moveNumber<SIDE;moveNumber++){

            if(currentRow!=board[currentRow-1][currentColumn]||currentRow!=board[currentRow+1][currentColumn]){
                currentRow += vertical[ moveNumber ];
            }
        }




        moves++;
    }




    return 0;
}
void move(int a[][SIDE],int row,int column){





}/*
int validMove(int row,int column,int workBoard[][8]){
    return (row>=0&&row<=7&&column>=0&&
    column<=7&&workBoard[row][column]==0);
}
*/
