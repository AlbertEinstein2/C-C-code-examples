#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Roll (void);



int main(){
    srand(time(NULL));

    int t_frequency[13]={0};            // total_frequency
    long i;

    int expected[ 13 ] = { 0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};

    for(i=1;i<36000;i++){

        ++t_frequency[Roll()];
    }

    printf( "%10s%10s%10s%10s\n", "Sum", "Total", "Expected", "Actual" );


    for(i=2;i<13;i++){
        printf("%10d%10d%9.3f%%%9.3f%%\n",i,t_frequency[i],
               100.0*expected[i]/36,100.0*t_frequency[i]/36000);
    }
    printf("\n");

    return 0;
}
int Roll (void){

    int dice1;
    int dice2;

    dice1=1+(rand()%6);
    dice2=1+(rand()%6);

    return dice1+dice2;
}
