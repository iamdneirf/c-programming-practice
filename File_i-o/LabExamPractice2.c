#include <stdio.h>
void add_student(int a){
    if(1){
        printf("Lets add student\n");
    }
    else{
        printf("Creating file....\n");
        fp = fopen("list_student","wb");
    }
}

int main(){
    FILE *fp;
    int ch;
    fp = fopen("list_student","r");
    if((ch = fgetc(fp)) == EOF){
        printf("\nEmpty file\n");
    }
    else{
        printf("\nFile not found!\n");
    }
}