#include <stdio.h>
#include <stdlib.h>

void fillCharacter (int side, char zz);

int main(){

    int x;
    char z;

    printf("Enter a character: ");
    scanf("%c",&z);
    printf("Enter side of square: ");
    scanf("%d",&x);


    fillCharacter(x,z);

    return 0;
}
void fillCharacter (int side, char zz){

    int x,y;

    for(x=1;x<=side;x++){
        for(y=1;y<=side;y++){
            printf("%c",zz);
        }
        printf("\n");
    }
}
