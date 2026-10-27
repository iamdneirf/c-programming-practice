#include <stdio.h>
int main(){
    FILE *fp;
    FILE *fp2;
    char filename[20];
    char newfile[20];
    int ch;

    printf("============== Copy File Program ==============\n");
    printf("Enter file name you want to COPY : "); scanf("%s",filename);
    printf("Enter name of new file : "); scanf("%s",newfile);
    printf("===============================================\n");

    fp = fopen(filename,"r");
    if(fp == NULL){
        printf("\nCannot open file.....\n");
        return 1;
    }
    fp2 = fopen(newfile,"w");
    if(fp == NULL){
        printf("\nCannot open file.....\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF){
        fputc(fp2,ch);
    }

    return 0;
}