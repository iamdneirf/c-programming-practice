#include <stdio.h>
#define MAX 10 //Using #define improve code flexibility :D

int main(){
    struct member{
        char name[20];
        int age;
    }m[MAX];

    struct member *mptr;
    mptr = m;

    for(int i = 0; i < MAX; i++ , mptr++ ){
        printf("Character %i\n",i+1);
        printf("\tname: "); scanf("%19s", mptr->name);
        printf("\tage: "); scanf("%i", &(mptr->age));
    }
    mptr -= MAX;

    for(int i = 0; i < MAX;i++ , mptr++){
        if((mptr->age) < 20){
        printf("%s,%i\n",mptr->name, mptr->age);
        }
    }

    return 0;
}