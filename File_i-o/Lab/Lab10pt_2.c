#include <stdio.h>
int main(){
    char str[30],str2[30];
    int ch;
    printf("Enter name of file you want to copy: "); scanf("%s",str);
    FILE *fp,*fp2;
    fp = fopen(str,"r");
    if(fp == NULL){
        printf("\nNot found....\n");
        return 0;
    }
    
    printf("Enter name of file you want to write: "); scanf("%s",str2);
    fp2 = fopen(str2,"w");

    while((ch = fgetc(fp)) != EOF){
        fputc(ch,fp2);
    }

    fclose(fp);
    fclose(fp2);
    printf("Copy file Successful!\n");

    return 0;
}