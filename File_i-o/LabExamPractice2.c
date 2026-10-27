#include <stdio.h>
#define N 3

FILE *fp;
struct student{
    int id;
    char name[20];
    char color[10];
}s[N];

void add_student(int a){
    if(1){
        printf("Lets add student\n");
    }
    else{
        printf("Creating file....\n");
        fp = fopen("list_student","wb");
    }
    for(int i = 0; i < N; i++){
        
    }
}

int main(){
    int ch;
    fp = fopen("list_student","r");
    if((ch = fgetc(fp)) == EOF){
        printf("\nEmpty file\n");
    }
    else{
        printf("\nFile not found!\n");
    }
}