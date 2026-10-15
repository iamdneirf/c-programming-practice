#include <stdio.h>
int main(){
    FILE *fp = fopen("ReadEnglish.txt","r");
    if(fp = NULL){
        printf("\nCannot open file...\n");
        return 0;
    }
}