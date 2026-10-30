#include <stdio.h>

struct item{
    char id[5];
    char name[20];
    float price;
};

int main(){
    FILE *fp;
    FILE *fp2;
    FILE *fp3;
    fp = fopen("branch_A.txt","r");
    fp2 = fopen("branch_B.txt","r");
    fp3 = fopen("cheapest_products.txt","w");
    if(fp == NULL || fp2 == NULL || fp3 == NULL){
        printf("\nCannot open file\n");
        return 1;
    }

    struct item first_item;
    struct item second_item;

    while(fscanf(fp,"%s %s %f",first_item.id,first_item.name,&first_item.price) == 3 && fscanf(fp2,"%s %s %f",second_item.id,second_item.name,&second_item.price) == 3){
        if(first_item.price >= second_item.price){
            fprintf(fp3,"%s %s %f",second_item.id,second_item.name,second_item.price);
        }
        else{
            fprintf(fp3,"%s %s %f",first_item.id,first_item.name,first_item.price);
        }
    }
    fclose(fp);
    fclose(fp2);
    fclose(fp3);

    printf("\nAll was successfully\n");
    return 0;
}