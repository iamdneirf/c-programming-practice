#include <stdio.h>
int main(){
    FILE *fp = fopen("ReadEnglish.txt","r");
    if(fp = NULL){
        printf("\nCannot open file...\n");
        return 0;
    }

    int ch;
    int count_character = 0;
    int count_word = 0;
    int count_sentence = 0;
    int in_word = 0;

    while((ch = fgetc(fp)) != EOF ){
        count_character++;
    }
}