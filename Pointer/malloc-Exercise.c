#include <stdio.h>
#include <string.h>

struct wallet{
    char owner[30];
    int money;
};

void fakbok(struct wallet *p, float amount){
    p->money += amount;
}

int main(){
    struct wallet mywallet;
    stpcpy(mywallet.owner,"Mappy");
    mywallet.money = 0;

    printf("================\nOwner: %s\nBalance: %i",mywallet.owner,mywallet.money);
    float deposit;
    printf("\nHow many you want to deposit: "); scanf("%f",&deposit);

    fakbok(&mywallet,deposit);

    printf("================\nOwner: %s\nBalance: %i\n",mywallet.owner,mywallet.money);
    return 0;
}