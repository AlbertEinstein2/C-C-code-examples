#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int product(int arg_c,...);

int main(){

    int w = 37;
    int x = 22;
    int y = 15;
    int z = 10;

    printf("%s%d\n%s%d\n%s%d\n%s%d\n\n",
           "w = ",w,"x = ",x,"y = ",y,"z = ",z);
    printf("%s%d\n%s%d\n%s%d\n",
           "The product of w and x is ",product(2,w,x),
           "The product of w, x, and y is ",product(3,w,x,y),
           "The product of w, x, y, and z is ",
            product(4,w,x,y,z));

    return 0;
}
int product(int arg_c,...){

    int product=1;
    int i;
    va_list ap;

    va_start(ap,arg_c);

    for(i=1;i<=arg_c;i++){
        product*=va_arg(ap,int);
    }
    va_end(ap);
    return product;
}
