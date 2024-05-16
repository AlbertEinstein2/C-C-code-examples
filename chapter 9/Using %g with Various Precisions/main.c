#include <stdio.h>
#include <stdlib.h>

int main(){


    printf("Precision:  %d, value = %.1g\n",1,9876.12345);
    printf("Precision:  %d, value = %.2g\n",2,9876.12345);
    printf("Precision:  %d, value = %.3g\n",3,9876.12345);
    printf("Precision:  %d, value = %.4g\n",4,9876.12345);
    printf("Precision:  %d, value = %.5g\n",5,9876.12345);
    printf("Precision:  %d, value = %.6g\n",6,9876.12345);
    printf("Precision:  %d, value = %.7g\n",7,9876.12345);
    printf("Precision:  %d, value = %.8g\n",8,9876.12345);
    printf("Precision:  %d, value = %.9g\n",9,9876.12345);
    printf("Precision: %d, value = %.10g\n",10,9876.12345);


    return 0;
}
