#include <stdio.h>
#include <stdlib.h>

int main(){


    int grade;
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;

    printf("Enter the letter grades.\n");
    printf("Enter the EOF character to end input.\n");

    while((grade=getchar())!=EOF){

        if(grade=='a'||grade=='A'){
            ++aCount;
        }
        else if(grade=='b'||grade=='B'){
            ++bCount;
        }
        else if(grade=='c'||grade=='C'){
            ++cCount;
        }
        else if(grade=='d'||grade=='D'){
            ++dCount;
        }
        else if(grade=='f'||grade=='F'){
            ++fCount;
        }
        else if(grade=='\n'||grade==' '||grade=='\t'){
            continue;
        }
        else{
            printf("Incorrect letter grade entered.");
            printf(" Enter a new grade.\n");
        }
    }
    printf("\nTotals for each letter grade are:\n");
    printf("A: %d\n", aCount);
    printf("B: %d\n", bCount);
    printf("C: %d\n", cCount);
    printf("D: %d\n", dCount);
    printf("F: %d\n", fCount);

    return 0;
}
