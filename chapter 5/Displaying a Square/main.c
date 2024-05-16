#include <stdio.h>
#include <stdlib.h>

void square (int side);


int main(){

    int num;

    printf("Enter side of square: ");
    scanf("%d",&num);
    printf("\n");

    square(num);

    return 0;
}
void square (int side){

    int x,y;

    for(x=1;x<=side;x++){
        for(y=1;y<=side;y++){
            printf("*");
        }
        printf("\n");
    }

}
