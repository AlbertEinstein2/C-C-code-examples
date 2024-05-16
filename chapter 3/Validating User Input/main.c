#include <stdio.h>
#include <stdlib.h>

int main( void ){

    int passes = 0;
    int failures = 0;
    int student = 1;
    int result;

    while ( student <= 10 ) {

        printf( "Enter result ( 1=pass,2=fail ): " );
        scanf( "%d", &result );

        if ( result == 1 ) {
            passes++;
            student++;
        }
        else if(result==2){
            failures++;
            student++;
        }
        else
            printf("\nINVALID INPUT!!!\n"
                   "ONLY INPUT 1 OR 2 ARE ACCEPTABLE!\n\n");

    }
    printf( "Passed %d\n", passes );
    printf( "Failed %d\n", failures );

    if ( passes > 8 ) {
        printf( "Bonus to instructor!\n" );
    }
    return 0;
}
