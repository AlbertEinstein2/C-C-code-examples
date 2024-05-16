#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

int main(){


    char a[SIZE]={0};
    char b[SIZE]={0};
    char c[SIZE]={0};

  //  printf("Enter the string suzy as you see: ");
  //  scanf("%s\"%[^\"]\'%[^\']",a,b,c);

    printf("Enter the string suzy as you see: ");
    scanf("%s",a);

    printf("Enter the string \"suzy\" as you see: ");
    scanf(" \"%[^\"]",b);
    //  scanf(" \"%[^\"]\"",b);

    printf("Enter the string \'suzy\' as you see: ");
    scanf("\" \'%[^\']",c);
    //  scanf(" \'%[^\']\'",c);

    printf("\n\na The string suzy is %s",a);
    printf("\n\nb The string \"suzy\" is %s",b);
    printf("\n\nc The string \'suzy\' is %s\n\n\n\n\n",c);

    return 0;
}
