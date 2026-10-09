#include <stdio.h>
int main(){
    float x[4] = {2,5,7,9};
    float *ptr_x,*ptr2_x;
    int p;

    ptr_x = &x[2];
    ptr2_x = &x[3];

    p = ptr2_x - ptr_x;
    printf("ptr2_x - ptr_x = %i\n",p);
    return 0;
}