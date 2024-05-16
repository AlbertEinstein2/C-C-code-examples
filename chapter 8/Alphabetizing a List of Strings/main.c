#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10


void sortArray(char a[][20]);

int main(){

    char cities[SIZE][20]={0};
    int i;

    puts("Enter 10 cities(after each press enter to input):");
    for(i=0;i<SIZE;i++){
        gets(&cities[i][0]);
    }
    printf("\n");
    puts("Cities in order:");
    printf("\n");

    sortArray(cities);
    for(i=0;i<SIZE;i++){
        puts(&cities[i][0]);
    }
    return 0;
}
void sortArray(char a[][20]){

    void swap(char *s1,char *s2);

    int pass,i,Swap;

    for(pass=0;pass<SIZE-1;pass++){

        Swap=1;
        for(i=0;i<(SIZE-1)-pass;i++){

            if(strcmp(&a[i][0],&a[i+1][0])>0){
                Swap=0;
                swap(&a[i][0],&a[i+1][0]);
            }
        }
        if(Swap){
            break;
        }
    }
}
void swap(char *s1,char *s2){

    char holder[20];
    int i;

    strcpy(holder,s1);
    strcpy(s1,s2);
    strcpy(s2,holder);

/*    for (i=0;holder[i]=*s1;i++,s1++);

    s1-=i;

    for (i=0;*s1=*s2;s1++,s2++,i++);
    s1-=i;
    s2-=i;
    for (i=0;*s2=holder[i];s2++,i++);
*/
}
