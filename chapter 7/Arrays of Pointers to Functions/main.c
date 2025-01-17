#include <stdio.h>
#include <stdlib.h>

#define STUDENTS 3
#define EXAMS 4

void minimum(const int grades[][EXAMS],int pupils,int tests);
void maximum(const int grades[][EXAMS],int pupils,int tests);
void average(const int grades[][EXAMS],int pupils,int tests);
void printArray(const int grades[][EXAMS],int pupils,int tests);

int main(){

    int choice;

    const int studentGrades[STUDENTS][EXAMS]=
        { { 77, 68, 86, 73 },
          { 96, 87, 89, 78 },
          { 70, 90, 86, 81 } };

    void (*processGrades[4])(const int,int,int)={printArray,minimum,maximum,average};


    printf("Enter a choice:\n"
           "  0  Print the array of grades\n"
           "  1  Find the minimum grade\n"
           "  2  Find the maximum grade\n"
           "  3  Print the average on all tests for each student\n"
           "  4  End program\n");
    scanf("%d",&choice);

    while(0<=choice&&choice<=3){

        (*processGrades[choice])(studentGrades,STUDENTS,EXAMS);
        printf("\nEnter a choice:\n"
           "  0  Print the array of grades\n"
           "  1  Find the minimum grade\n"
           "  2  Find the maximum grade\n"
           "  3  Print the average on all tests for each student\n"
           "  4  End program\n");
        scanf("%d",&choice);
    }
    printf("Program execution completed.\n");

    return 0;
}
void minimum( const int grades[][ EXAMS ], int pupils, int tests ){

    int i,j;
    int lowGrade = 100;

    for(i=0;i<pupils;i++){

        for(j=0;j<tests;j++){

            if(grades[i][j]<lowGrade){
                lowGrade=grades[i][j];
            }
        }
    }
    printf("Lowest grade: %d\n",lowGrade);
}
void maximum(const int grades[][EXAMS],int pupils,int tests){

    int i,j;
    int highGrade=0;

    for(i=0;i<pupils;i++){

        for(j=0;j<tests;j++){

            if(grades[i][j]>highGrade){
                highGrade=grades[i][j];
            }
        }
    }
    printf("Highest grade: %d\n",highGrade);
}
void average(const int grades[][EXAMS],int pupils,int tests){

    int i,j,total;

    for (i=0;i<pupils;i++){
        total=0;
        for(j=0;j<tests;j++){
            total+=grades[i][j];
        }
        printf("The average grade for student %d is %.2f\n",i,(double)total/tests);
    }
}
void printArray(const int grades[][EXAMS],int pupils,int tests){

    int i,j;

    printf("The array is:\n");
    printf("                 [0]  [1]  [2]  [3]");

    for(i=0;i<pupils;i++){

        printf("\nstudentGrades[%d] ",i);

        for(j=0;j<tests;j++){
            printf("%-5d",grades[i][j]);
        }
    }
    printf("\n");
}
