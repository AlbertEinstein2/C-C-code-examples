#include <stdio.h>
#include <stdlib.h>

void hanoi(int disk,int peg1,int peg2, int peg3);



int main(){

    int size=3;                    // size of disks (descending)

    hanoi(size,1,3,2);

    return 0;
}
void hanoi(int disk,int peg1,int peg2,int peg3){

    /* base case */
    if(disk==1){
        printf("%d --> %d\n",peg1,peg2);
        return ;
    }
    /* move disk - 1 disks from start to temp */
    hanoi (disk-1,peg1,peg3,peg2);

    /* move last disk from start to end */
    printf("%d --> %d\n",peg1,peg2);

    /* move disk - 1 disks from temp to end */
    hanoi (disk-1,peg3,peg2,peg1);
}
