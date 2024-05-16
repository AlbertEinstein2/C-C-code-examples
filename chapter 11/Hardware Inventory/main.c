#include <stdio.h>
#include <stdlib.h>

void blank100record(FILE *fptr);
void listf(FILE *fptr);
int enterChoice(void);
void deleteRecord(FILE *fptr);
void newRecord(FILE *fptr);
void updateRecord(FILE *fptr);

typedef struct{
    int record;
    char toolName[30];
    int quantity;
    double cost;
}Inventory;

int main(){

    FILE *hfPtr;

    int choice;

    if((hfPtr=fopen("hardware.dat","wb+"))==NULL){
        printf("File could not be opened.\n");
    }
    else{
        blank100record(hfPtr);

        while((choice=enterChoice())!=5){

            switch(choice){
                case 1:     //  List all tools
                    listf(hfPtr);
                    break;
                case 2:     //  Update tools
                    updateRecord(hfPtr);
                    break;
                case 3:     //  Add new tools
                    newRecord(hfPtr);
                    break;
                case 4:     //  Delete tools
                    deleteRecord(hfPtr);
                    break;
                default:
                    printf("Incorrect choice\n");
                    break;
            }
        }
        fclose(hfPtr);
    }
    return 0;
}
void blank100record(FILE *fptr){

    Inventory blank={0,"",0,0.0};

    int i;

    for(i=0;i<=100;i++){
        fwrite(&blank,sizeof(Inventory),1,fptr);
    }
}
void listf(FILE *fptr){

    Inventory tools={0,"",0,0.0};

    printf("%-10s%-20s%-11s%10s\n\n","Record#","Tool name","Quantity","Cost");
    rewind(fptr);

    while(!feof(fptr)){
        fread(&tools,sizeof(Inventory),1,fptr);

        if(tools.record!=0){
            printf("%-10d%-20s%-11d%11.2f\n",
                tools.record,tools.toolName,
                tools.quantity,tools.cost);
         }
      }
}
int enterChoice(void){

    int menuChoice;

    printf("\nEnter your choice\n"
        "1 - List all your tools\n"
        "2 - Update a tool\n"
        "3 - Add a new tool\n"
        "4 - Delete a tool\n"
        "5 - End program\n? ");

    scanf("%d",&menuChoice);
    return menuChoice;
}
void deleteRecord(FILE *fptr){

    Inventory tool;
    Inventory blank={0,"",0,0.0};

    int record;

    printf("Enter record number to delete (1-100): ");
    scanf("%d",&record);

    fseek(fptr,(record-1)*sizeof(Inventory),SEEK_SET);
    fread(&tool,sizeof(Inventory),1,fptr);

    if(tool.record==0){
        printf("Record #%d does not exist.\n", record );
    }
    else{
        fseek(fptr,(record-1)*sizeof(Inventory),SEEK_SET);
        fwrite(&blank,sizeof(Inventory),1,fptr);
    }
}
void newRecord(FILE *fptr){

    Inventory tools={0,"",0,0.0};

    int record;

    printf("Enter new record number (1-100): ");
    scanf("%d",&record);

    fseek(fptr,(record-1)*sizeof(Inventory),SEEK_SET);
    fread(&tools,sizeof(Inventory),1,fptr);

    if(tools.record!=0){
      printf("Record #%d already contains information.\n",tools.record);
    }
    else {
        printf("Enter tool name\n? ");
        scanf("\n%[^\n]",tools.toolName);
       // gets(tools.toolName);                     //  gets(tools.toolName) equals to scanf("%[^\n]%*c",tools.toolName)
        printf("Enter quantity and cost\n? ");
        scanf("\n%d%lf",&tools.quantity,&tools.cost);

        tools.record=record;

        fseek(fptr,(tools.record-1)*sizeof(Inventory),SEEK_SET);
        fwrite(&tools,sizeof(Inventory),1,fptr);
    }
}
void updateRecord(FILE *fptr){

    int record,quantity;
    double cost;

    Inventory tools={0,"",0,0.0};

    printf("Enter record to update (1-100): ");
    scanf("%d",&record);

    fseek(fptr,(record-1)*sizeof(Inventory),SEEK_SET);
    fread(&tools,sizeof(Inventory),1,fptr);

    if(tools.record==0){
        printf("Record #%d has no information.\n",record);
    }
    else{
        printf("%-10d%-20s%-11d%11.2f\n\n",
            tools.record, tools.toolName,
            tools.quantity, tools.cost);

        printf("Enter changed quantity add (+) or subtract (-): ");
        scanf("\n%d",&quantity);
        printf("Enter charge (+) or payment (-): ");
        scanf("%lf",&cost);

        tools.quantity+=quantity;
        tools.cost+=cost;

        printf("%-10d%-20s%-11d%11.2f\n",
            tools.record,tools.toolName,
            tools.quantity,tools.cost);

        fseek(fptr,(record-1)*sizeof(Inventory),SEEK_SET);
        fwrite(&tools,sizeof(Inventory),1,fptr);
    }
}
