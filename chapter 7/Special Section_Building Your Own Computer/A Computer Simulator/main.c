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

/* Input-Output operations */

#define READ 10     //  Read a word from the terminal into a specific location in memory.
#define WRITE 11    //  Write a word from a specific location in memory to the terminal.

/* Load-Store operations */

#define LOAD 20     //  Load a word from a specific location in memory into the accumulator.
#define STORE 21    //  Store a word from the accumulator into a specific location in memory.

/* Arithmetic operations */

#define ADD 30         //  Add a word from a specific location in memory to the word in the accumulator (leave result in accumulator).
#define SUBTRACT 31    //  Subtract a word from a specific location in memory from the word in the accumulator (leave result in accumulator).
#define DIVIDE 32      //  Divide a word from a specific location in memory into the word in the accumulator (leave result in accumulator).
#define MULTIPLY 33    //  Multiply a word from a specific location in memory by the word in the accumulator (leave result in accumulator).

/* Transfer of control operations */

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

void branchFunc(int *instruction,const int *elementPtr);

int main(){

    int memory[SIZE]={0};        //  1007-->  10 means READ -- 07 is location
    int accumulator=0;              //  a “special register” in which information is put before the Simpletron uses
                                    //  that information in calculations or examines it in various ways

    int instructionCounter=0;
    int operationCode=0;
    int operand=0;
    int instructionRegister=0;

    int i,word;


    /****************************************
     *                                      *
     *      before running an SML program,  *
     *       it must be loaded or placed    *
     *               into memory            *
     *                                      *
     *                                      *
     ****************************************/

    printf("         *** Welcome to Simpletron! ***\n"
           "*** Please enter your program one instruction ***\n"
           "*** (or data word) at a time. I will type the ***\n"
           "*** location number and a question mark (?). ***\n"
           "*** You then type the word for that location. ***\n"
           "*** Type the sentinel -99999 to stop entering ***\n"
           "            *** your program. ***\n\n");

    for(i=0;i<SIZE&&word!=-99999;i++){
        printf("%.2d ? ",i);
        scanf("%d",&word);

        while((-9999>=word||word>=9999)&&word!=-99999){
            printf("Enter a number between -9999 and 9999!!!\n");
            printf("%.2d ? ",i);
            scanf("%d",&word);
        }
        if(word!=-99999){
            memory[i]=word;
        }
    }
    printf("\n*** Program loading completed ***\n"
           "*** Program execution begins  ***\n\n");

    printf("Instructions you've entered:\n");
    printf("\nREGISTERS:\n");
    printf("accumulator:%11s%.4d\n",accumulator>=0?"+":"-",accumulator);
    printf("instructionCounter:%8.2d\n",instructionCounter);
    printf("instructionRegister:%3s%.4d\n","+",instructionRegister);
    printf("operationCode:%13.2d\n",operationCode);
    printf("operand:%19.2d\n",operand);
    printArray(memory);
    printf("\n");

    while(1){

        instructionRegister=memory[instructionCounter++];
        operationCode=operation(&instructionRegister);
        operand=location(&instructionRegister);

        switch(operationCode){
            case HALT:
                    puts("*** Simpletron execution terminated ***");
                break;
            case READ:
                    readFunc(memory,&operand);
                break;
            case WRITE:
                    writeFunc(memory,&operand);
                break;
            case LOAD:
                    loadFunc(memory,&operand,&accumulator);
                break;
            case STORE:
                    storeFunc(memory,&operand,&accumulator);
                break;
            case ADD:
                    addFunc(memory,&operand,&accumulator);
                break;
            case SUBTRACT:
                    subtractFunc(memory,&operand,&accumulator);
                break;
            case DIVIDE:
                    if(accumulator!=0){
                        divideFunc(memory,&operand,&accumulator);
                    }
                    else{
                        printf("*** Attempt to divide by zero ***\n"
                               "*** Simpletron execution abnormally terminated ***\n");
                        operationCode=HALT;
                    }
                break;
            case MULTIPLY:
                    multiplyFunc(memory,&operand,&accumulator);
                break;
            case BRANCH:
                    branchFunc(&instructionCounter,&operand);
                break;
            case BRANCHNEG:
                    if(accumulator<0){
                        branchFunc(&instructionCounter,&operand);
                    }
                break;
            case BRANCHZERO:
                    if(accumulator==0){
                        branchFunc(&instructionCounter,&operand);
                    }
                break;
            default:
                    printf("*** Invalid operation code detected ***\n"
                           "*** Simpletron execution abnormally terminated ***\n");
                    operationCode=HALT;
                break;
        }
        if(-9999>=accumulator||accumulator>=9999){
            printf("*** Accumulator overflows ***\n"
                   "*** Simpletron execution abnormally terminated ***\n");
            operationCode=HALT;
        }
        if(operationCode==43){
            break;
        }
    }
    printf("\nREGISTERS:\n");
    printf("accumulator:%11s%.4d\n",accumulator>=0?"+":"-",accumulator);
    printf("instructionCounter:%8.2d\n",instructionCounter);
    printf("instructionRegister:%3s%.4d\n","+",instructionRegister);
    printf("operationCode:%13.2d\n",operationCode);
    printf("operand:%19.2d\n",operand);
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
    scanf("%d",&a[*word]);
    a[SIZE-1]=++i;                              //  counter for each input
}
void writeFunc(int a[],const int *word){
    printf("\n%d\n",a[*word]);
}
void loadFunc(int * const a,const int *word,int *accum){
    *accum=a[*word];
}
void storeFunc(int * const a,const int *word,int *accum){
    *(a+*word)=*accum;
}
void addFunc(int * const a,const int *word,int *accum){
    *accum+=*(a+*word);
}
void subtractFunc(int * const a,const int *word,int *accum){
    *accum-=*(a+*word);
}
void divideFunc(int * const a,const int *word,int *accum){
    *accum=*(a+*word)/ *accum;
}
void multiplyFunc(int * const a,const int *word,int *accum){
    *accum*=*(a+*word);
}
void branchFunc(int *instruction,const int *elementPtr){
    *instruction=*elementPtr;
}
