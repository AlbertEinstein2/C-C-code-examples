#include <stdio.h>
#include <stdlib.h>

//#define PRINT(x) printf("" #x "\n");
#define PRINT(x) printf("%s",(x));

int main(){

    char text[20]={"HELLO"};

    PRINT("The string entered was: ");
    PRINT(text);
    PRINT("\n");

    return 0;
}
