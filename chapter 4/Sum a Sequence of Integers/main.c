#include <stdio.h>
#include <stdlib.h>

int main(){

    int num,sum=0,read;

    printf("Enter a number: ");
    scanf("%d",&read);

    printf("%d---->\t",read);

    for(num=1;num<=read;num++){
        sum+=num*100;
        printf("%d\t",num*100);
    }



    printf("\nThe sum: %d\n\n",sum);


    return 0;
}
