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
}