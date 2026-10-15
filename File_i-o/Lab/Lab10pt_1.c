#include <stdio.h>
FILE *fp;
int main(){
    fp = fopen("ReadENGLISH","r");
    if(fp == NULL){
        printf("\nCannot open file\n");
        return 0;
    }

}