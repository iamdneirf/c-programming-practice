#include <stdio.h>
struct student{
    char id[9];
    char name[20];
    float score;
};

int main(){
    FILE *fp;
    fp = fopen("students.txt","r");
    
    struct student current;
    struct student Top_student;

    float sum = 0;
    int count = 0;
    float max_score = 0.0;

    while(fscanf(fp,"%s %s %i",current.id,current.name,current.score) == 3){
        sum += current.score;
        count++;

        if(current.score > max_score){
            max_score = current.score;
            Top_student = current;
        }
    }
    fclose(fp);

    if(count > 0){

    }
}