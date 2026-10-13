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
    }
    else{
        printf("-----------------------------\n");
        printf("|           Data            |\n");
        printf("-----------------------------\n");
        while(ch != EOF){
            printf("%c",&ch);
            ch = getc(fp);
        }
    }
}

void input_student_intfo(int a){

}