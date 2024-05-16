#include <stdio.h>
#include <stdlib.h>

#define SIZE 50
#define TRUE 1
#define FALSE 0
#define MAX 100

void getCommands(int commands[][2]);
int turnRight(int d);
int turnLeft(int d);
void movePen(int down, int a[][SIZE], int dir, int dist);
void printArray(int a[][SIZE]);

int main(){

    int floor[SIZE][SIZE]={0};
    int penDown=FALSE;
    int direction=0;
    int command;
    int commandArray[MAX][2]={0};
    int distance;
    int count=0;

    getCommands(commandArray);
    command=commandArray[count][0];

    while(command!=9){

        switch(command){
            case 1:         // pen up
                penDown=FALSE;
                break;
            case 2:         // pen down
                penDown=TRUE;
                break;
            case 3:         // turn right
                direction=turnRight(direction);
                break;
            case 4:         // turn left
                direction=turnLeft(direction);
                break;
            case 5:
                distance=commandArray[count][1];
                movePen(penDown,floor,direction,distance);
                break;
            case 6:         // drawing
                printf("\nThe drawing is:\n\n");
                printArray(floor);
                break;
        }
        command=commandArray[++count][0];
    }
    return 0;
}
void getCommands(int commands[][2]){

    int i,tempCommand;

    printf("Enter command(9 to end input): ");
    scanf("%d",&tempCommand);

    for (i=0;tempCommand!=9&&i<MAX;i++){

        commands[i][0]=tempCommand;

        if(tempCommand==5){
            scanf("%d",&commands[i][1]);
        }
        printf("Enter command(9 to end input): ");
        scanf("%d",&tempCommand);
    }
    commands[i][0]=9;
}
int turnRight(int d){
                                    //  return ++d > 3 ? 0 : d;
    if(++d>3){
        return 0;
    }
    else{
        return d;
    }
}
int turnLeft(int d){
                                    //  return --d < 0 ? 3 : d;
    if(--d<0){
        return 3;
    }
    else{
        return d;
    }
}
void movePen(int down, int a[][SIZE], int dir, int dist){

    int i,j;
    static int xPos=0,yPos=0;

    switch(dir){
        case 0:
            for(j=1;j<=dist&&yPos+j<SIZE;j++){      // y+   (position)
                if(down){
                    a[xPos][yPos+j]=1;
                }
            }
            yPos+=j-1;
            break;
        case 1:
            for(i=1;i<=dist&&xPos+i<SIZE;i++){          // x+   (position)
                if(down){
                    a[xPos+i][yPos]=1;
                }
            }
            xPos+=i-1;
            break;
        case 2:
            for (j=1;j<=dist&&yPos-j>=0;j++){           // y-   (position)
                if (down) {
                    a[xPos][yPos-j]=1;
                }
            }
            yPos-=j-1;
            break;
        case 3:
            for (i=1;i<=dist&&xPos-i>=0;i++){           // x-  (position)
                if (down) {
                    a[xPos-i][yPos]=1;
                }
            }
            xPos-=i-1;
            break;
    }
}


void printArray(int a[][SIZE]){

    int i,j;

    for(i=0;i<SIZE;i++){
        for(j=0;j<SIZE;j++){
            if(a[i][j]==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

}
