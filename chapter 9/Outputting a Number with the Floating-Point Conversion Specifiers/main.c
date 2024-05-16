#include <stdio.h>
#include <stdlib.h>

int main(){


    float a[3];

    char *s[]={"Read with %e:","Read with %f:","Read with %g:"};

    printf("Enter the value 1.2345 three times: ");
    scanf("%e%f%g",&a[0],&a[1],&a[2]);


    printf("%s%e\n\n",s[0],a[0]);
    printf("%s%f\n\n",s[1],a[1]);
    printf("%s%g\n\n",s[2],a[2]);



    return 0;
}
