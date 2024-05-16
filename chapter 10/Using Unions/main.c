#include <stdio.h>
#include <stdlib.h>

typedef union integer{

    char c;
    short s;
    int i;
    long b;

}Inte;

int main(){

    Inte value;

    printf("Enter a character: ");
    scanf("%c",&value.c);

    printf("\'%c'\ printed as a character is %c\n",value.c,value.c);
    printf("\'%c'\ printed as a short integer is %hd\n",value.c,value.s);
    printf("\'%c'\ printed as an integer is %d\n",value.c,value.i);
    printf("\'%c'\ printed as a long integer is %ld\n",value.c,value.b);

    printf("\nEnter a short integer: ");
    scanf("%hd",&value.s);

    printf("%hd printed as a character is %c\n",value.s,value.c);
    printf("%hd printed as a short integer is %hd\n",value.s,value.s);
    printf("%hd printed as an integer is %d\n",value.s,value.i);
    printf("%hd printed as a long integer is %ld\n",value.s,value.b);

    printf("\nEnter an integer: ");
    scanf("%d",&value.i);

    printf("%d printed as a character is %c\n",value.i,value.c);
    printf("%d printed as a short integer is %hd\n",value.i,value.s);
    printf("%d printed as an integer is %d\n",value.i,value.i);
    printf("%d printed as a long integer is %ld\n",value.i,value.b);

    printf("\nEnter an integer: ");
    scanf("%ld",&value.b);

    printf("%ld printed as a character is %c\n",value.b,value.c);
    printf("%ld printed as a short integer is %hd\n",value.b,value.s);
    printf("%ld printed as an integer is %d\n",value.b,value.i);
    printf("%ld printed as a long integer is %ld\n",value.b,value.b);


  /*
    puts("Enter a number for char: ");
    scanf("%c",&value.c);
    puts("Enter a number for short: ");
    scanf("%hd",&value.s);
    puts("Enter a number for int: ");
    scanf("%d",&value.i);
    puts("Enter a number for long: ");
    scanf("%ld",&value.b);

    printf("\n\n%d\n",value.c);
    printf("%hd\n",value.s);
    printf("%d\n",value.i);
    printf("%ld\n\n",value.b);
  */




    return 0;
}
