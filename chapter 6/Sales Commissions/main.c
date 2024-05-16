#include <stdio.h>
#include <stdlib.h>

int main(){

    int counter[9]={0};

    int gross;
    int comission;

    while(gross!=-1){

        printf("Enter the gross for the salesperson:");
        scanf("%d",&gross);
        if(gross!=-1){

            comission=200+(0.09*gross);

            if(200<comission&&comission<299){
                counter[0]++;
            }
            else if(300<comission&&comission<399){
                counter[1]++;
            }
            else if(400<comission&&comission<499){
                counter[2]++;
            }
            else if(500<comission&&comission<599){
                counter[3]++;
            }
            else if(600<comission&&comission<699){
                counter[4]++;
            }
            else if(700<comission&&comission<799){
                counter[5]++;
            }
            else if(800<comission&&comission<899){
                counter[6]++;
            }
            else if(900<comission&&comission<999){
                counter[7]++;
            }
            else if(1000<=comission){
                counter[8]++;
            }
        }
    }
    printf("\nfrequency (of the range $200-299):%d\n"
           "frequency (of the range $300-399):%d\n"
           "frequency (of the range $400-499):%d\n"
           "frequency (of the range $500-599):%d\n"
           "frequency (of the range $600-699):%d\n"
           "frequency (of the range $700-799):%d\n"
           "frequency (of the range $800-899):%d\n"
           "frequency (of the range $900-999):%d\n"
           "frequency (of the range $1000 and over):%d\n"
           ,counter[0],counter[1],counter[2],counter[3],
           counter[4],counter[5],counter[6],counter[7],
           counter[8]);

    return 0;
}
