#include <stdio.h>

int reference(int *);

int main(){
    int a = 1;
    reference(a);
    printf("%i\n",a);

    return 0;
}

int reference(int *ptr){
    *ptr = *ptr + 1;
}