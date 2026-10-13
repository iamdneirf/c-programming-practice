#include <stdio.h>

FILE *fp;
struct student{
    char name[20];
    char surname[20];
    int ID;
}s[50];
void input_student_info(int);

int main(){
    char ch;
    ch = getc(fp);
    fp = fopen("DataRecord.txt","rb");
    if(ch == EOF){
        printf("This file is empty...\n");
        input_student_info(1);
    }
    else{
        printf("-----------------------------\n");
        printf("|           Data            |\n");
        printf("-----------------------------\n");
        while(ch != EOF){
            printf("%c",&ch);
            ch = getc(fp);
        }
        printf("-----------------------------\n");
    }
}

void input_student_info(int a){
    if(a){
        printf("Lets write it down!\n");
    }
    else{
        printf("Lets creating the file!");
    }
}