#include <stdio.h>
#include <stdlib.h>



int main() {
	
	FILE *dPtr;
	char word[10]="";
	int i=0;
	
	if((dPtr=fopen("dictionary.dat","w"))==NULL){
		printf("File wasn't opened!!'");
	}
	else{
		printf("Enter some word:\n? ");
		scanf("%s",word);
		
		while(++i <=5){
			
			fprintf(dPtr,"%s%15c",word," ");
			printf("? ");
			scanf("%s",word);
		}
	}
	
	fclose(dPtr);
	return 0;
}
