#include <stdio.h>
int main(){
    char str[30],str2[30],ch;
    printf("Enter name of file you want to copy: "); scanf("%s",str);
    FILE *fp;
    fp = fopen(str,"r");
    printf("Enter name of file you want to write: "); scanf("%s",str2);
    fp = fopen(str2,"w");

    while((ch = fgetc(fp)) != EOF){
        
    }
}