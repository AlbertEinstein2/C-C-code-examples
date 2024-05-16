#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char text[3][100];
    int i,j;
    char key;
    char *ptr;
    char alphabet[26]={0};

    puts("Enter three lines of text:");
    for(i=0;i<3;i++){
        gets(&text[i][0]);
    }
    for(i=0;i<26;i++){
        for(j=0;j<3;j++){
            ptr=&text[j][0];
            while(ptr=strchr(ptr,'a'+i)){
                ++alphabet[i];
                ptr++;
            }
        }
    }
    printf( "\nThe total occurrences of each character:\n" );

    for(i=0;i<26;i++){
        printf("%c:%3d\n",'a'+ i,alphabet[i]);
    }



    return 0;
}
