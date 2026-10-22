#include <stdio.h>
#include <string.h>

struct wallet{
    char owner[30];
    float money;
};

void fakbok(struct wallet *p, float amount){
    p->money += amount;
}

int main(){
    struct wallet mywallet;
    strcpy(mywallet.owner,"Mappy");
    mywallet.money = 0;

    printf("================\nOwner: %s\nBalance: %i",mywallet.owner,mywallet.money);
    float deposit;
    printf("\nHow many you want to deposit: "); scanf("%f",&deposit);

    fakbok(&mywallet,deposit);

    printf("================\nOwner: %s\nBalance: %i\n",mywallet.owner,mywallet.money);
    return 0;
}
