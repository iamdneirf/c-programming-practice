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
    struct student mx_student;

    float sum = 0.0;
    int count = 0;
    float max_score = 0.0;

    while(fscanf(fp,"%s %s %f",current.id,current.name,current.score) == 3){
        sum += current.score;
        count++;


        if(current.score > max_score){
            max_score = current.score;
        }
    }

}