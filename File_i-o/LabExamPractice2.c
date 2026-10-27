#include <stdio.h>
#define N 3

FILE *fp;
struct student{
    int id;
    char name[20];
    char color[10];
}s[N];

void show_student(int a){
    fp = fopen("list_student.txt",);
}

void add_student(int a){
    if(1){
        printf("Lets add student\n");
    }
    else{
        printf("Creating file....\n");
        fp = fopen("list_student.txt","wb");
    }
    for(int i = 0; i < N; i++){
        printf("================== %i ==================\n",i+1);
        printf("Enter name of Student : "); scanf("%s",s[i].name);
        printf("Enter id : "); scanf("%i",&s[i].id);
        printf("Enter favourite color : "); scanf("%s",s[i].color);
        fclose(fp);
    }
}

int main(){
    int ch;
    fp = fopen("list_student.txt","r");
    if((ch = fgetc(fp)) == EOF){
        printf("\nEmpty file\n");
    }
    else{
        printf("\nFile not found!\n");
    }
}