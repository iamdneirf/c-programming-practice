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
    struct student max_student;

    float sum = 0.0;
    int count = 0;
    float max_score = 0.0;

    while(fscanf(fp,"%s %s %f",current.id,current.name,&current.score) == 3){
        sum += current.score;
        count++;

        if(current.score > max_score){
            max_score = current.score;
            max_student = current;
        }
    }

    fclose(fp);
    if(count > 0){
        printf("Sum : %.2f\n",(sum/count));
        printf("Top student : %s %s %.2f\n",max_student.id,max_student.name,max_student.score);
    }
    return 0;
}