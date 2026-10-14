#include <stdio.h>
#define N 30
FILE *fp;
struct student{
    char name[20];
    char surname[20];
    int id;
}s[N];

void input_student_info(int);
int main(){
    char ch;
    fp = fopen("StRecord.txt","rb");
    ch = getc(fp);
    if(fp != NULL){
        if(ch == EOF){
            printf("\nThis file is empty\n");
            fclose(fp);
        }
        else{

        }
    }
    else{

    }
}

void input_student_info(int a){
    if(1){
        printf("Lets add student!\n");
    }
    else{
        printf("creating file....\n");
    }
}