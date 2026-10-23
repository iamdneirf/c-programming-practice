#include <stdio.h>

struct class{
    char name[30];
    char class[30];
    int lv;
};

int main(){
    struct class my_character;
    char name[30],class[30];
    int lv;
    printf("Enter name of Character : "); scanf("%s",name);
    printf("Enter your class (magician,swordman,shaman) : "); scanf("%s",class);
    printf("Enter your Lv : "); scanf("%i",&lv);

    printf("Name: %s\nClass: %s\nLv.%i",name,class,&lv);
}