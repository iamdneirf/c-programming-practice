#include <stdio.h>
#include <string.h>

struct wallet{
    char owner[30];
    int money;
};

void fakbok(struct wallet *p, int amount){

}

int main(){
    struct wallet mywallet;
    stpcpy(mywallet.owner,"Mappy");
    mywallet.money = 0;

    printf("================\nOwner: %s\nBalance: %i",mywallet.owner,mywallet.money);
    float deposit;
}