#include <stdio.h>

struct item{
    char id[5];
    char name[20];
    float price;
};

int main(){
    FILE *fp;
    FILE *fp2;
    fp = fopen("branch_A.txt","r");
    fp2 = fopen("branch_B.txt","r");

    struct item first_item;
    struct item second_item;

    while(fscanf(fp,"%s %s %f",first_item.id,first_item.name,&first_item.price) == 3 && fscanf(fp,"%s %s %f",second_item.id,second_item.name,&second_item.price) == 3){
        if(first_item.price > second_item.price){
            fprintf(fp,"%s %s %s",second_item.id,second_item.name,second_item.price);
        }
        else if(second_item.price > first_item.price){

        }
    }
}