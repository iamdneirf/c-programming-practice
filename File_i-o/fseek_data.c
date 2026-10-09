#include <stdio.h>
#include <string.h>

struct student{
    char name[30];
    char id[6];
    int age;
}s;

int main(){
    FILE *fp;
    fp = fopen("fseek.txt","wb");
    printf("\nOpen file\n");

    strcpy(s.name,"Student X"); strcpy(s.id,"18859"); s.age = 99;
    fwrite(&s,sizeof(struct student),1,fp);
    strcpy(s.name,"Student Y"); strcpy(s.id,"18855"); s.age = 22;
    fwrite(&s,sizeof(struct student),1,fp);
    strcpy(s.name,"Student Z"); strcpy(s.id,"18859"); s.age = 44;
    fwrite(&s,sizeof(struct student),1,fp);

    printf("\nWritten file already!\n");

    fclose(fp);
    printf("\nClose file!\n");
    printf("\n=====SELECT BYTES TO READ=====\n");

    int offset = 0*sizeof(struct student);
    fp = fopen("fseek.txt","rb");
    if(fp == NULL){
        printf("\nCannot open file\n");
        return 1;
    }
    printf("\nOpen file\n\n");

    if(fseek(fp,offset,SEEK_SET) == 0){ //0 mean capable to point the bytes we need (sry for my bad english explain)
        if(fread(&s,sizeof(struct student),1,fp)){
            printf("Name: %s\n", s.name); //used %29s thinking it would limit input char 29 chars Lol
            printf("ID: %s\n", s.id);
            printf("Age: %i\n", s.age); //broo I accidentally put "&" out of habits from scanf TwT
        }
    }
    fclose(fp);
    printf("\nClose File!\n");
    
    return 0;
}
