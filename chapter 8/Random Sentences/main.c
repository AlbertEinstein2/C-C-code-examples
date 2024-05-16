#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

void sentenceMaker(char *sent,const char *art[],
                   const char *nou[],const char *ver[],
                   const char *prep[]);


int main(){

    srand(time(NULL));
    int i;
    char sentence[40];

    char *article[5]={"the ","a ","one ","some ","any "};
    char *noun[5]={"boy ","girl ","dog ","town ","car "};
    char *verb[5]={"drove ","jumped ","ran ","walked ","skipped "};
    char *preposition[5]={"to ","from ","over ","under ","on "};

    for(i=1;i<=20;i++){
        printf("%2.2d. ",i);
        sentenceMaker(sentence,article,noun,verb,preposition);
    }
    return 0;
}
void sentenceMaker(char *sent,const char *art[],
                   const char *nou[],const char *ver[],
                   const char *prep[]){

    int i;
    sent[0]='\0';

    strcat(sent,art[rand()%5]);
    strcat(sent,nou[rand()%5]);
    strcat(sent,ver[rand()%5]);
    strcat(sent,prep[rand()%5]);
    strcat(sent,art[rand()%5]);
    strcat(sent,nou[rand()%5]);

    sent[0]=toupper(sent[0]);

    for(i=0;sent[i]!=NULL;i++);
    sent[--i]='.';

    puts(sent);
}
