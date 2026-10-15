#include <stdio.h>
struct item{
    char name[20];
    int price;
    int stock;
}t;
FILE *fp;
int add_items(int);
void add_stock(int);
void show_item(int);

int main(){
    fp = fopen("All_item.txt","rb");
    if(fp != NULL){
        int ch;
        if((ch = fgetc(fp)) == EOF){
            printf("This store has empty items!\n");
            fclose(fp);
        }
    }
    else{
        printf("File not found!\nCreating new file....\n");
        fp = fopen("All_item.txt","wb");
        fclose(fp);
        add_items(1);
    }
    char choice;
        fclose(fp);
        do{
            printf("=-=-=-=-=-=-=- Items -=-=-=-=-=-=-=-\n");
            show_item(1);
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
                add_items(1);
                break;
            case 'b':
                add_stock(1);
                break;
            case 'c':
                break;
            case 'd':
                printf("Exit Store!\n");
                break;
            default:
                printf("\nInvalid input!\n");
                break;
            }
        }while(choice != 'd');

        return 0;
}

void show_item(int a){
    int ch,i=1;
    fp = fopen("All_item.txt","rb");
    while(fread(&t,sizeof(struct item),1,fp) == 1){
        printf("%i Name: %s   Price: %i   Stock: %i\n",i,t.name,t.price,t.stock);
        i++;
    }
    fclose(fp);
}

int add_items(int a){
    fp = fopen("All_item.txt","ab");
    if(fp == NULL){
        printf("\nError...\n");
    }
    printf("Enter name of item: "); scanf("%s",t.name);
    printf("Enter price of item: "); scanf("%i",&t.price);
    printf("Enter stock of item: "); scanf("%i",&t.stock);

    fwrite(&t,sizeof(struct item),1,fp);
    fclose(fp);

    printf("Add item successfully!\n");
}

void add_stock(int a){
    int count = 0;
    struct item temp[100]; 
    fp = fopen("All_item.txt","rb");
    if(fp == NULL){
        printf("\nCannot open file\n");
        return;
    }
    while(fread(&temp[count],sizeof(struct item),1,fp) == 1){
        count++;
    }
    fclose(fp);
    if(count == 0){
        printf("Not found item in store...\n");
        return;
    }

    int choice,add;

    do{
    printf("Which item you want to add stock (1,2,..): "); scanf("%i",&choice);
    if(choice > count || choice < 1){
        printf("\nInvalid input!\n");
    }
    }while(choice < 1 || choice > count);   


    printf("Enter quantity to add for %s: ",temp[choice-1].name); scanf("%i",&add);

    temp[choice-1].stock += add;

    fp = fopen("All_item.txt","wb");
    for(int i = 0; i < count; i++){
    fwrite(&temp[i],sizeof(struct item),1,fp);
    }
    fclose(fp);
}