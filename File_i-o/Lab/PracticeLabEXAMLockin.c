#include <stdio.h>
struct student{
    char id[9];
    char name[20];
    float score;
};

int main(){
    FILE *fp;
    fp = fopen("students.txt","r");
    if(fp == NULL){
        printf("\nCannot open file...\n");
        return 1;
    }
    struct student current;
}