#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void digitExtractor(int pNumber,int num[]);          //  pNumber == phone number
void wordGeneretor(int num[]);
void comparison(void );

int main(){

    int number=0;
    int digits[7]={0};

    printf("Enter your phone number: ");
    scanf("%d",&number);

    digitExtractor(number,digits);
    wordGeneretor(digits);
    comparison();

    return 0;
}
void digitExtractor(int pNumber,int num[]){

    int divisor=1000000;        // for seven-digit numbers
    int i=0;

    while(pNumber>0){
        num[i++]=pNumber/divisor;
        pNumber%=divisor;
        divisor/=10;
    }
}
void wordGeneretor(int num[]){

    int i=0;
    int loop;
    int loop1;
    int loop2;
    int loop3;
    int loop4;
    int loop5;
    int loop6;
    int loop7;

    char *phoneLetters[10]={"","","ABC","DEF","GHI","JKL","MNO","PRS","TUV","WXY"};

    FILE *foutPtr;

    if((foutPtr=fopen("phone.dat","w"))==NULL){
        printf("File was not opened.\n");
    }
    else{
        fprintf(foutPtr,"Your phone number is ");
        for(loop=0;loop<7;loop++){
            if(loop==3){
                fprintf(foutPtr,"-");
            }
            fprintf(foutPtr,"%d",num[loop]);
        }
        fprintf(foutPtr,"\n\n");

        for(loop1=0;loop1<3;loop1++){
            for(loop2=0;loop2<3;loop2++){
                for(loop3=0;loop3<3;loop3++){
                    for(loop4=0;loop4<3;loop4++){
                        for(loop5=0;loop5<3;loop5++){
                            for(loop6=0;loop6<3;loop6++){
                                for(loop7=0;loop7<3;loop7++){
                                    if(i++%18==0){
                                        fprintf(foutPtr,"\n");
                                    }
                                    fprintf(foutPtr,"%c%c%c%c%c%c%c\t",
                                            phoneLetters[num[0]][loop1],
                                            phoneLetters[num[1]][loop2],
                                            phoneLetters[num[2]][loop3],
                                            phoneLetters[num[3]][loop4],
                                            phoneLetters[num[4]][loop5],
                                            phoneLetters[num[5]][loop6],
                                            phoneLetters[num[6]][loop7]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d words are successfully generetad!\n\n",i);
    fclose(foutPtr);
}
void comparison(void){

    int i;

    FILE *fPtr;         // file which includes the words
    FILE *dPtr;         // dictionary
    FILE *mPtr;         // matched words

    char wordF[10]="";     // word read from the file
    char wordD[10]="";     // word read from dictionary

    fPtr=fopen("phone.dat","r");
    dPtr=fopen("dictionary.dat","r");
    mPtr=fopen("matched words.dat","w+");

    while(!feof(dPtr)){
        fscanf(dPtr," %s",wordD);

        fseek(fPtr,35,SEEK_SET);

        while(!feof(fPtr)){
            fscanf(fPtr," %s",wordF);

            if(strcmp(wordF,wordD)==0){
                fprintf(mPtr,"%s%10s",wordF," ");
            }
        }
    }
    fseek(mPtr,0,SEEK_END);
                                                                        ///  *********************
    if(!feof(mPtr)){                                                    ///  *                   *
        printf("Matching process is accomplished successfully!!\n"      ///  *   NOT WORKÝNG     *
               "The words are saved in \"matched words\"\n\n");         ///  *                   *
    }                                                                   ///  *********************
    else{
        printf("Matching process FAILED!!!\n"
               "No-matched-word found!!!\n\n");
    }


    fclose(fPtr);
    fclose(dPtr);
    fclose(mPtr);
}
