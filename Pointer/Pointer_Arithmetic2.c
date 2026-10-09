#include <stdio.h>
int main(){
    int x[3] = {1,4,6};
    int *ptr_x = x;

    for(int i = 0;i < 3;i++){
        printf("ptr_x[%i] = %i\n",i,*(ptr_x + i));
    }

    return 0;
}