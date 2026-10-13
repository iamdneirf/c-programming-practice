#include <stdio.h>

FILE *fp;
char ch;
struct student{
    char name[20];
    char surname[20];
    int ID;
}s[100];
void input_student_info(int);
void display_all_students(int);
void display_student_by_index(int);

int main(){

    fp = fopen("DataRecord.txt","rb");
    ch = getc(fp);
    if(ch == EOF){
        printf("This file is empty...\n");
        fclose(fp);
        input_student_info(1);
    }
    else{
        printf("\nCannot open file\n");
        input_student_info(0);
    }
    int choice;
        printf("-----------------------------\n");
        printf("          = Menu =           \n");
        printf("-----------------------------\n");
        printf("1. Display all students\n");
        printf("2. Display specific student by index\n");
        printf("3. Add student\n");
        printf("Enter the number (1,2,3) : "); scanf("%i",&choice);

        switch (choice){

        case 1:
            display_all_students();
            break;
        case 2:
            display_student_by_index();
            break;
        case 3:
            input_student_info();
            break;
        default:
            break;

        }

}

void input_student_info(int a){
    if(a){
        printf("Lets write it down!\n");
    }
    else{
        printf("Lets creating the file!");
    }
    for(for i = 0; i <);
}

void display_all_students(int a){
        printf("-----------------------------\n");
        printf("|           Data            |\n");
        printf("-----------------------------\n");
        while(ch != EOF){
            printf("%c",&ch);
            ch = getc(fp);
        }
        printf("-----------------------------\n");
}