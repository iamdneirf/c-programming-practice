#include <stdio.h>
FILE *fp;
char name[20], surname[20];
int id;
void input_student_info(int);

int main(){
    char ch;
    fp = fopen("DataRecord.txt","r");
    if(fp != NULL){
        printf("Can open file (read)\n");
        printf("---------------------------------------\n");
        printf("|             Data in file             |\n");
        printf("---------------------------------------\n");
        ch = getc(fp);
        while (ch != EOF)
        {
            printf("%c",ch);
            ch = getc(fp);
        }
        printf("\n-------------------------------------------------\n");
        if (!fclose(fp))
            printf("\nClose file\n");

        input_student_info(0);
    }
    else
        input_student_info(1);
        return 0;
}

void input_student_info(int mode){
    if(mode){
        fp = fopen("DataRecord.txt","w");
        printf("Can open file (overwrite)\n");
    }
    else{
        fp = fopen("DataRecord.txt","a");
        printf("Can open file (append)\n");
    }
    printf("Enter ID        : "); scanf("%i",&id);
    printf("Enter Name      : "); scanf("%s",name);
    printf("Enter Surname   : "); scanf("%s",surname);
    fprintf(fp,"%s %s %d\n",name,surname,id);
}