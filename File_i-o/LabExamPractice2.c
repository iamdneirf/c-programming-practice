#include <stdio.h>
void add_student(int a){

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
        printf("Creating file....\n");
    }
}