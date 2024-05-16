#include <stdio.h>
#include <stdlib.h>


int main(){

    FILE * ptr;

    if((ptr=fopen("datasize.dat","w"))==NULL){
        printf("File was not opened.\n");
    }
    else{
        fprintf(ptr,"\n%-18s%25s\n","Data type","Size");
        fprintf(ptr,"\n%-18s%25d\n","char",sizeof(char));
        fprintf(ptr,"\n%-18s%25d\n","unsigned char",sizeof(unsigned char));
        fprintf(ptr,"\n%-18s%25d\n","short int",sizeof(short int));
        fprintf(ptr,"\n%-18s%25d\n","unsigned short int",sizeof(unsigned short int));
        fprintf(ptr,"\n%-18s%25d\n","int",sizeof(int));
        fprintf(ptr,"\n%-18s%25d\n","unsigned int",sizeof(unsigned int));
        fprintf(ptr,"\n%-18s%25d\n","long int",sizeof(long int));
        fprintf(ptr,"\n%-18s%25d\n","unsigned long int",sizeof(unsigned long int));
        fprintf(ptr,"\n%-18s%25d\n","float",sizeof(float));
        fprintf(ptr,"\n%-18s%25d\n","double",sizeof(double));
        fprintf(ptr,"\n%-18s%25d\n","long double",sizeof(long double));

    }
    printf("Data type writing is accomplished successfully!\n\n");
    fclose(ptr);


    return 0;
}
/*
                char
                unsigned char 1
                short int 2
                unsigned short int 2
                int 4
                unsigned int 4
                long int 4
                unsigned long int 4
                float 4
                double 8
long double
*/
