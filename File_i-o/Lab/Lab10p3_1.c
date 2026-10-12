#include <stdio.h>
FILE *fp;
char name[20], surname[20];
int id;
void input_student_info(int);

int main(){
    char ch;
    fp = fopen("DataRecord",'r');
    if(fp != NULL){
        printf("Can open file\n");
        printf("---------------------------------------\n");
        printf("|             Data in file             |\n");
        printf("---------------------------------------\n");
        ch = getc(fp);
        while (ch != EOF)
        {
            printf("%c",ch);
            ch = getc(fp);
        }
        printf("-------------------------------------------------\n");
        if (!fclose(fp))
            printf("\nClose file\n");

        input_student_info(0);
    }
    else
        input_student_info(1);
        return 0;
}