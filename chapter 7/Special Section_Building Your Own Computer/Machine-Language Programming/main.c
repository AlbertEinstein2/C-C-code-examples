/************************************************
 *        PROJECT: MAKING A COMPUTER            *
 *                                              *
 *      A COMPUTER (CALLED SIMPLETRON)          *
 *       CAN ONLY UNDERSTAND ITS OWN            *
 *    MACHINE-LANGUAGE (CALLED SIMPLETRON       *
 *     MACHINE-LANGUAGE (SML FOR SHORT))        *
 ************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Input-Output operations*/

#define READ 10     //  Read a word from the terminal into a specific location in memory.
#define WRITE 11    //  Write a word from a specific location in memory to the terminal.

/* Load-Store operations*/

#define LOAD 20     //  Load a word from a specific location in memory into the accumulator.
#define STORE 21    //  Store a word from the accumulator into a specific location in memory.

/* Arithmetic operations*/

#define ADD 30         //  Add a word from a specific location in memory to the word in the accumulator (leave result in accumulator).
#define SUBTRACT 31    //  Subtract a word from a specific location in memory from the word in the accumulator (leave result in accumulator).
#define DIVIDE 32      //  Divide a word from a specific location in memory into the word in the accumulator (leave result in accumulator).
#define MULTIPLY 33    //  Multiply a word from a specific location in memory by the word in the accumulator (leave result in accumulator).

/* Transfer of control operations*/

#define BRANCH 40       //  Branch to a specific location in memory.
#define BRANCHNEG 41    //  Branch to a specific location in memory if the accumulator is negative.
#define BRANCHZERO 42   //  Branch to a specific location in memory if the accumulator is zero.
#define HALT 43         //  Halt—i.e., the program has completed its task.

void printArray(const int * const a);
int operation(const int *numPtr);
int location(const int *numPtr);

#define SIZE 100        //  Memory size

/******************************
 *  FUNCTIONS FOR OPERATIONS  *
 ******************************/

void readFunc(int * const a,const int *word);
void writeFunc(int * const a,const int *word);

void loadFunc(int * const a,const int *word,int *accum);    // accum means accumulator
void storeFunc(int * const a,const int *word,int *accum);

void addFunc(int * const a,const int *word,int *accum);
void subtractFunc(int * const a,const int *word,int *accum);
void divideFunc(int * const a,const int *word,int *accum);
void multiplyFunc(int * const a,const int *word,int *accum);

void branchFunc(int * const a,const int *word,int *elementPtr,int *accum);
void branchNegFunc(int * const a,const int *word,int *accum);
void branchZeroFunc(int * const a,const int *word,int *accum);

int main(){

    int memory[SIZE]={0};        //  1007-->  10 means READ -- 07 is location
    int accumulator=0;              //  a “special register” in which information is put before the Simpletron uses
                                    //  that information in calculations or examines it in various ways
    int instruction=0;
    int i,word;
    register int counter=0;
    /****************************************
     *                                      *
     *      before running an SML program,  *
     *       it must be loaded or placed    *
     *               into memory            *
     *                                      *
     *                                      *
     ****************************************/

    printf("Enter instructions:\n");
    /*      --- A ---      */
 /*   for(i=0;i<SIZE&&word!=-99999;i++){
        printf("Instructions %.2d: ",i);
        scanf("%d",&word);
        if(word==-99999){
            break;
        }
        else{
            memory[i]=word;
        }
    }
    /*      --- B ---      */
 /*   for(i=0;i<SIZE&&operation(&memory[i-1])!=HALT;){
        printf("Instructions %.2d: ",i);
        scanf("%d",&word);
        if(operation(&word)==READ&&counter<7){
            ++counter;
            memory[i]=word;
            i++;
        }
        else if(operation(&word)!=READ&&counter>=7){
            memory[i]=word;
            i++;
        }
        else if(operation(&word)!=READ&&counter<7){
            memory[i]=word;
            i++;
        }
    }
    /*      --- C ---      */
 /*   for(i=0;i<SIZE&&operation(&memory[i-1])!=HALT;){
        printf("Instructions %.2d: ",i);
        scanf("%d",&word);
        if(i==0){
            memory[i]=word;
            i++;
        }
        else if(operation(&word)!=READ&&counter>=7){
            memory[i]=word;
            i++;
        }
        else if(operation(&word)!=READ&&counter<7){
            memory[i]=word;
            i++;
        }
    }
    */

    printf("Instructions you've entered:\n");
    printArray(memory);
    printf("\n");
    while(operation(&memory[instruction])!=HALT){

        switch(operation(&memory[instruction])){
            case READ:
                    readFunc(memory,&memory[instruction]);
                break;
            case WRITE:
                    writeFunc(memory,&memory[instruction]);
                break;
            case LOAD:
                    loadFunc(memory,&memory[instruction],&accumulator);
                break;
            case STORE:
                    storeFunc(memory,&memory[instruction],&accumulator);
                break;
            case ADD:
                    addFunc(memory,&memory[instruction],&accumulator);
                break;
            case SUBTRACT:
                    subtractFunc(memory,&memory[instruction],&accumulator);
                break;
            case DIVIDE:
                    divideFunc(memory,&memory[instruction],&accumulator);
                break;
            case MULTIPLY:
                    multiplyFunc(memory,&memory[instruction],&accumulator);
                break;
            case BRANCH:
                    branchFunc(memory,&memory[instruction],&memory[instruction-1],&accumulator);
                break;
            case BRANCHNEG:
                    branchNegFunc(memory,&memory[instruction],&accumulator);
                break;
            case BRANCHZERO:
                    branchZeroFunc(memory,&memory[instruction],&accumulator);
                break;


        }
        instruction++;
    }
    printf("\n\n");
    printArray(memory);

    return 0;
}
void printArray(const int * const a){

    int i;

    printf("%2s"," ");
    for(i=0;i<10;i++){
        printf("%8d",i);
    }
    printf("\n");
    for(i=0;i<SIZE;i++){
        if(i%10==0){
            printf("%2d",i);
        }
        *(a+i)>=0?printf("%4c",'+'):printf("%3s"," ");
        printf("%.4d",a[i]);
        if((i+1)%10==0){
            printf("\n");
        }
    }
}
int operation(const int *numPtr){
    return ((*numPtr/100)%100);
}
int location(const int *numPtr){
        return (*numPtr%100);
}
/*  OPERATION FUNCTIONS  */
void readFunc(int a[],const int *word){
    static int i=0;
    scanf("%d",&a[location(&*word)]);
    a[SIZE-1]=++i;                              //  counter for each input
}
void writeFunc(int a[],const int *word){
    printf("\n%d\n",a[location(&*word)]);
}
void loadFunc(int * const a,const int *word,int *accum){
    *accum=a[location(&*word)];
}
void storeFunc(int * const a,const int *word,int *accum){
    *(a+location(&*word))=*accum;
}
void addFunc(int * const a,const int *word,int *accum){
    *accum+=*(a+location(&*word));
}
void subtractFunc(int * const a,const int *word,int *accum){
    *accum-=*(a+location(&*word));
}
void divideFunc(int * const a,const int *word,int *accum){
    *accum=*(a+location(&*word))/ *accum;
}
void multiplyFunc(int * const a,const int *word,int *accum){
    *accum*=*(a+location(&*word));
}
void branchFunc(int * const a,const int *word,int *elementPtr,int *accum){


    if(*accum>*elementPtr){
        storeFunc(a,&*word,&*accum);
    }
    else{
        storeFunc(a,&*word,&*elementPtr);
    }
}
void branchNegFunc(int * const a,const int *word,int *accum){
    if(*accum<0){
        a[location(&*word)]=*accum;
    }
}
void branchZeroFunc(int * const a,const int *word,int *accum){
    if(*accum==0){
        a[location(&*word)]=*accum;
    }
}


