#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 70

void printCurrentPositions(const int *snapperPtr,const int *bunnyPtr);
void moveTortoise(int *tort);
void moveHAre(int *haree);

int main(){

    srand(time(NULL));
    register int timer=0;
    int hare=1;
    int tortoise=1;

    printf("%s\n%s","BANG\t\t!!!!!","AND THEY'RE OFF\t!!!!!\n");

    while(hare!=SIZE&&tortoise!=SIZE){
        moveTortoise(&tortoise);
        moveHAre(&hare);
        printCurrentPositions(&tortoise,&hare);
        ++timer;
    }
    if (tortoise>=hare){
        printf("\nTORTOISE WINS!!! YAY!!!\n");
    }
    else{
        printf("Hare wins. Yuch.\n");
    }
    printf("TIME ELAPSED = %d seconds\n\n",timer);

    return 0;
}
void moveTortoise(int *tort){

    int Tortoise(void);

    switch(Tortoise()){
        case 0:                 // Fast plod
            *tort+=3;
            break;
        case 1:                 // Slip
            *tort-=6;
            break;
        case 2:                 // Slow plod
            (*tort)++;
            break;
    }
    if(*tort<1){
        *tort=1;
    }
    if(*tort>70){
        *tort=70;
    }

}
void moveHAre(int *haree){

    int HAre(void);

    switch(HAre()){
        case 0:                 // Sleep

            break;
        case 1:                 // Big hop
            *haree+=9;
            break;
        case 2:                 // Big slip
            *haree-=12;
            break;
        case 3:                 // Small hop
            (*haree)++;
            break;
        case 4:                  // Small slip
            *haree-=2;
            break;
    }
    if(*haree<1){
        *haree=1;
    }
    if(*haree>70){
        *haree=70;
    }
}
int Tortoise(void){

    int i=1+rand()%10;

    if(1<=i&&i<=5)
        return 0;     // Fast plod
    else if(6==i||i==7)
        return 1;        // Slip
    else if(8<=i&&i<=10)
        return 2;        // Slow plod
}
int HAre(void){

    int i=1+rand()%10;

    if(1==i||i==2)
        return 0;     // Sleep
    else if(3==i||i==4)
        return 1;        // Big hop
    else if(i==5)
        return 2;        // Big slip
    else if(6<=i&&i<=8)
        return 3;        // Small hop
    else if(9==i||i==10)
        return 4;        // Small slip
}
void printCurrentPositions(const int *snapperPtr,const int *bunnyPtr){

    int i;

    for(i=1;i<=SIZE;i++)

        if(i==*snapperPtr&&i==*bunnyPtr){
            printf("OUCH!!!");
        }
        else if(*snapperPtr==i){
            printf("T");
        }
        else if(*bunnyPtr==i){
            printf("H");
        }
        else{
            printf(" ");
        }

    printf("\n");
}
