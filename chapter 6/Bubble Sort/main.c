#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(){

    int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    int pass;
    int i;
    int hold;
    int swap;

    printf( "Data items in original order\n" );

    for ( i = 0; i < SIZE; i++ ) {
        printf( "%4d", a[ i ] );
    }
    printf( "\n\n%s\n%s\n%s\n", "********", "    A", "********" );

    for ( pass = 1; pass < SIZE; pass++ ) {

        for ( i = 0; i < SIZE - pass; i++ ) {

            if ( a[ i ] > a[ i + 1 ] ) {
                hold = a[ i ];
                a[ i ] = a[ i + 1 ];
                a[ i + 1 ] = hold;
            }
        }
        printf( "After Pass %d: ", pass );

        for ( i = 0; i <= SIZE-pass; i++ ) {
            printf( " %d", a[ i ] );
        }
        printf( "\n" );
    }


    printf( "\nData items in ascending order\n" );

    for ( i = 0; i < SIZE; i++ ) {
        printf( "%4d", a[ i ] );
    }
    printf( "\n" );


    printf( "\n\n%s\n%s\n%s\n", "********", "    B", "********" );

    for ( pass = 1; pass < SIZE; pass++ ) {

        swap=0;

        for ( i = 0; i < SIZE - pass; i++ ) {

            if ( a[ i ] > a[ i + 1 ] ) {
                swap=1;
                hold = a[ i ];
                a[ i ] = a[ i + 1 ];
                a[ i + 1 ] = hold;
            }
        }
        printf( "After Pass %d: ", pass );

        for ( i = 0; i <= SIZE-pass; i++ ) {
            printf( " %d", a[ i ] );
        }
        printf( "\n" );
        if(!swap){
            break;
        }
    }
    printf( "\nData items in ascending order\n" );

    for ( i = 0; i < SIZE; i++ ) {
        printf( "%4d", a[ i ] );
    }
    printf( "\n" );


    return 0;
}
