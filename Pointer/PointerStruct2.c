#include <stdio.h>
int main(){
    struct x{
        char * f;
        char * g;
    };

    struct x a;
    struct x *aptr;
    a.f = "Hello";
    a.g = "YES";
    aptr = &a;
    printf("f : %s\n",a.f);
    printf("f : %s\n",aptr->f);
    printf("value of f: %p\n",&a.f);
    printf("Address of f: %p\n",a.f);
    return 0;
}