#include <stdio.h>
struct item{
    char name[20];
    int price;
    int stock;
}t;
FILE *fp;
void add_items(int);

int main(){
    fp = fopen("All_item.txt","r");
    if(fp != NULL){
        int ch;
        if((ch = fgetc(fp)) == EOF){
            printf("This store has empty items!\n");
            fclose(fp);
        }
        else{
            fclose(fp);
            char choice;
            printf("=============== MENU ===============\n");
            printf("a. --> Add items\n");
            printf("b. --> Add stock\n");
            printf("c. --> Sell item\n");
            printf("d. --> Exit Store\n");
            printf("====================================\n");
            printf("Select the option: "); scanf("%c",&choice);

            switch (choice)
            {
            case 'a':
                
                break;
            case 'b':
                break;
            case 'c':
                break;
            case 'd':
                break;
            default:
                
                break;
            }
        }
    }
    else{
        printf("File not found!\nCreating new file....\n");
        fp = fopen("All_item.txt","wb");
        fclose(fp);
        add_items(1);
    }
}

void add_items(int a){
    fp = fopen("All_item.txt","ab");
    if(fp == NULL){
        printf("\nError...\n");
        return 0;
    }
    printf("Enter name of item: "); scanf("%s",);
}