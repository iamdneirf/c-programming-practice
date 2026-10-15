#include <stdio.h>
struct item{
    char name[20];
    int price;
    int stock;
};

void add_items(int);

int main(){
    FILE *fp;
    fp = fopen("All_item.txt","r");
    if(fp != NULL){
        int ch;
        if((ch = fgetc(fp)) == EOF){
            
        }
    }
    else{
        printf("Creating file....\n");
        fp = fopen("All_item.txt","wb");
        fclose(fp);
        add_items(1);
    }
}

void add_items(int){

}