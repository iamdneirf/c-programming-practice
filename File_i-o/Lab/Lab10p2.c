#include <stdio.h>
int main(){
    FILE *fp;
    char ch,name[20],surname[20];
    int id;
    fp = fopen("test.txt","r");
    if(fp == NULL){
        printf("Error \nCannot open file\n");
        fscanf(fp ,"%s %s %d",name,surname,&id);
        if(!fclose(fp))
            printf("\nClose file\n");
        printf("----------------\n");
        printf("| Data in file |\n");
        printf("----------------\n");
        printf("Student is %i\n",id);
        printf("Name is %s %s\n",name,surname);
    }
    else 
        printf("Error \nCannot open file\n");
    return 0;
}