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
        
        if(ch == '\n' || ch == '\t' || ch == ' '){
            count_word++;
        }

        if(ch == '\n'){
            count_sentence++;
        }

        if(ch == ' '){
            in_word = 0;
        }
        else if (in_word == 0){
            in_word = 1;
        }
    }

    if(count_character > 0 && ch != '\n'){
        count_sentence++;
    }

    fclose(fp);

    printf("All character: %i\n",count_character);
    printf("All word: %i\n",count_word);
    printf("All sentence: %i\n",count_sentence);

    return 0;
}