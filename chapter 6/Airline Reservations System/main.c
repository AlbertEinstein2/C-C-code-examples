#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int plane[11]={0};                  // capasity 10 seats        // 0 means empty --- 1 means full (for one seat)
    int flight=1;
    int clas_s;
    int seat;                       // counter for seats
    char f_full[4];                     // first_full for checking if first class is full

    while(flight<=10){

        printf("What's your choice?\n\n"
               "1 for \"first class\"\n"
               "2 for \"economy class\"\n");
        scanf("%d",&clas_s);

        switch(clas_s){
            case 1:                                                 // for first class

                for(seat=1;seat<=5;seat++){

                    if(plane[5]==1){
                        printf("First class is full. DO you want to reserve economy class?(yes/no):");
                        scanf("%s",f_full);

                        if(strcmp("yes",f_full)==0){
                            for(seat=6;seat<=10;seat++){
                                if(plane[seat]==0){                 // means 'empty'
                                    plane[seat]=1;
                                    printf("Your seat assignment is %d\n",seat);
                                    break;
                                }
                                else{                               // means 'not empty'
                                    continue;
                                }
                            }
                        }
                        else if(strcmp ("no",f_full)==0){
                            printf("Next flight leaves in 3 hours.\n\n");
                        }

                    }

                    if(plane[seat]==0){                 // means 'empty'
                        plane[seat]=1;
                        printf("Your seat assignment is %d\n",seat);
                        break;
                    }

                    else{
                        continue;                         // means 'not empty'
                    }
                }
                break;
            case 2:                                         // for economy class

                for(seat=6;seat<=10;seat++){
                    if(plane[seat]==0){                 // means 'empty'
                        plane[seat]=1;
                        printf("Your seat assignment is %d\n",seat);
                        break;
                    }
                    else{                               // means 'not empty'
                        continue;
                    }
                }

                break;
        }



        flight++;
    }




    return 0;
}
