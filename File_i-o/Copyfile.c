#include <stdio.h>
int main(){
    char copy_file[30],new_file[30];
    
    printf("Enter name of file you want to copy: "); scanf("%s",copy_file);
    FILE *fp = fopen(copy_file,"r");

    if(fp == NULL){
        printf("File not found\n");
        return 1;
    }

    printf("Enter name of new file: "); scanf("%s",new_file);
    FILE *fp2 = fopen(new_file,"w");
    int ch;

    while ((ch = fgetc(fp)) != EOF)
    {
        fputc(ch,fp2);
    }
    fclose(fp);
    fclose(fp2);
    printf("\nCopy file success!\n");
    
    return 0;
}