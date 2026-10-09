#include <stdio.h>
int main(){
    int v[5] = {4,5,6,7,8};
    int *ptr_v,num1,num2;
    ptr_v = v; //ptr_v = &v[0]; , ละไว้ในฐานที่เข้าใจว่าเป็น Address ของสมาชิกตัวแรกสุด
    num1 = *ptr_v;

    ptr_v = &v[2];
    num2 = *ptr_v;

    printf("value of num1: %i\n",num1);
    printf("value of num2: %i\n",num2);

    return 0;
}