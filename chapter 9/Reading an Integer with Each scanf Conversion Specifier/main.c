#include <stdio.h>
#include <stdlib.h>

int main(){


    int array[5];
    int i;

    char *s[]={"Read with %d:","Read with %i:","Read with %o:",
               "Read with %u:","Read with %x:"};

    printf("Enter the value 437 five times: ");
    scanf("%d%i%o%u%x",&array[0],&array[1],&array[2],&array[3],&array[4]);

    for(i=0;i<5;i++){
        printf("%s\n%d %i %o %u %x\n\n",s[i],array[i],
           array[i],array[i],array[i],array[i]);
    }
    return 0;
}
