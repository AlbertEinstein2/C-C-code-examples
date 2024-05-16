#include <stdio.h>
#include <stdlib.h>

//#define SUMARRAY(a,n) for(int i=0,(int sum=0);i<(n);i++)\
                        sum+=a[i]                                   // it needs declaration (for i and sum) in main

#define SUMARRAY(a,n) for(int i=0;i<(n-1);i++)\
                        a[n-1]+=a[i]                                // a[n-1] for holding sum of numbers

int main(){

    int b[11]={1,2,3,4,5,6,7,8,9,10};

    SUMARRAY(b,11);
    printf("The sum of the elements of array b is %d\n",b[10]);


    return 0;
}
