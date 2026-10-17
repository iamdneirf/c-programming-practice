#include <stdio.h>
int main(){
    char copy_file[30],new_file[30];
    printf("Enter name of file you want to copy: "); scanf("%s",copy_file);
    FILE *fp = fopen(copy_file,"r");
    printf("Enter name of new file: "); scanf("%s",new_file);
    FILE *fp2 = fopen(new_file,"w");
    int ch;

    while ((ch = fgetc(fp)) == 1)
    {
        fputc(ch,new_file);
    }
    
}