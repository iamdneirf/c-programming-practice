#include <stdio.h>

struct class{
    char name[30];
    char class[30];
    int lv;
};

int main(){
    char name[30],class[30];
    printf("Enter name of Character : "); scanf("%s",name);
    printf("Enter your class (magician,swordman,shaman) : "); scanf("%s",class);
}