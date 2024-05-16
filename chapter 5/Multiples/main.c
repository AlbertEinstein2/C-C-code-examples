#include <stdio.h>
#include <stdlib.h>

int multiple(int num1,int num2);


int main(){

    int x,y;

    printf("Enter two number: ");
    scanf("%d%d",&x,&y);

    if(multiple(x,y)==1){
        printf("Second number is multiple of first!");
    }
    else{
        printf("Second number is not multiple of first!");
    }

    return 0;
}
int multiple(int num1,int num2){

    if(num2%num1==0){
        return 1;
    }
    else{
        return 0;
    }
}
