#include <stdio.h>
#include <string.h>

struct banana{
    char color[10];
    char type[10];
};

int main(){
    struct banana b;
    struct banana *pt_b;
    strcpy(b.color,"Red"); 
    strcpy(b.type,"L2S");
    pt_b = &b;
    printf("color : %s\n",b.color); 
    printf("color : %s\n",pt_b->color);

    printf("Address of b.color: %p\n",&b.color);
    return 0;
}