#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    FILE *filePtr;
    FILE *tempFilePtr;
    int c;
    char filename[30];

    printf("This program changes tabs to spaces.\n"
           "Enter a file to be modified: ");
    scanf("%29s",filename);

    if((filePtr=fopen(filename,"r+"))!=NULL){

        if((tempFilePtr=tmpfile() ) !=NULL){
            printf("\nThe file before modification is:\n");

           while((c=getc(filePtr))!=EOF){
                putchar(c);
                fprintf(tempFilePtr,"%c%c",c,c!='\n'?' ':'?');
            }
            rewind(tempFilePtr);
            rewind(filePtr);

            printf("\n\nThe file after modification is:\n");

            while((c=getc(tempFilePtr))!=EOF){
                putchar(c);
                putc(c,filePtr);
            }
        }
        else{
            printf("Temprory file could'nt have created\n");
        }
    }
    else{
        printf("The file \"%s\" couldn't open\n",filename);
    }
    return 0;
}
