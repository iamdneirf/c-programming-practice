#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("list_student","r");
    if(fp == NULL){
        printf("\nCannot open file...\n");
        return 1;
    }
}