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
}