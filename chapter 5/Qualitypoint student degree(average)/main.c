#include <stdio.h>
#include <stdlib.h>

int qualityPoints (int average);

int main(){
    int x;
    printf("Enter average or student:");
    scanf("%d",&x);

    printf("The average in 4th scale(between 0-4) is: %d",qualityPoints(x));
    return 0;
}
int qualityPoints (int average){

    if(90<=average&&average<=100){
        return 4;
    }
    else if(80<=average&&average<=89){
        return 3;
    }
    else if(70<=average&&average<=79){
        return 2;
    }
    else if(60<=average&&average<=69){
        return 1;
    }
    else
        return 0;

}
