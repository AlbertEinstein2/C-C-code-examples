#include <stdio.h>
#include <stdlib.h>

int main(){

    char c;
    char sentence1[100]={0};
    char sentence2[100]={0};
    int i;
    int option;
    char fileName[20];

    FILE *ptr;

    printf("What would you like to do\n"
           "1-read from stdin\n"
           "2-write to stdin\n"
           "3-read from a file\n"
           "4-write to a file\n"
           "5-to end!\n? ");
    scanf("%d",&option);

    while(option!=5){
        switch(option){
            case 1:                             //  read from stdin
                i=0;
                fputs("\nEnter a line of text(EOF to end):\n",stdout);
                while((c=fgetc(stdin))!=EOF){
                    sentence1[i++]=c;
                }
                sentence1[i]='\0';
                break;
            case 2:                             //  write to stdout
                if(sentence1[0]==NULL){
                    fputs("\nThere is no entered sentence!!\n",stdout);
                }
                else{
                    fputs("\nThe line entered was:  ",stdout);
                    fputs(&sentence1[1],stdout);
                }
                break;
            case 3:                            //  read from a file
                fputs("\nEnter name of file: ",stdout);
                scanf("\n%[^\n]",fileName);

                if((ptr=fopen(fileName,"r"))==NULL){
                    printf("File couldn't be opened(might not exist)!!\n");
                }
                else{
                    rewind(ptr);

                    fread(&sentence2,sizeof(char),1,ptr);
                    printf("The sentence in file is:  %s\n",sentence2);
                }
                break;
            case 4:                            //  write to a file
                fputs("\nEnter name of file: ",stdout);
                scanf("\n%[^\n]",fileName);

                if((ptr=fopen(fileName,"w"))==NULL){
                    printf("File wasn't opened!!\n");
                }
                else{
                    rewind(ptr);

                    printf("Enter the sentence to save in file: \n");
                    scanf("\n%[^\n]",sentence2);

                    fwrite(&sentence2,sizeof(char),1,ptr);
                }
                break;
            default:
                printf("Incorrect input!!\n");
                break;
        }
        printf("\nWhat would you like to do\n"
            "1-read from stdin\n"
            "2-write to stdin\n"
            "3-read from a file\n"
            "4-write to a file\n"
            "5-to end!\n? ");
        scanf("%d",&option);
    }
    return 0;
}
