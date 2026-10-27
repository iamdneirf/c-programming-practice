#include <stdio.h>
int main(){
    FILE *fp;
    FILE *fp2;
    char filename[20];
    char newfile[20];
    printf("============== Copy File Program ==============\n");
    printf("Enter file name you want to COPY : "); scanf("%s",filename);
    printf("Enter name of new file : "); scanf("%s",newfile);
    printf("===============================================\n");

    fp = fopen(filename,"r");
}