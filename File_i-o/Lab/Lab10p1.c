#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("text.txt","r");
    if(fp == NULL)
        printf("Error \nCannot open file\n");
    else printf("Can open file\n");
    return 0;
}