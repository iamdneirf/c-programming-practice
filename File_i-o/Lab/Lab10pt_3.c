#include <stdio.h>
struct item{
    char name[20];
    int price;
    int stock;
};

int main(){
    FILE *fp;
    fp = fopen("All_item.txt","r");
    if(fp != NULL){

    }
    else{
        printf("Creating file....\n");
        fp = fopen("All_item.txt","wb");
        fclose(fp);
    }
}