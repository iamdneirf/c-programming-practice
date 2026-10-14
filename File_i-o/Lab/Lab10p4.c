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
        if(ch == NULL){

        }
        else{

        }
    }
    else{
        
    }
}

void input_student_info(int a){

}