#include <stdio.h>

struct student{
    char name[30];
    char ID[30];
    int age;
}s;

int main(){
    FILE *fp;

    fp = fopen("Binary.txt","w");
    if(fp == NULL){
        printf("Can not open file...");
        return 0;
    }

    printf("Name: "); scanf("%s",s.name);
    printf("ID: "); scanf("%s",s.ID);
    printf("Age: "); scanf("%i",&s.age);

    fwrite(&s,sizeof(struct student),1,fp); 
    //I use &s because 's' is a struct variable so ofcourse its not array but fwrite need it memory address :P
    fclose(fp);

    return 0;
}
