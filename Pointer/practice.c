#include <stdio.h>
#include <string.h>

struct class{
    char name[30];
    char class[30];
    int lv;
};

void Rebirth(struct class *p){
    printf("\nEveryone must start with Lv.1!\n");
    p->lv = 1;
}

int main(){
    struct class my_character;
    char name[30],class[30];
    int lv;
    printf("Enter name of Character : "); scanf("%s",name);
    printf("Enter your class (magician,swordman,shaman) : "); scanf("%s",class);
    printf("Enter your Lv : "); scanf("%i",&lv);

    strcpy(my_character.name,name);
    strcpy(my_character.class,class);
    my_character.lv = lv;

    printf("Name: %s\nClass: %s\nLv.%i\n",name,class,lv);

    Rebirth(&my_character);

    printf("Name: %s\nClass: %s\nLv.%i\n",name,class,lv);

    return 0;
}