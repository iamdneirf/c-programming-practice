#include <stdio.h>

struct person{
    char name[20];
    char id[6];
    int age;
};

int main(){
    FILE *fp;
    struct person p[2];

    fp = fopen("Binary.txt","wb");

    for(int i = 0; i < 2; i++){
        printf("\n");
        printf("Player.%i\n",i+1);
        printf("Enter the Name: "); scanf("%s",p[i].name);
        printf("Enter the ID: "); scanf("%s",p[i].id);
        printf("Enter the Age: "); scanf("%i",&p[i].age); //I forgot &
        //fwrite(&p,sizeof(struct person),2,fp); --> Wrong
    }
    fwrite(&p,sizeof(struct person),2,fp); //--> Correct one :D

    fclose(fp);
    printf("\nSaved!!\n");

    fp = fopen("/Users/dneirf/VSCODE/Binary.txt","rb");
    if(fp == NULL){
        printf("Cannot open file");
        return 0;
    }

    if(fread(&p,sizeof(struct person),2,fp) > 0){
        for(int i = 0; i < 2 ; i++){
            printf("\nPlayer%i\n",i+1);
            printf("Name: %s\n",p[i].name);
            printf("ID: %s\n",p[i].id);
            printf("Age: %i\n",p[i].age);
            }
        }

    fclose(fp);
        printf("\nClose file\n");
    return 0;
}